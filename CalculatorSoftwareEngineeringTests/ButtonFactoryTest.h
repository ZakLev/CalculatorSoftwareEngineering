#pragma once
#include <wx/wx.h>
#include "../CalculatorSoftwareEngineering/ButtonFactory.h"
//#include "../CalculatorSoftwareEngineering/ButtonFactory.cpp"



class ButtonFactoryTest
{
public:
	wxWindow* window = nullptr;
	wxButton* button = nullptr;
	void IsLabel56();
	void IsLabelNot56();
	void IsID10001();
	void ISIDNot10001();
	void IsColourAE71DC();
	void IsColourNotAE71DC();
	void IsLabel68();
	void IsLabelNot68();
	void IsID10070();
	void ISIDNot10070();
};