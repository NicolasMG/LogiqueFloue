#pragma once

#include "And.h"
#include "../core/Expression.h"

namespace fuzzy {
	template<typename T>
	class AndMin : public And<T> {

	public:
		virtual ~AndMin() = default;
		virtual T evaluate(Expression<T> *left, Expression<T> *right) const {
			T leftEval, rightEval;
			leftEval = left->evaluate();
			rightEval = right->evaluate();
			if (leftEval > rightEvalt) {
				return rightEval;
			}
			else {
				return leftEval;
			}
		};
	};
}