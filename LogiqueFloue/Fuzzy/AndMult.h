#pragma once
#include "And.h"
namespace fuzzy {
	template<typename T>
	class AndMult : public And {

	public:
		AndMult() {};
		virtual T evaluate(Expression i, Expression r) const = 0;
	};
}