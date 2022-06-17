#include "Calculator_Lab.h"
#include <iostream>
#include <string>
#include "wx/wx.h"
#include "ButtonFactory.h"

wxBEGIN_EVENT_TABLE(Calculator, wxFrame)
EVT_BUTTON(wxID_ANY, Calculator::OnButtonClick)
wxEND_EVENT_TABLE()

Calculator::Calculator() : wxFrame(nullptr, wxID_ANY, "Jacob's Calculator", wxPoint(675, 100), wxSize(575, 800)) {
	ButtonFactory factory;
	wxButton* calButtonArray[21] = { this->bin, this->hex, this->dec, this->clear, this->one, this->two, this->three, this->plus, this->minus, this->four, this->five, this->six, this->multiply, this->divide, this->seven, this->eight, this->nine, this->numMod, this->equals, this->zero, this->negate };

	for (int i = 0; i < 20; i++) {
		calButtonArray[i] = factory.CreateButton(this);
	}

	calcOutputWindow = new wxTextCtrl(this, 120, "", wxPoint(10, 10), wxSize(540, 170));

	// TODO: Style buttons Font, Font-Size, Color
	// TODO: Style Output Window, Font, Font-Size, Color
}

Calculator::~Calculator() {}

void Calculator::OnButtonClick(wxCommandEvent& evt) {
	int id = evt.GetId();
	wxButton* evtObj = (wxButton*)evt.GetEventObject();
	wxString buttonLabel = evtObj->GetLabelText();
	calcOutputWindow->AppendText(buttonLabel);
	if (buttonLabel == "C") calcOutputWindow->Clear();

	// TODO: Implement operators
	// TODO: Implement modifiers
}
