#ifndef PRINT_HPP_INCLUDED_
#define PRINT_HPP_INCLUDED_

#include <fstream>
#include <iostream>
#include <string>

void print(const std::string& text, std::ofstream& out);
void print(const std::string& text, std::ostream& out = std::cout);

#endif /* PRINT_HPP_INCLUDED_
