#pragma once

#include "wx/wx.h"

class MainWindow;
class Main : public wxApp
{
private:
	MainWindow* mainWindow;
public:
	Main();
	~Main();
	virtual bool OnInit();

};

