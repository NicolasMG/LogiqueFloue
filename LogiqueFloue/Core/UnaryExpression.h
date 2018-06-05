#pragma once
namespace core
{
	template<typename T>
	class UnaryExpression {
	public:
		virtual UnaryExpression() = default;
		virtual T evaluate(Expression<T> *o) const = 0;
	};
}