#include "CalculatorProcessor.h"
#include <string>

CalculatorProcessor::CalculatorProcessor() {

}
CalculatorProcessor* CalculatorProcessor::instance = nullptr;

//CalculatorProcessor* CalculatorProcessor::GetInstance()
//{	
//}

float CalculatorProcessor::Addition(float num1, float num2)
{

	return num1 + num2;
}

float CalculatorProcessor::Subtraction(float num1, float num2)
{
	return num1 - num2;
}

float CalculatorProcessor::Multiply(float num1, float num2)
{
	return num1 * num2;
}

float CalculatorProcessor::Division(float num1, float num2)
{
	return num1 / num2;
}

float CalculatorProcessor::Mod(float num1, float num2)
{
	return (float)((int)num1 % (int)num2);
}

wxString CalculatorProcessor::GetTxtlabel(wxString lab)
{
	
	return lab;
}
