#pragma once
using namespace core;
namespace fuzzy {
	template<typename T>
	class Agg : public BinaryExpression {
	public:
		virtual T evaluate(Expression i, Expression r) const = 0;

	};
}