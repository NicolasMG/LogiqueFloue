#pragma once
namespace core
{
	template<typename T>
	class BinaryExpression {
	public:
		virtual T evaluate(Expression i, Expression r) const = 0;
	};

}