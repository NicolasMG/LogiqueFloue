#pragma once

using namespace core;
template<typename T>
class ThenMult : public Then{

public:
	virtual T evaluate(Expression i, Expression r) const = 0;
};