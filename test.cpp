#include <iostream>
#include <iomanip>
#include <sstream>

int main() {
    std::string date_str = "20a1-02-31";
    std::tm date = {};

    std::istringstream ss(date_str);
    if(ss >> std::get_time(&date, "%Y-%m-%d"))
        std::cout<<"good"<<std::endl;
    else
        std::cout<<"bad"<<std::endl;


    // std::cout << "Year: " << date.tm_year + 1900 << std::endl;
    // std::cout << "Month: " << date.tm_mon + 1 << std::endl;
    // std::cout << "Day: " << date.tm_mday << std::endl;
    return 0;
}