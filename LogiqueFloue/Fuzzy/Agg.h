#pragma once
#include "../Core/BinaryExpression.h"
namespace fuzzy {
	template<typename T>
	class Agg : public BinaryExpression {
	public:
		virtual T evaluate(Expression i, Expression r) const = 0;

	};
}