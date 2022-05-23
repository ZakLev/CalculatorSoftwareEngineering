#pragma once
#include "IBaseCommand.h"
class SubtractCommand : public IBaseCommand
{
	//virtual float Execute();
	 float Execute() {
		return num1 - num2;
	}
};

