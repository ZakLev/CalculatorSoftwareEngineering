#pragma once
#include "wx/wx.h"
#include "../CalculatorSoftwareEngineering/CalculatorProcessor.h"

class CalculatorProcessorTests
{
public: 
	CalculatorProcessor* CalcProc = CalculatorProcessor::GetInstance();
	void HexTest();
	void BinTest();
	void DecTest();
	void NotHexTest();
	void NotBinTest();
	void NotDecTest();
	void Addition();
	void Subtraction();
	void Multiply();
	void Division();
	std::vector<IBaseCommand> vec;

	
};

