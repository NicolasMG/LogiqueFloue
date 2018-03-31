#pragma once
#include "../Core/BinaryExpression.h"
#include "../Core/Expression.h"

namespace fuzzy {
	template<typename T>


	class And : public BinaryExpression<T> {

	public:
		virtual ~And() = default;

		virtual T evaluate(Expression<T> *left, Expression<T> *right) const = 0;
	};
}