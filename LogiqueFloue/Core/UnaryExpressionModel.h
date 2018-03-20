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
	private:
		Expression operand;
		UnaryExpression _operator;
	};
}