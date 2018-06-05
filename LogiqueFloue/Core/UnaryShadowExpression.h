#pragma once

#include "Expression.h"
#include "UnaryExpression.h"
namespace core {
	template <typename T>
	class UnaryShadowExpression : public UnaryExpression<T> {
	public:
		UnaryShadowExpression(UnaryExpression<T> *target = nulltr) :target(target) {};
		virtual ~UnaryShadowExpression() = default;
		virtual T evaluate(Expression<T> *expression) const {
			if (target != nullptr) {
				return target->evaluate(expression);
			}
			return T();
		};
		const UnaryExpression<T>* getTarget() const {
			return target;
		};
		void setTarget(UnaryExpression<T>* target) {
			this->target = target;
		};

	private:
		UnaryExpression<T> * target;
	};
}