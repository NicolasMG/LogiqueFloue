#pragma once

using namespace core;
namespace fuzzy {
	template<typename T>
	class OrPlus : public Or {

	public:
		virtual T evaluate(Expression i, Expression r) const = 0;
	};
}