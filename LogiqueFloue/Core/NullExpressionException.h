#pragma once
// using standard exceptions
#include <iostream>
#include <exception>

namespace core {
	class NullExpressionException : public std::exception
	{

		NullExpressionException() {}

		virtual const char* what() const throw()
		{
			return "operator is missing";
		}
	}


}