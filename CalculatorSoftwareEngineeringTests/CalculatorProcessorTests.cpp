#include "CalculatorProcessorTests.h"
#include "../CalculatorSoftwareEngineering/CalculatorProcessor.h"
#include "../CalculatorSoftwareEngineering/AddCommand.h"



void CalculatorProcessorTests::HexTest()
{
	int num = CalcProc->Hex();
	if (num == 2)
	{
		std::cout << "Pass\n";
	}
	else
	{
		std::cout << "Fail\n";
	}


}

void CalculatorProcessorTests::BinTest()
{
	int num = CalcProc->Bin();
	if (num == 1)
	{
		std::cout << "Pass\n";
	}
	else
	{
		std::cout << "Fail\n";
	}
}

void CalculatorProcessorTests::DecTest()
{
	int num = CalcProc->Dec();
	if (num == 3)
	{
		std::cout << "Pass\n";
	}
	else
	{
		std::cout << "Fail\n";
	}
}

void CalculatorProcessorTests::NotHexTest()
{
	int num = CalcProc->Dec();
	if (num != 2)
	{
		std::cout << "Pass\n";
	}
	else
	{
		std::cout << "Fail\n";
	}
}

void CalculatorProcessorTests::NotBinTest()
{
	int num = CalcProc->Hex();
	if (num != 1)
	{
		std::cout << "Pass\n";
	}
	else
	{
		std::cout << "Fail\n";
	}
}

void CalculatorProcessorTests::NotDecTest()
{
	int num = CalcProc->Bin();
	if (num != 3)
	{
		std::cout << "Pass\n";
	}
	else
	{
		std::cout << "Fail\n";
	}
}

void CalculatorProcessorTests::Addition()
{
	CalcProc->Addition(1,2);
	float sum = CalcProc->Sum();
	if (sum == 3.0f)
	{
		std::cout << "Pass\n";
	}
	else
	{
		std::cout << "Fail\n";
	}
}

void CalculatorProcessorTests::Subtraction()
{
	CalcProc->Subtraction(1, 2);
	float sum = CalcProc->Sum();
	if (sum == -1.0f)
	{
		std::cout << "Pass\n";
	}
	else
	{
		std::cout << "Fail\n";
	}
}

void CalculatorProcessorTests::Multiply()
{
	CalcProc->Multiply(1, 2);
	float sum = CalcProc->Sum();
	if (sum == 2.0f)
	{
		std::cout << "Pass\n";
	}
	else
	{
		std::cout << "Fail\n";
	}
}

void CalculatorProcessorTests::Division()
{
	CalcProc->Division(1, 2);
	float sum = CalcProc->Sum();
	if (sum == 0.5f)
	{
		std::cout << "Pass\n";
	}
	else
	{
		std::cout << "Fail\n";
	}
}
