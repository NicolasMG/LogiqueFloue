#pragma once
#include "../Core/BinaryExpression.h"
namespace fuzzy {
	template<typename T>
	class MandaniDefuzz {

	public:
		MandaniDefuzz() {};
		virtual T evaluate(Expression i, Expression r) const = 0;
	};
}