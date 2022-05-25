#include "CalculatorProcessor.h"
#include <string>
#include "IBaseCommand.h"
#include "AddCommand.h"
#include "SubtractCommand.h"
#include "MultipyCommand.h"
#include "DivisionCommand.h"
#include "ModCommand.h"
CalculatorProcessor::CalculatorProcessor() {

}
CalculatorProcessor* CalculatorProcessor::instance = nullptr;

//CalculatorProcessor* CalculatorProcessor::GetInstance()
//{	
//}

void CalculatorProcessor::Addition(float num1, float num2)
{
	IBaseCommand* com = new AddCommand();
	com->setNum1(num1);
	com->setNum2(num2);
	Operators.push_back(com);
	//return num1 + num2;
}

void CalculatorProcessor::Subtraction(float num1, float num2)
{
	IBaseCommand* com = new SubtractCommand();
	com->setNum1(num1);
	com->setNum2(num2);
	Operators.push_back(com);
	//return num1 - num2;
}

void CalculatorProcessor::Multiply(float num1, float num2)
{
	IBaseCommand* com = new MultipyCommand();
	com->setNum1(num1);
	com->setNum2(num2);
	Operators.push_back(com);
	//return num1 * num2;
}

void CalculatorProcessor::Division(float num1, float num2)
{
	IBaseCommand* com = new DivisionCommand();
	com->setNum1(num1);
	com->setNum2(num2);
	Operators.push_back(com);
	//return num1 / num2;
}

void CalculatorProcessor::Mod(float num1, float num2)
{
	//ModCommand mod;
	IBaseCommand *com = new ModCommand();
	com->setNum1(num1);
	com->setNum2(num2);
	Operators.push_back(com);
	//return (float)((int)num1 % (int)num2);
}
int CalculatorProcessor::Hex()
{
	return 2;
}
int CalculatorProcessor::Dec()
{
	return 3;
}
int CalculatorProcessor::Bin()
{
	
	return 1;
}
float CalculatorProcessor::Sum()
{
	float sum = 0.0f;
	for (int i = 0; i < Operators.size(); i++)
	{
		sum += Operators[i]->Execute();
		if (i != Operators.size()-1) 
		{
			Operators[i + 1]->setNum1(sum);
		}
	}
	Operators.clear();
	return sum;
}

wxString CalculatorProcessor::GetTxtlabel(wxString lab)
{
	
	return lab;
}
