#include "MainWindow.h"
#include "ButtonFactory.h"
#include "CalculatorProcessor.h"
#include <bitset>
#include <sstream>

wxBEGIN_EVENT_TABLE(MainWindow, wxFrame)
EVT_BUTTON(10001, OnButtonClicked)
EVT_BUTTON(10002, OnButtonClicked)
EVT_BUTTON(10003, OnButtonClicked)
EVT_BUTTON(10004, OnButtonClicked)
EVT_BUTTON(10005, OnButtonClicked)
EVT_BUTTON(10006, OnButtonClicked)
EVT_BUTTON(10007, OnButtonClicked)
EVT_BUTTON(10008, OnButtonClicked)
EVT_BUTTON(10009, OnButtonClicked)
EVT_BUTTON(10010, OnButtonClicked)
EVT_BUTTON(10011, OnButtonClicked)
EVT_BUTTON(10012, OnButtonClicked)
EVT_BUTTON(10013, OnButtonClicked)
EVT_BUTTON(10014, OnButtonClicked)
EVT_BUTTON(10015, OnButtonClicked)
EVT_BUTTON(10016, OnButtonClicked)
EVT_BUTTON(10017, OnButtonClicked)
EVT_BUTTON(10018, OnButtonClicked)
EVT_BUTTON(10019, OnButtonClicked)
EVT_BUTTON(10020, OnButtonClicked)
EVT_BUTTON(10021, OnButtonClicked)
wxEND_EVENT_TABLE()



MainWindow::MainWindow() : wxFrame(nullptr, wxID_ANY, "Calculator", wxPoint(30, 30), wxSize(800, 600))
{
	wxFont font(24, wxFONTFAMILY_DEFAULT, wxFONTSTYLE_NORMAL, wxFONTWEIGHT_BOLD, false);
	//wxFont font2(20, wxFONTFAMILY_DEFAULT, wxFONTSTYLE_NORMAL, wxFONTWEIGHT_BOLD, false);

	SetFont(font);
	//SetBackgroundColour(wxSystemColour(20));
	txtBox = new wxTextCtrl(this, wxID_ANY, "", wxPoint(150, 10), wxSize(500, 200));
	txtBox->SetBackgroundColour(wxColour("#9999FF"));

	//btnDigit1 = new wxButton(this, 10001, "1", wxPoint(250,225),wxSize(75,75));
	/*btnDigit2 = new wxButton(this, 10002, "2", wxPoint(325, 225), wxSize(75, 75));
	btnDigit3 = new wxButton(this, 10003, "3", wxPoint(400, 225), wxSize(75, 75));
	btnDigit4 = new wxButton(this, 10004, "4", wxPoint(250, 300), wxSize(75, 75));
	btnDigit5 = new wxButton(this, 10005, "5", wxPoint(325, 300), wxSize(75, 75));
	btnDigit6 = new wxButton(this, 10006, "6", wxPoint(400, 300), wxSize(75, 75));
	btnDigit7 = new wxButton(this, 10007, "7", wxPoint(250, 375), wxSize(75, 75));
	btnDigit8 = new wxButton(this, 10008, "8", wxPoint(325, 375), wxSize(75, 75));
	btnDigit9 = new wxButton(this, 10009, "9", wxPoint(400, 375), wxSize(75, 75));
	btnDigit0 = new wxButton(this, 10010, "0", wxPoint(325, 450), wxSize(75, 75));

	btnPlus = new wxButton(this, 10011, "+", wxPoint(675, 25), wxSize(100, 100));
	btnSubtract = new wxButton(this, 10012, "-", wxPoint(675, 125), wxSize(100, 100));
	btnMultiply = new wxButton(this, 10013, "*", wxPoint(675, 225), wxSize(100, 100));
	btnDivide = new wxButton(this, 10014, "/", wxPoint(675, 325), wxSize(100, 100));
	btnMod = new wxButton(this, 10015, "%", wxPoint(675, 425), wxSize(100, 100));

	btnNegate = new wxButton(this, 10016, "Neg", wxPoint(25, 325), wxSize(100, 100));
	btnEqual = new wxButton(this, 10017, "=", wxPoint(525, 425), wxSize(100, 100));

	btnClear = new wxButton(this, 10018, "Clear", wxPoint(25, 425), wxSize(100, 100));

	btnBinary = new wxButton(this, 10019, "Bin", wxPoint(25, 25), wxSize(100, 100));
	btnHex = new wxButton(this, 10020, "Hex", wxPoint(25, 125), wxSize(100, 100));
	btnDecimal = new wxButton(this, 10021, "Dec", wxPoint(25, 225), wxSize(100, 100));

	btnDigit2->SetBackgroundColour(wxColour("#AE71DC"));
	btnDigit3->SetBackgroundColour(wxColour("#AE71DC"));
	btnDigit4->SetBackgroundColour(wxColour("#AE71DC"));
	btnDigit5->SetBackgroundColour(wxColour("#AE71DC"));
	btnDigit6->SetBackgroundColour(wxColour("#AE71DC"));
	btnDigit7->SetBackgroundColour(wxColour("#AE71DC"));
	btnDigit8->SetBackgroundColour(wxColour("#AE71DC"));
	btnDigit9->SetBackgroundColour(wxColour("#AE71DC"));
	btnDigit0->SetBackgroundColour(wxColour("#AE71DC"));

	btnPlus->SetBackgroundColour(wxColour("#9E58D4"));
	btnSubtract->SetBackgroundColour(wxColour("#69229F"));
	btnMultiply->SetBackgroundColour(wxColour("#9E58D4"));
	btnDivide->SetBackgroundColour(wxColour("#69229F"));
	btnMod->SetBackgroundColour(wxColour("#9E58D4"));

	btnEqual->SetBackgroundColour(wxColour("#69229F"));

	btnBinary->SetBackgroundColour(wxColour("#9E58D4"));
	btnHex->SetBackgroundColour(wxColour("#69229F"));
	btnDecimal->SetBackgroundColour(wxColour("#9E58D4"));
	btnNegate->SetBackgroundColour(wxColour("#69229F"));
	btnClear->SetBackgroundColour(wxColour("#9E58D4"));*/
	ButtonFactory BF;

	btnDigit1 = BF.CreateAddButton(this, 10001, "1", wxPoint(250, 225), wxSize(75, 75), wxColour("#AE71DC"));
	btnDigit2 = BF.CreateAddButton(this, 10002, "2", wxPoint(325, 225), wxSize(75, 75), wxColour("#AE71DC"));
	btnDigit3 = BF.CreateAddButton(this, 10003, "3", wxPoint(400, 225), wxSize(75, 75), wxColour("#AE71DC"));
	btnDigit4 = BF.CreateAddButton(this, 10004, "4", wxPoint(250, 300), wxSize(75, 75), wxColour("#AE71DC"));
	btnDigit5 = BF.CreateAddButton(this, 10005, "5", wxPoint(325, 300), wxSize(75, 75), wxColour("#AE71DC"));
	btnDigit6 = BF.CreateAddButton(this, 10006, "6", wxPoint(400, 300), wxSize(75, 75), wxColour("#AE71DC"));
	btnDigit7 = BF.CreateAddButton(this, 10007, "7", wxPoint(250, 375), wxSize(75, 75), wxColour("#AE71DC"));
	btnDigit8 = BF.CreateAddButton(this, 10008, "8", wxPoint(325, 375), wxSize(75, 75), wxColour("#AE71DC"));
	btnDigit9 = BF.CreateAddButton(this, 10009, "9", wxPoint(400, 375), wxSize(75, 75), wxColour("#AE71DC"));
	btnDigit0 = BF.CreateAddButton(this, 10010, "0", wxPoint(325, 450), wxSize(75, 75), wxColour("#AE71DC"));

	btnPlus = BF.CreateAddButton(this, 10011, "+", wxPoint(675, 25), wxSize(100, 100), wxColour("#9E58D4"));
	btnSubtract = BF.CreateAddButton(this, 10012, "-", wxPoint(675, 125), wxSize(100, 100), wxColour("#69229F"));
	btnMultiply = BF.CreateAddButton(this, 10013, "*", wxPoint(675, 225), wxSize(100, 100), wxColour("#9E58D4"));
	btnDivide = BF.CreateAddButton(this, 10014, "/", wxPoint(675, 325), wxSize(100, 100), wxColour("#69229F"));
	btnMod = BF.CreateAddButton(this, 10015, "%", wxPoint(675, 425), wxSize(100, 100), wxColour("#9E58D4"));

	btnNegate = BF.CreateAddButton(this, 10016, "Neg", wxPoint(25, 325), wxSize(100, 100), wxColour("#69229F"));
	btnEqual = BF.CreateAddButton(this, 10017, "=", wxPoint(525, 425), wxSize(100, 100), wxColour("#9E58D4"));

	btnClear = BF.CreateAddButton(this, 10018, "Clear", wxPoint(25, 425), wxSize(100, 100), wxColour("#9E58D4"));

	btnBinary = BF.CreateAddButton(this, 10019, "Bin", wxPoint(25, 25), wxSize(100, 100), wxColour("#9E58D4"));
	btnHex = BF.CreateAddButton(this, 10020, "Hex", wxPoint(25, 125), wxSize(100, 100), wxColour("#69229F"));
	btnDecimal = BF.CreateAddButton(this, 10021, "Dec", wxPoint(25, 225), wxSize(100, 100), wxColour("#9E58D4"));

	btnPlus->Disable();
	btnSubtract->Disable();
	btnMultiply->Disable();
	btnDivide->Disable();
	btnMod->Disable();
	btnDecimal->Disable();


}
MainWindow::~MainWindow()
{
	//delete[]btn;
}

void MainWindow::OnButtonClicked(wxCommandEvent& evt)
{
	
	int id = evt.GetId();
	evt.GetEventObject();
	wxButton* temp = (wxButton*)evt.GetEventObject();
	std::stringstream hex;

	for (int x = 1; x < 11; x++) // Doesnt print beyond signs and numbers
	{
		if (x + 10000 == id)
		{

			wxString label = temp->GetLabel();
			numHolder.append(label);
			txtLabel.append(label);
			txtBox->SetLabel(txtLabel);
			//bFirstClick = false;

			btnPlus->Enable();
			btnSubtract->Enable();
			btnMultiply->Enable();
			btnDivide->Enable();
			btnMod->Enable();
			

		}

	}
	for (int x = 11; x < 16; x++) // Doesnt print beyond signs and numbers
	{
		if (x + 10000 == id)
		{
			
			num1 = std::stof(numHolder.ToStdString());
			numHolder = "";
			NumVectors.push_back(num1);

			wxString label = temp->GetLabel();
			oper = label;
			Operators.push_back(oper);
			txtLabel.append(label);
			txtBox->SetLabel(txtLabel);



			//Disable after one operand clicked
			btnPlus->Disable();
			btnSubtract->Disable();
			btnMultiply->Disable();
			btnDivide->Disable();
			btnMod->Disable();
		}


	}

	//Extra switches for other buttons
	switch (id)
	{
	/*case 10011://
	{

		break;
	}
	case 10012:
	{
		break;
	}
	case 10013:
	{
		break;
	}
	case 10014:
	{
		break;
	}
	case 10015:
	{
		break;
	}*/
	case 10016: // Negate
	{
		if (numHolder != "") 
		{
			if (numHolder[0] == '-')
			{
				txtLabel.Remove(txtLabel.size() - numHolder.size());

				numHolder.Remove(0,1);
			}
			else
			{
				//wxString temp = numHolder;
				txtLabel.Remove(txtLabel.size() - numHolder.size());
				numHolder = "-" + numHolder;


			}
			txtLabel += numHolder;
			txtBox->SetLabel(txtLabel);
		}
		break;
	}
	case 10017:
	{
		//Equal
		if (numHolder != "")
		{
			
				num1 = std::stof(numHolder.ToStdString());
				numHolder = "";
				NumVectors.push_back(num1);
		}
		if (NumVectors.size() >= 2) {
			while (NumVectors.size() >= 2)
			{
				if (sum != 0)
				{
					num1 = sum;
				}
				else
				{
					num1 = NumVectors.front();
					NumVectors.erase(NumVectors.begin());
				}
				num2 = NumVectors.front();
				NumVectors.erase(NumVectors.begin());
				wxString _oper = Operators.back();
				Operators.front();
				Operators.erase(Operators.begin());
				if (_oper == "+")
				{
				 CalcProc->Addition(num1, num2);
				}
				else if (_oper == "-")
				{
					CalcProc->Subtraction(num1, num2);
				}
				else if (_oper == "*")
				{
					CalcProc->Multiply(num1, num2);
				}
				else if (_oper == "/")
				{
					 CalcProc->Division(num1, num2);
				}
				else if (_oper == "%")
				{
					CalcProc->Mod(num1, num2);
				}
				sum = CalcProc->Sum();
			}
			/*while (NumVectors.size() >= 2)
			{

				num1 = NumVectors.back();
				NumVectors.pop_back();

				num2 = NumVectors.back();
				wxString _oper = Operators.back();
				Operators.pop_back();
				NumVectors.pop_back();
				if (_oper == "+")
				{
					sum = CalcProc->Addition(num1, num2);
				}
				else if (_oper == "-")
				{
					sum = CalcProc->Subtraction(num1, num2);
				}
				else if (_oper == "*")
				{
					sum = CalcProc->Multiply(num1, num2);
				}
				else if (_oper == "/")
				{
					sum = CalcProc->Division(num1, num2);
				}
				else if (_oper == "%")
				{
					sum = CalcProc->Mod(num1, num2);
				}
				NumVectors.emplace_back(sum);
			}*/
			txtLabel = (wxString)std::to_string(sum);
			numHolder = txtLabel;
			switch (type)
			{
			case 1:
				//std::bitset<sizeof(float)* CHAR_BIT> bits(sum);
				txtLabel = std::bitset<16>(128).to_string();

				txtBox->SetLabel(txtLabel);
				break;
			case 2:
				
				hex << std::hex <<(int)sum;
				txtLabel = hex.str();
				txtBox->SetLabel(txtLabel);
				hex.clear();
				break;
			case 3 :
				txtBox->SetLabel(txtLabel);
				break;
			default:
				break;
			}
			
			

			num2 = 0;
			num1 = 0;
			sum = 0;
			NumVectors.clear();

			btnPlus->Enable();
			btnSubtract->Enable();
			btnMultiply->Enable();
			btnDivide->Enable();
			btnMod->Enable();
		}
		else
		{

}
		break;
	}
	case 10018: // Clear Button
	{
		txtLabel = "";
		txtBox->SetLabel(txtLabel);
		numHolder = txtLabel;

		num2 = 0;
		num1 = 0;
		sum = 0;
		NumVectors.clear();

		btnPlus->Disable();
		btnSubtract->Disable();
		btnMultiply->Disable();
		btnDivide->Disable();
		btnMod->Disable();

		break;
	}
	case 10019://bin
	{
		type = CalcProc->Bin();
		btnBinary->Disable();
		btnHex->Enable();
		btnDecimal->Enable();
		break;
	}
	case 10020://hex
	{
		type = CalcProc->Hex();
		btnBinary->Enable();
		btnHex->Disable();
		btnDecimal->Enable();
		break;
	}
	case 10021://dec
	{
		type = CalcProc->Dec();
		btnBinary->Enable();
		btnHex->Enable();
		btnDecimal->Disable();
		break;
	}
	}



	evt.Skip();
}






