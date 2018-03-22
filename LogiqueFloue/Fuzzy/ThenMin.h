#pragma once
#include "Then.h"
namespace fuzzy {
	template<typename T>
	class ThenMin : public Then {

	public:
		ThenMin() {};
		virtual T evaluate(expression l, Expression r) {
			if (l == null) throw new NullExpressionException();
			if (r == null) throw new NullExpressionException();
			if (_operator == null) throw new NullOperatorException();

		}
	};
}