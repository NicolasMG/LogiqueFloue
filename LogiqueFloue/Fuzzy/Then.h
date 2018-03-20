#pragma once

using namespace core;
template<typename T>
class Then : public BinaryExpression {

public:
	virtual T evaluate(Expression i, Expression r) const = 0;
};