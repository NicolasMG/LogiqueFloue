#pragma once

#include <iostream>
#include "Expression.h"
#include "UnaryExpression.h"

namespace core
{
	template<typename T>
	class UnaryExpressionModel : public UnaryExpression<T>, public Expression<T> {
	public:
		virtual ~UnaryExpressionModel() = default;
		virtual UnaryExpressionModel()=default;
		virtual UnaryExpressionModel(Expression<T> *operand, UnaryExpression<T> *_operator):operand(operand),_operator(_operator){};
		virtual T evaluate(Expression o) {
			if (_operator == null) throw new NullOperatorException();
			return _operator.evaluate(o);
		}
		virtual T evaluate() {
			if (operand == null) throw new NullOperatorException();
			return evaluate(operand);
		}

		virtual &Expression<T> const getOperand();
		virtual &UnaryExpression<T> const getOperator();

		virtual void setOperand(const Expression<T>*);
		virtual void setOperator(const UnaryExpression<T>*);


	private:
		Expression<T> *operand;
		UnaryExpression<T> *_operator;
	};

	template<typename T>
	inline const Expression<T>*  UnaryExpressionModel<T>::getOperand()
	{
		return operand;
	}

	template<typename T>
	inline const UnaryExpression<T>* UnaryExpressionModel<T>::getOperator()
	{
		return _operator;
	}

	template<typename T>
	inline void UnaryExpressionModel<T>::setOperand(const Expression<T>* _operand)
	{
		operand = _operand;
	}

	template<typename T>
	inline void UnaryExpressionModel<T>::setOperator(const UnaryExpression<T>* ope)
	{
		_operator = ope;
	}

}