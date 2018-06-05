#pragma once
#include "../core/Expression.h"
#include "Then.h"

namespace fuzzy {

	template <typename T>
	class SugenoThen : public core::Then<T> {
	public:
		SugenoThen() : premiseValue(0) {};
		virtual ~SugenoThen() = default;

		virtual T evaluate(core::Expression<T> *left, core::Expression<T> *right) const {
			premiseValue = left->evaluate();
			T rightEval = right->evaluate();
			return premiseValue * rightEval;
		};
		virtual T getPremiseValue() const {
			return premiseValue;
		};

	private:
		T premiseValue;
	};

}