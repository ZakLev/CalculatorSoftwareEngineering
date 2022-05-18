#pragma once
#include "wx/wx.h"

class MainWindow : public wxFrame
{
public:
	MainWindow();
	~MainWindow();
public:
	int nFieldWidth = 10;
	int nFieldHeight = 10;
	wxButton* btnDigit1 = nullptr;
	wxButton* btnDigit2 = nullptr;
	wxButton* btnDigit3 = nullptr;
	wxButton* btnDigit4 = nullptr;
	wxButton* btnDigit5 = nullptr;
	wxButton* btnDigit6 = nullptr;
	wxButton* btnDigit7 = nullptr;
	wxButton* btnDigit8 = nullptr;
	wxButton* btnDigit9 = nullptr;
	wxButton* btnDigit0 = nullptr;

	wxButton* btnPlus = nullptr;
	wxButton* btnSubtract = nullptr;
	wxButton* btnMultiply = nullptr;
	wxButton* btnDivide = nullptr;
	wxButton* btnMod = nullptr;

	wxButton* btnEqual = nullptr;
	wxButton* btnNegate = nullptr;

	wxButton* btnClear = nullptr;
	wxButton* btnHex = nullptr;
	wxButton* btnDecimal = nullptr;
	wxButton* btnBinary = nullptr;

	//wxButton** btn;
	wxTextCtrl *txtBox = nullptr;
	//wxString* txtLabel = nullptr;
	wxString txtLabel = "";
	int* nField = nullptr;
	bool bFirstClick = true;
	//CalculatorProcessor* CalculatorProcessor::instance = nullptr;

	virtual void OnButtonClicked(wxCommandEvent& evt);
	void  OnButtonClicked();
	wxDECLARE_EVENT_TABLE();
	
};


