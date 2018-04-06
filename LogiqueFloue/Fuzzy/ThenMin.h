#pragma once
#include "../Core/Expression.h"
#include "Or.h"

namespace fuzzy {
	template<typename T>
	class ThenMin : public Or<T> {

	public:
		virtual ~ThenMin() = default;
		virtual T evaluate(core::Expression<T> *left, core::Expression<T>*right) const;


	};
	template<typename T>
	T ThenMin<T>::evaluate(core::Expression<T>*left, core::Expression<T>*right)const {
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
}