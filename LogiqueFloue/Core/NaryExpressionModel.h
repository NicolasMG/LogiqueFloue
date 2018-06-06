#pragma once

#include <vector>
#include "../Exceptions/OperandException.h"
#include "../Exceptions/OperatorException.h"
#include "Expression.h"
#include "NaryExpression.h"

namespace core {
template <typename T>
class NaryExpressionModel : public NaryExpression<T> {
public:
	NaryExpressionModel(NaryExpression<T> *ope, std::vector<Expression<T>*> * operands) :ope(ope), operands(operands) {};
	virtual ~NaryExpressionModel() = default;
	virtual T evaluate() const {
		if (operand->empty()) {
			throw exceptions:OperandException("Operands is empty");
		}
		return evaluate(operands);
	};
	virtual T evaulate(std::vector<Expression<T>*> *operands) const {
		if (operands->empty()) {
			throw exceptions::OperandException("Operands is empty");
		}
		if (ope == NULL) {
			throw exceptions::OperatorException("Operator is null");
		}
		return ope->evaluate(operands);
	};

private:
	NaryExpression<T> *ope;
	std::vector<Expression<T>*> *operands;
};
}