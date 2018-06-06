#pragma once

#include <vector>
#include "Expression.h"

namespace core {
	template <typename T>
	class NaryExpression {
	public:
		virtual ~NaryExpression() = default;
		virtual T evaluate(std::vector<Expressiony<T>*> *operands) const = 0;
	};
}