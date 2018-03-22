#pragma once
using namespace core;
namespace fuzzy {
	template<typename T>
	class NotMinus1 : public Not {

	public:
		virtual T evaluate(Expression o) const = 0;
	};
}