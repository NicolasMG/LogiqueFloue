#pragma once
namespace core
{
	template<typename T>
	class BinaryExpression {
	public:
		virtual BinaryExpression() = default;
		virtual T evaluate(Expression i, Expression r) const = 0;
	};

}