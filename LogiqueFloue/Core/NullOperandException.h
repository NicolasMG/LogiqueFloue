#pragma once
// using standard exceptions
#include <iostream>
#include <exception>

namespace core {
	class nullOperandException : public std::exception
	{

		nullOperandException() {}

		virtual const char* what() const throw()
		{
			return "operand is missing";
		}
	} 

	
}