#pragma once

#include "Agg.h"

namespace fuzzy {
	template<typename T>
	class AggMax : public Agg {
	public:
		AggMax() {};

		virtual T evaluate(expression l, Expression r) {
			if (l == null) throw new NullExpressionException();
			if (r == null) throw new NullExpressionException();
			if (_operator == null) throw new NullOperatorException();

			//
		}

	};
}