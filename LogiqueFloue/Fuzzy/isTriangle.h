#pragma once

#include "Is.h"
#include "../Core/Expression.h"

namespace fuzzy {
	template<typename T>
	class isTriangle : public Is<T> {

	public:
		isTriangle(T min=0, T mid=0, T max=0);
		virtual ~IsTriangle() = default;
		virtual T evaluate(core::Expression<T> *expression) const ;
	private:
		T min;
		T mid;
		T max;
	};

	template<typename T>
	isTriangle<T>::isTriangle(T min, T mid, T max) : min(min), mid(mid), max(max) {

	}

	template<typename T>
	T isTriangle<T>::evaluate(core::Expression<T> * expression) const {
		T evaluation = expression->evaluate();

		if (evaluation<min || evaluation> max) {
			std::cout << "if " << std::endl;
			return 0;
		}
		return (eval < mid) ? (evaluation - min) / (mid - min) : (max - evaluation) / (max - mid);
	}
}