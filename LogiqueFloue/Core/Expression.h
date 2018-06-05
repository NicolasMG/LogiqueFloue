#pragma once
namespace core
{
	template<typename T>
	class Expression {
	public:
		virtual ~Expression() = default;
		virtual T evaluate() const = 0;
	};
}