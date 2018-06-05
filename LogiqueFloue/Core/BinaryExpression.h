#pragma once
namespace core
{
	template<typename T>
	class BinaryExpression {
	public:
		virtual ~BinaryExpression() = default;
		virtual T evaluate(Expression<T> *i, Expression<T> *r) const = 0;
	};
}