#pragma once

#include <stdexcept>
#include <string>

namespace exceptions {
	struct EvaluationException : public std::runtime_error {
		EvaluationException(const std::string & msg) : std::runtime_error(msg) {}
		const char* what() const throw() override{
			return std::runtime_error::what();;
		}
	};
}