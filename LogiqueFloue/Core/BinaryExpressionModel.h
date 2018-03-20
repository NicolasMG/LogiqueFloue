#pragma once
namespace core
{
	template<typename T>
	class BinaryExpressionModel : public BinaryExpression, public Expression {
	public:
		virtual T evaluate(expression l, Expression r) {
			if (l == null) throw new NullExpressionException();			if (r == null) throw new NullExpressionException();			if (_operator == null) throw new NullOperatorException();			return _operator.evaluate(l, r)

		}
		virtual T evaluate() {
			if (left == null) throw new NullExpressionException();			if (right == null) throw new NullExpressionException();
			return evaluate(left, right)

		}


		virtual BinaryExpressionModel const getLeft();
		virtual BinaryExpressionModel const getRight();
		virtual BinaryExpression const getOperator();

		virtual void setLeft(BinaryExpressionModel&);
		virtual void setRight(BinaryExpressionModel&);
		virtual void setOperator(BinaryExpression&);

	private:
		BinaryExpressionModel left;
		BinaryExpressionModel right;
		BinaryExpression _operator;
	};
}