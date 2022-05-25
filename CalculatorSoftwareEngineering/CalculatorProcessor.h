#pragma once
#include <wx/string.h>
#include <vector>
#include "IBaseCommand.h"
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
	void Addition(float num1, float num2);
	void Subtraction(float num1, float num2);
	void Multiply(float num1, float num2);
	void Division(float num1, float num2);
	void Mod(float num1, float num2);
	int Hex();
	int Dec();
	int Bin();
	float Sum();
	std::vector<IBaseCommand*> Operators;
};

