#pragma once
#include <wx/string.h>
class CalculatorProcessor
{
private:
	CalculatorProcessor();
	static CalculatorProcessor *instance;
	float sun = 0.0f;
public:
	static CalculatorProcessor* GetInstance() {
		if (!instance)
		{
			instance = new CalculatorProcessor;

		}
		return instance;
	};
	CalculatorProcessor(const CalculatorProcessor& _other) = delete;
	CalculatorProcessor& operator = (const CalculatorProcessor& _assign) = delete;
	wxString GetTxtlabel(wxString label);
	float Addition(float num1, float num2);
	float Subtraction(float num1, float num2);
	float Multiply(float num1, float num2);
	float Division(float num1, float num2);
	float Mod(float num1, float num2);
};

