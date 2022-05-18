#pragma once
class CalculatorProcessor
{
private:
	CalculatorProcessor();
	static CalculatorProcessor *instance;
	float sun = 0;
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
	
	float Addition();
	float Subtraction();
	float Multiply();
	float Division();
	float Mod();
};

