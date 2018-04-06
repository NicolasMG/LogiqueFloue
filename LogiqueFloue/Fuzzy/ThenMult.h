#pragma once
#include "../Core/Expression.h"
#include "Then.h"

namespace fuzzy {
	template<typename T>
	class ThenMult : public Then<T> {

	public:
		virtual ~ThenMult() = default;
		virtual T evaluate(core::Expression<T> *left, core::Expression<T>*right) const;


	};
	template<typename T>
	T ThenMult<T>::evaluate(core::Expression<T>*left, core::Expression<T>*right)const {

		return left->evaluate() * right->evaluate();
	}
}