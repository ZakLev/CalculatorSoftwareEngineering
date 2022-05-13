#pragma once
#include <wx/wx.h>
#include <wx/event.h>
//#include <wx/string.h>

class ButtonFactory
{
public:
	
	wxButton* CreateAddButton(wxWindow* window, int id,wxString label,wxPoint startingCoordinate,wxSize size,wxColour color);
	//wxDECLARE_EVENT_TABLE();

};