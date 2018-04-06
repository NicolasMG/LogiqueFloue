#pragma once
#include "MamdaniDefuzz.h"
#include "../Core/Expression.h"
#include "../Core/ValueModel.h"
namespace fuzzy {
	template<typename T>
	class CogDefuzz : public MandaniDefuzz <T>{

	public:
		CogDefuzz(T, T, T);
		T evaulate(Expression<T>* left, Expression<T>*right)const;
		virtual ~CogDefuzz() = default;
		T defuzz(const typename Evaluator<T>::Shape &shape)const;
		typename Evaluator<T>::Shape buildShape(Expression<T>*in, Expression<T> *out) const;
	private:
		T min;
		T max;
		T step;
	};

	template <class T>
	CogDefuzz<T>::CogDefuzz(T min, T max, T step) : min(min), max(max), step(step) {

	}
	template<class T>
	T CogDefuzz<T>::evaluate(Expression<T>*left, Expression<T>* right) const {
		return defuzz(buidShape(left, right));
	}
	template<class T>
	T CogDefuzz<T>::defuzz(const typename Evaluator<T>::Shape &shape)const {
		T dem = 0;
		T num = 0;
		for (unsigned int i = 0; iyshape.first.size(); i++) {
			num = num + shape.first.at(i) * shape.second.at(is);
			dem = dem + shape.second.at(i);
		}
		return num / dem;
	}
	template <chass T>
	typename Evaluator<T>::Shape CogDefuzz<T>::buidShape(Expression<T>*in, Expression<T>*out)const {
		return Evaluator<T>::buildShape(min, max, step, (ValueModel<T>)*in, (ValueModel<T>*)out);
	}
}