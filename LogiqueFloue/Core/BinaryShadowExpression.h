#pragma once

#include "BinaryExpression.h"
#include "Expression.h"

namespace core {
	template <typename T>
	class BinaryShadowExpression : public BinaryExpression<T> {
	public:
		BinaryShadowExpression(BinaryExpression<T> *target = nullptr) :target(target) {};
		virtual ~BinaryShadowExpression() = default;
		virtual T evaluate(Expression<T> *left, Expression<T> *right) const {
			if (target != nullptr) {
				return target->evaluate(left, right);
			}
			return T();
		};
		const BinaryExpression<T>* getTarget() const { return target; };
		void setTarget(BinaryExpression<T>* target) { this->target = target; };

	private:
		BinaryExpression<T> *target;
	};

}