#pragma once

#include "Is.h"
#include "../Core/Expression.h"
#include "../Exceptions/OperandException.h"

namespace fuzzy {
	template<typename T>
	class IsTriangle : public Is<T> {

	public:
		IsTriangle(T min, T mid, T max) : min(min), mid(mid), max(max) {
		};
		virtual ~IsTriangle() = default;
		virtual T evaluate(core::Expression<T> *expression) const {
			T evaluation = expression->evaluate();

			if (evaluation<min || evaluation> max) {
				std::cout << "if " << std::endl;
				return 0;
			}
			return (eval < mid) ? (evaluation - min) / (mid - min) : (max - evaluation) / (max - mid);
		};
	private:
		T min;
		T mid;
		T max;
	};
}