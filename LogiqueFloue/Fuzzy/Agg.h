#pragma once
#include "../Core/BinaryExpression.h"
#include "../Core/Expression.h"

namespace fuzzy {
	template<typename T>


	class Agg : public BinaryExpression<T> {

	public:
		virtual ~Agg() = default;

		virtual T evaluate(Expression<T> *left, Expression<T> *right) const = 0;
	};
}