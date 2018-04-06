#pragma once

#include "Agg.h"
#include "../core/Expression.h"
namespace fuzzy {
	template<typename T>
	class AggPlus : public And<T> {

	public:
		virtual ~AggPlus() = default;
		virtual T evalutate(core::Expression<T> *left, core::Expression<T> *right) const;
	};

	template<class T>
	T AggPlus<T>::evalutate(core::Expression<T> *left, core::Expression<T> *right) const {
		return left->evaluate()+right->evaluate();
	}
}