#pragma once

using namespace core;
template<typename T>
class ThenMin : public Then{

public:
	virtual T evaluate(Expression i, Expression r) const = 0;
};