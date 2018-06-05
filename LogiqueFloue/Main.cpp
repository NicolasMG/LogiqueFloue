#include <iostream>

#include "Core/UnaryExpressionModel.h"
#include "Core/ValueModel.h"
#include "Fuzzy/AggMax.h"
#include "Fuzzy/AndMin.h"
#include "Fuzzy/CogDefuzz.h"
#include "Fuzzy/FuzzyFactory.h"
#include "Fuzzy/isTriangle.h"
#include "Fuzzy/NotMinus1.h"
#include "Fuzzy/OrMax.h"
#include "Fuzzy/ThenMin.h"


using namespace core;
using namespace fuzzy;
using namespace exceptions;

int main(int argc, char* const argv[]) {
	IsTriangle<float> opDefuzz(0, 5, 10);
	CogDeFuzz<float> cheap(0, 5, 0);

	Valuemodel<float> output(0);
	ValueModel<float> val(3);

	UnaryExpressionModel<float> cheapModel(&val, &cheap);
	float eval = opDefuzz.evaluate(&output, &cheapModel);
	std::cout << eval << std::endl;
}