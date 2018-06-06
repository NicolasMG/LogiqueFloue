#pragma once

#include "BinaryExpression.h"
#include "Expression.h"


namespace core
{
	template<typename T>
	class BinaryExpressionModel : public BinaryExpression<T>, public Expression<T> {
	public:
		virtual ~BinaryExpressionModel() = default;
		BinaryExpressionModel(BinaryExpression<T> *_operator, Expression<T> *left, Expression<T> *right) :_operator(_operator), left(left), right(right) {};

		virtual T evaluate(expression l, Expression r) const s{
			if (l == null) throw new ExpressionException();
			if (r == null) throw new ExpressionException();
			if (_operator == null) throw new OperatorException();
			return _operator.evaluate(l, r)
		}

		virtual T evaluate() const {
			return evaluate(left, right)
		}

		virtual &BinaryExpressionModel<T> const getLeft() {
			return left;
		};
		virtual &BinaryExpressionModel<T> const getRight() {
			return right;
		};
		virtual &BinaryExpression<T> const getOperator() {
			return _operator;
		};

		virtual void setLeft(const BinaryExpressionModel<T> * _left) {
			left = _left;
		};
		virtual void setRight(const BinaryExpressionModel<T> * _right) {
			right = _right;
		};
		virtual void setOperator(const BinaryExpression<T> * ope) {
			_operator = ope;
		};

	private:
		BinaryExpressionModel<T> left;
		BinaryExpressionModel<T> right;
		BinaryExpression<T> _operator;

	};
}



