#pragma once

#include <vector>

#include "../Exceptions/EvaluationException.h"
#include "Expression.h"
#include "NaryExpression.h"

namespace core {
	template <typename T>
	class NaryShadowExpression : public NaryExpression<T> {
	public:
		naryShadowExpression(NaryExpression<T> *target = nullptr) :target(target) {};
		virtual ~NaryShadowExpression() = default;

		virtual T evaluate(std::vector<Expression<T>*>*operands) const {
			if (target == nullptr) {
				throw exceptions::EvaluationException("Target is null");
			}
			return target->evaluate(operands);
		};
		const NaryExpression<T>* getTraget() const {
			return target;
		};
		void setTarget(const NaryExpression<T>*target) {
			this->target = target;
		};

	private:
		NaryExpression<T> * target;
	};
}