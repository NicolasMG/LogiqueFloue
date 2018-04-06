#pragma once

#include "../Core/BinaryExpression.h"
#include "../Core/Expression.h"
//rajouter include Evaluator

namespace fuzzy {
	template<typename T>
	class MandaniDefuzz : public BinaryExpression<T> {

	public:
		virtual ~MandaniDefuzz() = default;
		T evaluate(Expression<T>* left, Expression<T>* right) const = 0;
		virtual T defuzz(const typename Evaluator<T>::Shape&)const = 0;
		virtual typename Evaluator<T>::Shape buildShape(Expression<T>*in, Expression<T>*out) const = 0;

	};
}