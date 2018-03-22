#pragma once

#include "../Core/BinaryExpression.h"
namespace fuzzy {
	template<typename T>
	class Or : public BinaryExpression {

	public:
		Or() {};
		virtual T evaluate(Expression i, Expression r) const = 0;
	};
}