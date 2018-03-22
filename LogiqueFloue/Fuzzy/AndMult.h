#pragma once
#include "And.h"
namespace fuzzy {
	template<typename T>
	class AndMult : public And {

	public:
		AndMult() {};
		virtual T evaluate(expression l, Expression r) {
			if (l == null) throw new NullExpressionException();
			if (r == null) throw new NullExpressionException();
			if (_operator == null) throw new NullOperatorException();

		}
	};
}