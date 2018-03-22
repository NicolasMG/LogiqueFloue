#pragma once
#include "Or.h"
namespace fuzzy {
	template<typename T>
	class OrPlus : public Or {

	public:
		OrPlus() {};
		virtual T evaluate(expression l, Expression r) {
			if (l == null) throw new NullExpressionException();
			if (r == null) throw new NullExpressionException();
			if (_operator == null) throw new NullOperatorException();

		}
	};
}