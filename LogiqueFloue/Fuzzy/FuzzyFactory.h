#pragma once

#include <vector>

#include "Agg.h"
#include "And.h"
#include "Is.h"
#include "Not.h"
#include "Or.h"
#include "Then.h"
#include "MamdaniDefuzz.h"
#include "SugenoConclusion.h"
#include "SugenoDefuzz.h"

#include "../Core/BinaryShadowExpression.h"
#include "../Core/Expression.h"
#include "../Core/ExpressionFactory.h"
#include "../Core/UnaryShadowExpression.h"
#include "../Core/NaryShadowExpression.h"

using namespace core;
namespace fuzzy {
	template <typename T>
	class FuzzyFactory : public ExpressionFactory<T> {
	public:
		FuzzyFactory(Not<T> *opNot, And<T> *opAnd, Or<T> *opOr, Then<T> *opThen, Agg<T> *opAgg, MandaniDefuzz<T> *opDefuzz) :
			opNot(opNot), opAnd(opAnd), opOr(opOr), opThen(opThen), opAgg(opAgg), opDefuzz(
				opDeffuzz), opSugeno(NULL), opConclusion(NULL) {
		};
		FuzzyFactory(Not<T> *opNot, And<T> *opAnd, Or<T> *opOr, Then<T> *opThen, Agg<T> *opAgg, MandaniDefuzz<T> *opDefuzz,SugenoDefuzz<T> *opSugeno,SugenoConclusion<T> *opConclusion) :
			opNot(opNot), opAnd(opAnd), opOr(opOr), opThen(opThen), opAgg(opAgg), opDefuzz(
				opDeffuzz), opSugeno(opSugeno), opConclusion(opConclusion) {
		};

		Expression<T>* newAnd(Expression<T> *left, Expression<T> *right) {
			return this->newBinary(&opAnd, left, right);
		};
		Expression<T>* newOr(Expression<T> *left, Expression<T> *right) {
			return this->newBinary(&opOr, left, right);
		};
		Expression<T>* newThen(Expression<T> *left, Expression<T> *right) {
			return this->newBinary(&opThen, left, right);
		};
		Expression<T>* newAgg(Expression<T> *left, Expression<T> *right) {
			return this->newBinary(&opAgg, left, right);
		};
		Expression<T>* newNot(Expression<T> *expr) {
			return this->newUnary(&opNot, expr);
		};
		Expression<T>* newDefuzz(Expression<T> *left, Expression<T> *right) {
			return this->newBinary(&opDefuzz, left, right);
		};
		Expression<T>* newIs(Is<T> *shape, Expression<T> *expr) {
			return this->newUnary(shape, expr);
		};
		Expression<T>* newSugeno(std::vector<Expression<T>*> *operands) {
			return this->newNAry(&opSugeno, operands);
		};
		Expression<T>* newConclusion(std::vector<Expression<T>*> *operands) {
			return this->newNAry(&opConclusion, operands);
		}
		;

		Expression<T>* changeAnd(And<T> *o) {
			opAnd->setTarget(o);
			return this;
		};
		Expression<T>* changeOr(Or<T> *o) {
			opOr->setTarget(o);
			return this;
		};
		Expression<T>* changeThen(Then<T> *o) {
			opThen->setTarget(o);
			return this;
		};
		Expression<T>* changeAgg(And<T> *o) {
			opAgg->setTarget(o);
			return this;
		};
		Expression<T>* changeNot(Not<T> *o) {
			opNot->setTarget(o);
			return this;
		};
		Expression<T>* changeSugeno(SugenoDefuzz<T> *o) {
			opSugeno->setTarget(o);
			return this;
		};
		Expression<T>* changeConclusion(SugenoConclusion<T> *o) {
			opConclusion->setTarget(o);
			return this;
		};

	private:
		UnaryShadowExpression<T> opNot;
		BinaryShadowExpression<T> opAnd;
		BinaryShadowExpression<T> opOr;
		BinaryShadowExpression<T> opThen;
		BinaryShadowExpression<T> opAgg;
		BinaryShadowExpression<T> opDefuzz;
		NaryShadowExpression<T> opSugeno;
		NaryShadowExpression<T> opConclusion;
	};
}