#include "MainWindow.h"

wxBEGIN_EVENT_TABLE(MainWindow, wxFrame)
EVT_BUTTON(10001, OnButtonClicked)
wxEND_EVENT_TABLE()

MainWindow::MainWindow() : wxFrame(nullptr, wxID_ANY, "Calculator", wxPoint(30, 30), wxSize(800, 600))
{
	txtBox = new wxTextCtrl(this, wxID_ANY, "", wxPoint(150, 10), wxSize(500, 200));
	btnDigit1 = new wxButton(this, wxID_ANY, "", wxPoint(250,250),wxSize(75,75));
	btnDigit2 = new wxButton(this, wxID_ANY, "", wxPoint(325, 250), wxSize(75, 75));
	btnDigit3 = new wxButton(this, wxID_ANY, "", wxPoint(400, 250), wxSize(75, 75));
	btnDigit4 = new wxButton(this, wxID_ANY, "", wxPoint(250, 325), wxSize(75, 75));
	btnDigit5 = new wxButton(this, wxID_ANY, "", wxPoint(325, 325), wxSize(75, 75));
	btnDigit6 = new wxButton(this, wxID_ANY, "", wxPoint(400, 325), wxSize(75, 75));
	btnDigit7 = new wxButton(this, wxID_ANY, "", wxPoint(250, 400), wxSize(75, 75));
	btnDigit8 = new wxButton(this, wxID_ANY, "", wxPoint(325, 400), wxSize(75, 75));
	btnDigit9 = new wxButton(this, wxID_ANY, "", wxPoint(400, 400), wxSize(75, 75));
	btnDigit0 = new wxButton(this, wxID_ANY, "", wxPoint(325, 475), wxSize(75, 75));
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


