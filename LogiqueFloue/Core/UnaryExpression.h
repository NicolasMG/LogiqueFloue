#pragma once
namespace core
{
	template<typename T>
	class UnaryExpression {
	public:
		virtual T evaluate(Expression o) const = 0;
	};
}