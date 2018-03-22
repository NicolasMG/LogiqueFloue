#pragma once
#include "is.h"
namespace fuzzy {
	template<typename T>
	class isTriangle : public Is {

	public:
		isTriangle(T _min, T _mid, T max) { min = _min; mid = _mid; max = _max};
		virtual T evaluate(Expression o) const = 0;
		virtual T min;
		virtual T mid;
		virtual T max;
	};
}