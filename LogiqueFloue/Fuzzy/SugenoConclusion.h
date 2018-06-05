#include <vector>

#include "../core/Expression.h"
#include "../core/NaryExpression.h"

namespace fuzzy {

	template <typename T>
	class SugenoConclusion : public core::NaryExpression<T> {
	public:
		SugenoConclusion(std::vector<T>& coeff) : coeff(coeff) {};
		virtual ~SugenoConclusion() = default;
		virtual T evaluate(std::vector<Expression<T>*> *operands) const {
			T result = 0;
			auto itcoeff = coeff.begin();
			auto itexpr = operands->begin();
			for (; itexpr != operands->end() && itcoeff != coeff.end(); itexpr++, itcoeff++) {
				T eval = (*itexpr)->evaluate();
				result += *itcoeff * eval;
			}
			return result;
		};
	private:
		const std::vector<T> coeff;
	};
}