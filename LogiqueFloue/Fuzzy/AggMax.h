#pragma once

#include "Agg.h"
#include "../core/Expression.h"
namespace fuzzy {
	template<typename T>
	class AggMax : public Agg<T> {

	public:
		virtual ~AggMax() = default;
		virtual T evaluate(Expression<T> *left, Expression<T> *right) const;
	};

	template<class T>
	T AggMax<T>::evaluate(Expression<T> *left, Expression<T> *right) const {
		T leftEval = left->evaluate();
		T rightEval = right->evaluate();
		return (leftEval < rightEval) ? rightEval : leftEval;
	}
}