#pragma once
using namespace core;
template<typename T>


class And{

public:
	virtual T evaluate(Expression i, Expression r) const = 0;
};