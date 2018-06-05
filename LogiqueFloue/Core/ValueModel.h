#pragma once
namespace core
{
	template<typename T>
	class ValueModel : public Expression {
	public:
		virtual ~ValueModel() = default;

		virtual T evaluate() {
			if (value == null) return new nullValueException;
			return T
		}
		virtual void setValue(T v) {
			value = v;
		}
		//virtual T getValue() const;
	private:
		T value;
	};
}