#pragma once

#include "../Core/UnaryExpression.h"
#include "../Core/Expression.h"
namespace fuzzy {
	template<typename T>
	class Not : public UnaryExpression<T> {
	public:
		virtual ~Not() = default;
		virtual T evaluate(Expression<T> * expression) const = 0;
	};
}