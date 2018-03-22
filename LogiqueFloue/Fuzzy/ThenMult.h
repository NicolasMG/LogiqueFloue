#pragma once
#include "Then.h"
namespace fuzzy {
	template<typename T>
	class ThenMult : public Then {

	public:
		ThenMult() {};
		virtual T evaluate(Expression i, Expression r) const = 0;
	};
}