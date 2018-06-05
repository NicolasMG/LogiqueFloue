#pragma once

#include "../Core/Expression.h"
#include "Then.h"

namespace fuzzy {
	template<typename T>
	class ThenMin : public Then<T> {

	public:
		virtual ~ThenMin() = default;
		virtual T evaluate(core::Expression<T> *left, core::Expression<T>*right) const {
			T leftEval, rightEval;
			leftEval = left->evaluate();
			rightEval = right->evaluate();
			if (leftEval > rightEval) {
				return rightEval;
			}
			else {
				return leftEval;
			}
		}
	};
}