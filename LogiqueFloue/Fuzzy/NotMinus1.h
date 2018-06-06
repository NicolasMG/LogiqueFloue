#pragma once
#include "Not.h"
#include "../Core/Expression.h"
namespace fuzzy {
	template<typename T>
	class NotMinus1 : public Not<T> {

	public:
		virtual ~NotMinus1() =default;
		virtual T evaluate(core::Expression<T> *expression) const;
	};
	template<typename T>
	T NotMinus1<T>::evaluate(core::Expression<T> * expression) const {
		return 1 - expression->evaluate();
	}
}