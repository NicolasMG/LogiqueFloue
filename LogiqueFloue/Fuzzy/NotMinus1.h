#pragma once
#include "Not.h"
namespace fuzzy {
	template<typename T>
	class NotMinus1 : public Not {

	public:
		NotMinus1() {};
		virtual T evaluate(Expression o) const = 0;
	};
}