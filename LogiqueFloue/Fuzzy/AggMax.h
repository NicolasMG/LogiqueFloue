#pragma once

#include "Agg.h"
#include "../core/Expression.h"
namespace fuzzy {
	template<typename T>
	class AggMax : public And<T> {

	public:
		virtual ~AggMax() = default;
		virtual T evalutate(core::Expression<T> *left, core::Expression<T> *right) const;
	};

	template<class T>
	T AggMax<T>::evalutate(core::Expression<T> *left, core::Expression<T> *right) const {
		T leftEval, rightEval;
		leftEval = left->evaluate();
		rightEval = right->evaluate();
		return (leftEval < rightEval) ? rightEval : leftEval;
	}
}