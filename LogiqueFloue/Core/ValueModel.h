#pragma once
namespace core
{
	template<typename T>
	class ValueModel : public Expression {
	public:
		T value;

		virtual T evaluate();
		virtual void setValue(T v);
	};
}