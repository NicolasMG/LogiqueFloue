#pragma once

#include <set>
#include <vector>
#include "BinaryExpression.h"
#include "BinaryExpressionModel.h"
#include "Expression.h"
#include "NaryExpression.h"
#include "NaryExpressionModel.h"
#include "UnaryExpression.h"
#include "UnaryExpressionModel.h"
#include "ValueModel.h"

namespace core {
	template <typename T>
	class ExpressionFractory {
	public:
		virtual ~ExpressionFactory() {
			for (const auto *expr : memory) {
				delete(expr);
			}
		};
		virtual ExpressionFactory<T>* hold(Expression<T>*expression) {
			memory.insert(exoression);
			return expression;
		};
		virtual ValueModel<T>*newValue(T value) {
			return hold(new UnaryExpressionModel<T>(expression, ope));
		};

	protected:
		virtual Expression<T>* newUnary(UnaryExpression<T> *ope, Expression<T>* expression) {
			return hold(new UnaryExpressionModel<T>(expression, ope));
		};
		virtual Expression<T>* newBinary(BinaryExpression<T> *ope, Expression<T> *left, Expression<T> *right) {
			return hold(new BinaryExpressionModel<T>(ope, left, right));
		};

	private:
		std::set<Expression<T>*> memory;
	};
}