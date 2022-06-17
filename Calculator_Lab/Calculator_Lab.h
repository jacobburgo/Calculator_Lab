#pragma once

#include "wx/wx.h"

class Calculator : public wxFrame {
public: // Lifecycle Methods
	Calculator();
	~Calculator();
	wxButton* mButtons[21];
	wxTextCtrl* calcOutputWindow;

public:
	wxDECLARE_EVENT_TABLE();

	void OnButtonClick(wxCommandEvent& evt);
};
