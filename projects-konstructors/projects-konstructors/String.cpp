#include "String.h"
#include "iostream"

String::String(int a)
{
	field = a;
	std::cout << "constructor" << std::endl;
}

String::~String()
{
	//std::cout << " Destructor" << std::endl;
	//delete &field;
}

String::String(const String & str)
{
	std::cout << "Copy constructor" << std::endl;
	field = str.field;
}

String::String(String && rhs) : field(0)
{
	std::cout << "Move constructor" << std::endl;
	field = rhs.field;
	rhs.field = 0;
}
String& String::operator=(const String & rhs)
{
	std::cout << "Copy assignment" << std::endl;
	field = rhs.field;
	return *this;
}

String& String::operator=(String && rhs)
{
	std::cout << "Move operator " << std::endl;
	if (this != &rhs)
	{
		//delete[] & field;
		field = rhs.field;
		rhs.field = 0;
	}
	return *this;
}

String createNewClass(int a)
{
	String newString(a);
	return newString;
}