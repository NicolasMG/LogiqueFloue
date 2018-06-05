#pragma once
#pragma once

#include <stdexcept>
#include <string>

namespace exceptions {
	struct OperatorException : public std::runtime_error {
		OperatorException(const std::string & msg) : std::runtime_error(msg) {}
		const char* what() const throw() override {
			return std::runtime_error::what();
		}
	};
}