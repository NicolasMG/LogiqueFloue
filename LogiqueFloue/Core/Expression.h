#pragma once
namespace core
{
	template<typename T>
	class Expression {
	public:
		virtual T evaluate() const = 0;
	};
}