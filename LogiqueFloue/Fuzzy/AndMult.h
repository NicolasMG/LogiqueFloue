#pragma once

using namespace core;
namespace fuzzy {
	template<typename T>
	class AndMult : public And {

	public:
		virtual T evaluate(Expression i, Expression r) const = 0;
	};
}