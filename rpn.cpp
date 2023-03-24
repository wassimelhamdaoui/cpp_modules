/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rpn.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: waelhamd <waelhamd@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/20 14:04:46 by waelhamd          #+#    #+#             */
/*   Updated: 2023/03/21 14:30:53 by waelhamd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<iostream>
#include<string>
#include<stack>


int make_operation(char c, int value1, int value2)
{
    switch(c){
        case '+': return (value1 + value2);
        case '-': return (value2 - value1);
        case '*': return (value1 * value2);
        case '/': if(value1 == 0)
                    {
                        std::cout<<"syntax error."<<std::endl;
                        exit(0);
                    }
                return (value1 / value2);
        default :
            return 0;
    }
}
int main(int ac, char **av)
{
    if (ac != 2) {
        std::cout << "Error: Invalid arguments."<<std::endl;
        return 1;
    }
    std::string arg(av[1]);
    std::stack<int> data;
    for(int i = 0; i < arg.length(); i++)
    {
        if(isdigit(arg[i]))
            data.push(arg[i] - '0');
        else if((arg[i] == '+' || arg[i] == '*' || arg[i] =='-' || arg[i] == '/'))
        {
            if(data.size() < 2)
            {
                std::cout<<"form error ."<<std::endl;
                return 1;
            }
            int value1 = data.top();
            data.pop();
            int value2 = data.top();
            data.top();
            data.push(make_operation(arg[i], value1, value2));
        }
        else if(arg[i] != ' ' || arg[i] != '\t'){
            std::cout<<"invalid input ."<<std::endl;
            return 1;
        }
        
    }
    if(data.size() > 1){
        std::cout<<"error incomplete form ."<<std::endl;
        return 1;
    }
    std::cout<<data.top()<<std::endl;
    
}