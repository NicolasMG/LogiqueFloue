#pragma once

#include "Agg.h"

namespace fuzzy {
	template<typename T>
	class AggMax : public Agg {
	public:
		AggMax() {};


		virtual T evaluate(Expression i, Expression r) const;

	};
}