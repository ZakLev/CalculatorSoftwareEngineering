#pragma once
#include "IBaseCommand.h"
class ModCommand : public IBaseCommand
{
	//virtual float Execute();
	  float Execute() {
		return (float)((int)num1 % (int)num2);
	}
};

