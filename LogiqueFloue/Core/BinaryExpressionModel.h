#pragma once
namespace core
{
	template<typename T>
	class BinaryExpressionModel : public BinaryExpression, public Expression {
	public:
		virtual T evaluate(expression i, Expression r);
		virtual T evaluate();
	};
}