#pragma once
#include "IBaseCommand.h"
class AddCommand : public IBaseCommand
{
	//virtual float Execute();
	 float Execute() {
		return num1 + num2;
	}
};

