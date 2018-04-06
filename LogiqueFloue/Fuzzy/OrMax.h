#pragma once
#include "../Core/Expression.h"
#include "Or.h"

namespace fuzzy {
	template<typename T>
	class OrMax : public Or<T> {

	public:
		virtual ~OrMax() = default;
		virtual T evaluate(core::Expression<T> *left, core::Expression<T>*right)const;


	};
	template<typename T>
	T OrMax<T>::evaluate(core::Expression<T>*left, core::Expression<T>*right)const {
		T leftEval = left->evaluate();
		T rightEval = right->evaluate();

		return (leftEval < rightEval) ? rightEval : leftEval;
	}
}