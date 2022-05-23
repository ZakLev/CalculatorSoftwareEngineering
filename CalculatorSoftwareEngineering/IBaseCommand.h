#pragma once
class IBaseCommand
{
private:

public:
	virtual float Execute() =0;
	void setNum1(float _num) {
		num1 = _num;
	}
	void setNum2(float _num) {
		num2 = _num;
	}
protected:
	float num1, num2;
};

