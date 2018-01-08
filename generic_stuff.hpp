
#include<type_traits>
#include<typeinfo>

   // successfully runs
template<typename T> struct Type
{
	typedef typename std::conditional<std::is_integral<T>::value, int, std::string>::type type;
};

template<>struct Type<float>
{
	typedef float type;
};

template<>struct Type<char>
{
	typedef std::string type;
};

template<>struct Type<wchar_t>
{
	typedef std::string type;
};

template<typename T> auto add( const std::vector<T>& v)->typename Type<T>::type
{
	typename Type<T>::type result = {};
	for(auto s : v)
		result += s;
	return result;
}

	// Factorial 
template<size_t N>struct factorial
{
	 const static auto value = N * factorial<N-1>::value;
};

template<>struct factorial<0>
{
	 const static auto value = 1;
};

	// Print-Copies
template<size_t N>void print_copies(const std::string& value)
{
	for(int i=0; i<N; ++i)
		std::cout<<value<<std::endl;
}

	// Master-Printer
void printer() {std::cout<<std::endl;}
template<typename T, typename... Arg>void printer(const T& value, Arg... arg )
{
	std::cout<<" "<<value<<std::endl;
	printer(arg...);
}


