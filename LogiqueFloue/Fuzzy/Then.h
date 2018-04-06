#pragma once

#include "../Core/BinaryExpression.h"
#include "../Core/Expression.h"

namespace fuzzy {
	template<typename T>


	class Then : public BinaryExpression<T> {

	public:
		virtual ~Then() = default;

		virtual T evaluate(Expression<T> *left, Expression<T> *right) const = 0;
	};
}