#include "ButtonFactoryTest.h"
#include "../CalculatorSoftwareEngineering/ButtonFactory.h"
#include <wx/wx.h>
//#include "../CalculatorSoftwareEngineering/ButtonFactory.cpp"


void ButtonFactoryTest::IsLabel56()
{
	window = new wxWindow();
	ButtonFactory BF;
	
	button = BF.CreateAddButton(window, 10001, "56", wxPoint(250, 225), wxSize(75, 75), wxColour("#AE71DC"));
	wxString num = "56";
	if (button->GetLabel().CompareTo(num))
	{
		std::cout << "Pass\n";
	}
	else
	{
		std::cout << "Fail\n";
	}
}

void ButtonFactoryTest::IsLabelNot56()
{
	ButtonFactory BF;
	window = new wxWindow();
	button = BF.CreateAddButton(window, 10001, "89", wxPoint(250, 225), wxSize(75, 75), wxColour("#AE71DC"));
	wxString num = "56";
	if (button->GetLabel().CompareTo(num))
	{
		std::cout << "Pass\n";
	}
	else
	{
		std::cout << "Fail\n";
	}

}

void ButtonFactoryTest::IsID10001()
{
	ButtonFactory BF;
	window = new wxWindow();
	button = BF.CreateAddButton(window, 10001, "56", wxPoint(250, 225), wxSize(75, 75), wxColour("#AE71DC"));
	if (button->GetId() == 10001)
	{
		std::cout << "Pass\n";
	}
	else
	{
		std::cout << "Fail\n";
	}

}

void ButtonFactoryTest::ISIDNot10001()
{
	ButtonFactory BF;
	window = new wxWindow();
	button = BF.CreateAddButton(window, 10003, "56", wxPoint(250, 225), wxSize(75, 75), wxColour("#AE71DC"));
	if (button->GetId() != 10001)
	{
		std::cout << "Pass\n";
	}
	else
	{
		std::cout << "Fail\n";
	}

}

void ButtonFactoryTest::IsColourAE71DC()
{
	ButtonFactory BF;
	window = new wxWindow();
	button = BF.CreateAddButton(window, 10003, "56", wxPoint(250, 225), wxSize(75, 75), wxColour("#AE71DC"));
	if (button->GetBackgroundColour() == wxColour("#AE71DC"))
	{
		std::cout << "Pass\n";
	}
	else
	{
		std::cout << "Fail\n";
	}
}

void ButtonFactoryTest::IsColourNotAE71DC()
{
	ButtonFactory BF;
	window = new wxWindow();
	button = BF.CreateAddButton(window, 10003, "56", wxPoint(250, 225), wxSize(75, 75), wxColour("#AE71DD"));
	if (button->GetBackgroundColour() != wxColour("#AE71DC"))
	{
		std::cout << "Pass\n";
	}
	else
	{
		std::cout << "Fail\n";
	}
}

void ButtonFactoryTest::IsLabel68()
{
	window = new wxWindow();
	ButtonFactory BF;

	button = BF.CreateAddButton(window, 10001, "68", wxPoint(250, 225), wxSize(75, 75), wxColour("#AE71DC"));
	wxString num = "68";
	if (button->GetLabel().CompareTo(num))
	{
		std::cout << "Pass\n";
	}
	else
	{
		std::cout << "Fail\n";
	}
}

void ButtonFactoryTest::IsLabelNot68()
{
	window = new wxWindow();
	ButtonFactory BF;

	button = BF.CreateAddButton(window, 10001, "97", wxPoint(250, 225), wxSize(75, 75), wxColour("#AE71DC"));
	wxString num = "68";
	if (button->GetLabel().CompareTo(num))
	{
		std::cout << "Pass\n";
	}
	else
	{
		std::cout << "Fail\n";
	}
}

void ButtonFactoryTest::IsID10070()
{
	ButtonFactory BF;
	window = new wxWindow();
	button = BF.CreateAddButton(window, 10070, "56", wxPoint(250, 225), wxSize(75, 75), wxColour("#AE71DC"));
	if (button->GetId() == 10070)
	{
		std::cout << "Pass\n";
	}
	else
	{
		std::cout << "Fail\n";
	}
}

void ButtonFactoryTest::ISIDNot10070()
{
	ButtonFactory BF;
	window = new wxWindow();
	button = BF.CreateAddButton(window, 10086, "56", wxPoint(250, 225), wxSize(75, 75), wxColour("#AE71DC"));
	if (button->GetId() != 10070)
	{
		std::cout << "Pass\n";
	}
	else
	{
		std::cout << "Fail\n";
	}
}



