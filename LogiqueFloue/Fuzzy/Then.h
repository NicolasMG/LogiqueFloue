#pragma once

#include "../Core/BinaryExpression.h"
namespace fuzzy {
	template<typename T>
	class Then : public BinaryExpression {

	public:
		Then() {};
		virtual T evaluate(Expression i, Expression r) const = 0;
	};
}