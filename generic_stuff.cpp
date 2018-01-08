

#include <iostream>
#include <vector>

#include "generic_stuff.hpp"


int main()
{
	std::vector<int> v_int = {1,2,3,4,5};
	std::cout<<add(v_int)<<std::endl;
	
	std::vector<float> v_float = {1.1,2.2,3.3,4.4,5.5};
	std::cout<<add(v_float)<<std::endl;

	std::vector<std::string> v_string = {"Nafis", " Ayaz"};
	std::cout<<add(v_string)<<std::endl;

	std::vector<char> v_char = {'n','a', 'f', 'i', 's'};
	std::cout<<add(v_char)<<std::endl;
	
	std::vector<wchar_t> v_wchar_t = {'N','A', 'F', 'I', 'S'};
	std::cout<<add(v_wchar_t)<<std::endl;
	
	//factorial
	std::cout<< factorial<5>::value <<std::endl;
	
	// Print Copies
	const int N = 10;
	print_copies<N>("Hello Nafis");

	//Master-Printer
	printer(1,345.23,"ffef",'c', "NAFIS AYAZ");


}


