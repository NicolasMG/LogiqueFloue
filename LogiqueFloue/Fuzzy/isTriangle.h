#pragma once
#include "is.h"
namespace fuzzy {
	template<typename T>
	class isTriangle : public Is {

	public:

		virtual T evaluate(Expression o) const = 0;
		virtual min T;
		virtual mid T;
		virtual max T;

	};
}