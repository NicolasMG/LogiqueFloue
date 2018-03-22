#pragma once
using namespace core;
namespace fuzzy {
	template<typename T>

	class AggPlus : public Agg {

	public:
		virtual T evaluate(Expression i, Expression r) const = 0;
	};
}