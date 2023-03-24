/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bitcoin.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: waelhamd <waelhamd@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/19 10:29:10 by waelhamd          #+#    #+#             */
/*   Updated: 2023/03/20 14:04:32 by waelhamd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<iostream>
#include<map>
#include<string>
#include <sstream>
#include <iomanip>
#include <ctime>
#include <fstream>

void fil_the_map(std::fstream &datafile, std::map<int, float> &data )
{
    int year = 0, month = 0, day = 0 ,key = 0;
    std::string buffer;
    std::string save;
    float value;
    size_t  pos = 0;
    char sep = '-';
    while(getline(datafile, buffer))
    {
        pos = buffer.find(",");
        save = buffer.substr(0, pos);
        std::istringstream ss(save);
        ss >> year >>sep>> month >>sep>>day;
        
        key = year * 365 + month * 12 + day;
        
        save = buffer.substr(pos + 1, buffer.length());
        try{
            value = stof(save);
        }catch(std::exception &e){
            data.insert(std::make_pair(0, 0));
        }
        data.insert(std::make_pair(key, value));
    }
}

std::string ft_erase(std::string &date)
{
    std::string result = "";
    std::string::iterator it = date.begin();
    for(it; it != date.end(); it++)
    {
        if(*it != ' ' && *it != '\n' && *it != '\t')
            result += *it;
    }
    return result;
}

bool Leapyear(int year) {
    if ((year % 4 == 0) && (year % 100 != 0 || year % 400 == 0)) {
        return true;
    } else {
        return false;
    }
}

int parse_date(std::string &date)
{
    std::string result = ft_erase(date);
    std::tm dt = {};
    std::istringstream ss(result);
    if(result == "date")
        return 2;
    if(ss >> std::get_time(&dt, "%Y-%m-%d"))
    {
        if(dt.tm_year + 1900 < 2009 || dt.tm_year + 1900 > 2023 || dt.tm_mon + 1 > 12 || dt.tm_mon + 1 < 1 || dt.tm_mday < 1 || dt.tm_mday > 31)
                return 0;
        else if(dt.tm_mon == 1 && ((!Leapyear(dt.tm_year+1900) && dt.tm_mday > 28) || (Leapyear(dt.tm_year+1900) && dt.tm_mday > 29)))
            return 0;
        else if((dt.tm_mon == 3 || dt.tm_mon == 5 ||dt.tm_mon == 8 ||dt.tm_mon == 10) && dt.tm_mday > 30)
            return 0;
        else
            return 1;
        
    }
    else
        return 0;
}

int parse_value(std::string &value)
{
    int neg = 0;
    int dot = 0;
    std::string result = ft_erase(value);
    if(result[0] == '.')
        return 0;
    for(int i = 0; i < result.length(); i++)
    {
        if(result[i] == '-'){
            neg++; i++;
        }
        if(!isdigit(result[i]) && result[i] != '.')
            return 0;
        if(result[i] == '.')
            dot++;
    }
    if(neg > 0)
        return 2;
    if(dot > 1)
        return 0;
    return 1;
}
int error_handler(int &date_status, int &value_status, std::string &date, std::string &value)
{
    if(!date_status)
        std::cout<<"Error: bad input => "<<date<<std::endl;
    else if(!value_status)
        std::cout<<"Error: bad input => "<<value<<std::endl;
    else if(value_status == 2)
        std::cout<<"Error: not a positive number"<<std::endl;
    else if(std::stof(value) > 1000)
        std::cout<<"Error: too large a number."<<std::endl;
    else
        return 1;
    return 0;
}

int main(int ac, char **av) 
{
    std::fstream datafile("data.csv"), input(av[1]);
    
    if (!datafile.is_open() || !input.is_open() || ac != 2){
        std::cout<<"Error: could not open file."<<std::endl;
        return 1;
    }
    std::map<int, float> data;
    fil_the_map(datafile, data);
    std::string line;
    std::string date;
    std::string value;
    
    while(getline(input, line))
    {
        size_t pos= line.find('|');
        if(pos != std::string::npos)
        {
            date = line.substr(0, pos);
            value = line.substr(pos + 1, line.length() - 1);
            int date_status = parse_date(date);
            int value_status = parse_value(value);
            if(date_status != 2)
            {
                if(!error_handler(date_status, value_status, date, value));
                else  
                {
                    int key = 0, year = 0, month = 0, day = 0;
                    char sep ='-';
                    std::istringstream ss(date);
                    ss >> year >>sep>> month >>sep>>day;
                    key = year * 365 + month * 12 + day;                
                    while(!data.count(key))
                        key--;
                    std::cout<< date << " => "<< data[key] << " = " << data[key] * std::atof(value.c_str())<< std::endl;
                }
            }      
        }
        else
            std::cout<<"Error: bad input => "<<date<<std::endl;
    }
}
