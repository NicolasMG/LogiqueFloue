#pragma once
namespace core
{
	template<typename T>
	class BinaryExpressionModel : public BinaryExpression, public Expression {
	public:

		virtual T evaluate(expression l, Expression r) {
			if (l == null) throw new NullExpressionException();
			if (r == null) throw new NullExpressionException();
			if (_operator == null) throw new NullOperatorException();

			return _operator.evaluate(l, r)


		}
		virtual T evaluate() {
			if (left == null) throw new NullExpressionException();
			if (right == null) throw new NullExpressionException();
			return evaluate(left, right)

		}


		virtual &BinaryExpressionModel<T> const getLeft();
		virtual &BinaryExpressionModel<T> const getRight();
		virtual &BinaryExpression<T> const getOperator();

		virtual void setLeft(const BinaryExpressionModel<T>&);
		virtual void setRight(const BinaryExpressionModel<T>&);
		virtual void setOperator(const BinaryExpression<T>&);

	private:
		BinaryExpressionModel<T> left;
		BinaryExpressionModel<T> right;
		BinaryExpression<T> _operator;


	};
}

template<T>
&BinaryExpressionModel<T> BinaryExpressionModel::getLeft() {
	return left;
}
template<T>
&BinaryExpressionModel<T> BinaryExpressionModel::getRight() {
	return left;
}
template<typename T>
inline &BinaryExpression const core::BinaryExpressionModel<T>::getOperator()
{
	return _operator;
}

template<typename T>
inline void core::BinaryExpressionModel<T>::setLeft(const BinaryExpressionModel<T> & _left)
{
	left = _left;
}

template<typename T>
inline void core::BinaryExpressionModel<T>::setRight(const BinaryExpressionModel<T> & _right)
{
	right = _right
}

template<typename T>
inline void core::BinaryExpressionModel<T>::setOperator(const BinaryExpression<T> & ope)
{
	_operator = ope;
}


