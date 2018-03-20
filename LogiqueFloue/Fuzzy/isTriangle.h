#pragma once
using namespace core;

template<typename T>
class isTriangle : public Is{

public:
	virtual T evaluate(Expression o) const = 0;
};