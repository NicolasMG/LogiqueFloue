#pragma once
namespace core
{
	template<typename T>
	class UnaryExpressionModel : public UnaryExpression, public Expression {
	public:
		virtual T evaluate(Expression o);
		virtual T evaluate();
	};
}