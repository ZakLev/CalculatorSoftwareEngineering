#include "MainWindow.h"

wxBEGIN_EVENT_TABLE(MainWindow, wxFrame)
EVT_BUTTON(10001, OnButtonClicked)
wxEND_EVENT_TABLE()

MainWindow::MainWindow() : wxFrame(nullptr, wxID_ANY, "Calculator", wxPoint(30, 30), wxSize(800, 600))
{
	wxFont font(24, wxFONTFAMILY_DEFAULT, wxFONTSTYLE_NORMAL, wxFONTWEIGHT_BOLD, false);
	//wxFont font2(20, wxFONTFAMILY_DEFAULT, wxFONTSTYLE_NORMAL, wxFONTWEIGHT_BOLD, false);
	
	SetFont(font);
	
	txtBox = new wxTextCtrl(this, wxID_ANY, "", wxPoint(150, 10), wxSize(500, 200));
	btnDigit1 = new wxButton(this, wxID_ANY, "1", wxPoint(250,225),wxSize(75,75));
	btnDigit2 = new wxButton(this, wxID_ANY, "2", wxPoint(325, 225), wxSize(75, 75));
	btnDigit3 = new wxButton(this, wxID_ANY, "3", wxPoint(400, 225), wxSize(75, 75));
	btnDigit4 = new wxButton(this, wxID_ANY, "4", wxPoint(250, 300), wxSize(75, 75));
	btnDigit5 = new wxButton(this, wxID_ANY, "5", wxPoint(325, 300), wxSize(75, 75));
	btnDigit6 = new wxButton(this, wxID_ANY, "6", wxPoint(400, 300), wxSize(75, 75));
	btnDigit7 = new wxButton(this, wxID_ANY, "7", wxPoint(250, 375), wxSize(75, 75));
	btnDigit8 = new wxButton(this, wxID_ANY, "8", wxPoint(325, 375), wxSize(75, 75));
	btnDigit9 = new wxButton(this, wxID_ANY, "9", wxPoint(400, 375), wxSize(75, 75));
	btnDigit0 = new wxButton(this, wxID_ANY, "0", wxPoint(325, 450), wxSize(75, 75));

	btnPlus = new wxButton(this, wxID_ANY, "+", wxPoint(675, 25), wxSize(100,100));
	btnSubtract = new wxButton(this, wxID_ANY, "-", wxPoint(675, 125), wxSize(100, 100));
	btnMultiply = new wxButton(this, wxID_ANY, "*", wxPoint(675, 225), wxSize(100, 100));
	btnDivide = new wxButton(this, wxID_ANY, "/", wxPoint(675, 325), wxSize(100, 100));
	btnMod = new wxButton(this, wxID_ANY, "%", wxPoint(675, 425), wxSize(100, 100));
	
	btnNegate = new wxButton(this, wxID_ANY, "Neg", wxPoint(25, 325), wxSize(100, 100));
	btnEqual = new wxButton(this, wxID_ANY, "=", wxPoint(525, 425), wxSize(100, 100));

	btnClear = new wxButton(this, wxID_ANY, "Clear", wxPoint(25,425), wxSize(100, 100));

	btnBinary = new wxButton(this, wxID_ANY, "Bin", wxPoint(25, 25), wxSize(100, 100));
	btnHex = new wxButton(this, wxID_ANY, "Hex", wxPoint(25, 125), wxSize(100, 100));
	btnDecimal = new wxButton(this, wxID_ANY, "Dec", wxPoint(25, 225), wxSize(100, 100));

	/*btn = new wxButton * [nFieldWidth * nFieldHeight];
	
	wxGridSizer* grid = new wxGridSizer(nFieldWidth, nFieldHeight, 0, 0);

	nField = new int[nFieldWidth * nFieldHeight];

	wxFont font(24, wxFONTFAMILY_DEFAULT, wxFONTSTYLE_NORMAL, wxFONTWEIGHT_BOLD, false);

	for (int x = 0; x < 3; x++)
	{
		for (int y = 0; y < 3; y++)
		{
			btn[y * nFieldWidth + x] = new wxButton(this, 10000 + (y * nFieldWidth + x));
			btn[y * nFieldWidth + x]->SetFont(font);
			grid->Add(btn[y * nFieldWidth + x], 1, wxEXPAND | wxALL);

			btn[y * nFieldWidth + x]->Bind(wxEVT_COMMAND_BUTTON_CLICKED, &MainWindow::OnButtonClicked, this);
			nField[y * nFieldWidth + x] = 0;

		}
	}
	this->SetSizer(grid);
	grid->Layout();*/
}
MainWindow::~MainWindow()
{
	//delete[]btn;
}

void MainWindow::OnButtonClicked(wxCommandEvent& evt)
{
	

	//evt.Skip();
}


