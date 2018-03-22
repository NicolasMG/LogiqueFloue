#pragma once
namespace core
{
	template<typename T>
	class UnaryExpressionModel : public UnaryExpression, public Expression {
	public:
		virtual T evaluate(Expression o) {
			
			if (_operator == null) throw new NullOperatorException();
			return _operator.evaluate(o);

		}
		virtual T evaluate() {
			if (operand == null) throw new NullOperandException();
			return evaluate(operand);

		}

		virtual &Expression<T> const getOperand();
		virtual &UnaryExpression<T> const getOperator();

		virtual void setOperand(const Expression<T>&);
		virtual void setOperator(const UnaryExpression<T>&);


	private:
		Expression operand;
		UnaryExpression _operator;
	};

	template<typename T>
	inline &Expression<T> const UnaryExpressionModel<T>::getOperand()
	{
		return operand;
	}

	template<typename T>
	inline &UnaryExpression<T> const UnaryExpressionModel<T>::getOperator()
	{
		return _operator;
	}

	template<typename T>
	inline void UnaryExpressionModel<T>::setOperand(const Expression<T>& _operand)
	{
		operand = _operand;
	}

	template<typename T>
	inline void UnaryExpressionModel<T>::setOperator(const UnaryExpression<T>& ope)
	{
		_operator = ope;
	}

}