#pragma once
// using standard exceptions
#include <iostream>
#include <exception>

namespace core {
	class NullOperatorException : public std::exception
	{

		NullOperatorException() {}

		virtual const char* what() const throw()
		{
			return "operator is missing";
		}
	}


}