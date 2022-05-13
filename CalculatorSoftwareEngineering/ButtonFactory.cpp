#include "ButtonFactory.h"
#include "MainWindow.h"

//wxBEGIN_EVENT_TABLE(MainWindow, wxFrame)
//wxEND_EVENT_TABLE()
//struct MyFunctor {
//	void (MainWindow::*OnButtonClicked)(wxCommandEvent&)
//	{
//
//	};
//		
//		
//		
//};
//void (MainWindow::*OnButtonClicked)(wxCommandEvent&)
//{
//
//};
//MyFunctor* Functor;

//wxDEFINE_EVENT(wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEvent);
wxButton* ButtonFactory::CreateAddButton(wxWindow* window, int id, wxString label, wxPoint startingCoordinate, wxSize size, wxColour color)
{
	//EVT_BUTTON(id, MainWindow::OnButtonClicked);
	
	wxButton* button = new wxButton(window, id, label, startingCoordinate, size);
	button->SetBackgroundColour(color);
	//button->Bind()
	//button->Bind(wxEVT_COMMAND_BUTTON_CLICKED, Functor,id,-1,window);
	
   // button->Bind(wxEVT_COMMAND_BUTTON_CLICKED, &MainWindow::OnButtonClicked,window);
	//MainWindow::Bind(wxEVT_COMMAND_BUTTON_CLICKED,&MainWindow::OnButtonClicked,id ,-1,button);
	
	return button;
}



