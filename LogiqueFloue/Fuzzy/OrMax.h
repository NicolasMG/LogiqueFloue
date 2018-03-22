#pragma once

#include "Or.h"
namespace fuzzy {
	template<typename T>
	class OrMax : public Or {

	public:
		virtual T evaluate(Expression i, Expression r) const = 0;
	};
}