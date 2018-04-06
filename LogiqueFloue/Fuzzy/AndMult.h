#pragma once

#include "And.h"
#include "../core/Expression.h"
namespace fuzzy {
	template<typename T>
	class AndMult : public And<T> {

	public:
		virtual ~AndMult() = default;
		virtual T evaluate(core::Expression<T> *left, core::Expression<T> *right)const;
	};

	template<typename T>
	T AndMult<T>::evaluate(core::Expression<T> *left, core::Expression<T> *right) const {
		return left->evaluate() * right->evaluate();
	}
}