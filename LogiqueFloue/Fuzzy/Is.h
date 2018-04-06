#pragma once

#include "../Core/UnaryExpression.h"
#include "../Core/Expression.h"
namespace fuzzy {
	template<typename T>
	class Is : public UnaryExpression<T> {

	public:
		virtual ~Is()= default;
		virtual T evaluate(Expression<T> *expression) const;

	};
}