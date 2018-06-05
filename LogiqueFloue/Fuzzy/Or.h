#pragma once

#include "../Core/BinaryExpression.h"
#include "../Core/Expression.h"

namespace fuzzy {
	template<typename T>
	class Or : public BinaryExpression<T> {
	public:
		virtual ~Or() = default;
		virtual T evaluate(Expression<T> *left, Expression<T> *right) const = 0;
	};
}