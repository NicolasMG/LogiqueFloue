#pragma once
using namespace core;
template<typename T>

class AggPlus: public Agg{

public:
	virtual T evaluate(Expression i, Expression r) const = 0;
};