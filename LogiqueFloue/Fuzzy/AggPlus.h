#pragma once

#include "Agg.h"
#include "../core/Expression.h"
namespace fuzzy {
	template<typename T>
	class AggPlus : public Agg<T> {

	public:
		virtual ~AggPlus() = default;
		virtual T evaluate(core::Expression<T> *left, core::Expression<T> *right) const;
	};

	template<class T>
	T AggPlus<T>::evaluate(core::Expression<T> *left, core::Expression<T> *right) const {
		return left->evaluate()+right->evaluate();
	}
}