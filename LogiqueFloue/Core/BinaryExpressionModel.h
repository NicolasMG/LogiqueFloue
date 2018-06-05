#pragma once
namespace core
{
	template<typename T>
	class BinaryExpressionModel : public BinaryExpression<T>, public Expression<T> {
	public:
		virtual ~BinaryExpressionModel() = default;
		BinaryExpressionModel(BinaryExpression<T> *_operator, Expression<T> *left, Expression<T> *right) :_operator(_operator), left(left), right(right) {};

		virtual T evaluate(expression l, Expression r) {
			if (l == null) throw new ExpressionException();
			if (r == null) throw new ExpressionException();
			if (_operator == null) throw new OperatorException();
			return _operator.evaluate(l, r)
		}

		virtual T evaluate() {
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
&BinaryExpressionModel<T>::BinaryExpressionModel::getLeft() {
	return left;
}

template<T>
&BinaryExpressionModel<T>::BinaryExpressionModel::getRight() {
	return right;
}

template<typename T>
&BinaryExpressionModel<T>::BinaryExpressionModel::getOperator()
{
	return _operator;
}

template<typename T>
inline void core::BinaryExpressionModel<T>::setLeft(const BinaryExpressionModel<T> * _left)
{
	left = _left;
}

template<typename T>
inline void core::BinaryExpressionModel<T>::setRight(const BinaryExpressionModel<T> * _right)
{
	right = _right;
}

template<typename T>
inline void core::BinaryExpressionModel<T>::setOperator(const BinaryExpression<T> * ope)
{
	_operator = ope;
}


