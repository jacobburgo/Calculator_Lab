#pragma once

#include "wx/wx.h"
#include "IBaseCommand.h"
#include <vector>

class Calculator : public wxFrame {
public:
	Calculator();
	~Calculator();
	wxButton* mButtons[21];
	wxTextCtrl* calcOutputWindow;
	std::vector<IBaseCommand*> commands;

public:
	void OnButtonClick(wxCommandEvent& evt);

	wxDECLARE_EVENT_TABLE();
};
