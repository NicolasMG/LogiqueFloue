#pragma once
#include "MamdaniDefuzz.h"
namespace fuzzy {
	template<typename T>
	class CogDefuzz : public MandaniDefuzz {

	public:
		CogDefuzz() {};
		virtual T evaluate(expression l, Expression r) {
			if (l == null) throw new NullExpressionException();
			if (r == null) throw new NullExpressionException();
			if (_operator == null) throw new NullOperatorException();

		}
	};
}