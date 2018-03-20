#pragma once

using namespace core;
template<typename T>
class Not{

public:
	virtual T evaluate(Expression o) const = 0;
};