#pragma once

#include "And.h"
namespace fuzzy {
	template<typename T>
	class AndMin : public And {

	public:
		AndMIn() {};
		virtual T evaluate(Expression i, Expression r) const = 0;
	};
}