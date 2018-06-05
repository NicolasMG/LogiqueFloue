#pragma once

#include <stdexcept>
#include <string>

namespace exceptions {
	struct OperandException : public std::runtime_error {
		OperandException(const std::string & msg) : std::runtime_error(msg) {}
		const char* what() const throw() override{
			return std::runtime_error::what();
		}
	};
}