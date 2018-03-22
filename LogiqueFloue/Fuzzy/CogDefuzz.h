#pragma once
#include "MamdaniDefuzz.h"
namespace fuzzy {
	template<typename T>
	class CogDefuzz : public MandaniDefuzz {

	public:
		virtual T evaluate(Expression i, Expression r) const = 0;
	};
}