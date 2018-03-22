#pragma once
#include "../Core/BinaryExpression.h"
namespace fuzzy {
	template<typename T>
	class MandaniDefuzz {

	public:
		MandaniDefuzz() {};
		virtual T evaluate(expression l, Expression r) {
			if (l == null) throw new NullExpressionException();
			if (r == null) throw new NullExpressionException();
			if (_operator == null) throw new NullOperatorException();

		}
	};
}