#pragma once
#include "../Core/Expression.h"
#include "Or.h"

namespace fuzzy {
	template<typename T>
	class OrPlus : public Or<T> {

	public:
		virtual ~OrPlus() = default;
		virtual T evaluate(core::Expression<T> *left, core::Expression<T>*right) const;


	};
	template<typename T>
	T OrPlus<T>::evaluate(core::Expression<T>*left, core::Expression<T>*right)const {
		
		return left->evaluate() + right->evaluate();
	}
}