#ifndef DATA_HPP
# define DATA_HPP

# include <iostream>
# include <string>

typedef struct s_Data
{
	std::string name;
	int age;
	double sold;
} Data;

Data* deserialize(uintptr_t raw);
uintptr_t serialize(Data* ptr);
#endif