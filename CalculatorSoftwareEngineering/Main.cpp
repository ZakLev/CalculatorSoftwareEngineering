#include "Main.h"
#include "MainWindow.h"

wxIMPLEMENT_APP(Main);

Main::Main()
{
}

Main::~Main()
{
}

bool Main::OnInit()
{
	mainWindow = new MainWindow();
	mainWindow->Show();
	mainWindow->SetBackgroundColour(wxColour("#2F380B"));
	return true;
}