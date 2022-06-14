#include "Calculator_Lab.h"
#include <iostream>
#include <string>
#include "wx/wx.h"

wxBEGIN_EVENT_TABLE(Calculator, wxFrame)
EVT_BUTTON(wxID_ANY, Calculator::OnButtonClick)
wxEND_EVENT_TABLE()

enum buttonIds {
	first_button_id = wxID_LAST + 1,
	other_button_ids
};

Calculator::Calculator() : wxFrame(nullptr, wxID_ANY, "Jacob's Calculator", wxPoint(675, 100), wxSize(575, 800)) {
	bin = new wxButton(this, first_button_id, "bin", wxPoint(10, 200), wxSize(100, 100));
	hex = new wxButton(this, other_button_ids, "hex", wxPoint(120, 200), wxSize(100, 100));
	dec = new wxButton(this, other_button_ids, "dec", wxPoint(230, 200), wxSize(100, 100));
	clear = new wxButton(this, other_button_ids, "C", wxPoint(340, 200), wxSize(210, 100));
	one = new wxButton(this, other_button_ids, "1", wxPoint(10, 310), wxSize(100, 100));
	two = new wxButton(this, other_button_ids, "2", wxPoint(120, 310), wxSize(100, 100));
	three = new wxButton(this, other_button_ids, "3", wxPoint(230, 310), wxSize(100, 100));
	plus = new wxButton(this, other_button_ids, "+", wxPoint(340, 310), wxSize(100, 100));
	minus = new wxButton(this, other_button_ids, "-", wxPoint(450, 310), wxSize(100, 100));
	four = new wxButton(this, other_button_ids, "4", wxPoint(10, 420), wxSize(100, 100));
	five = new wxButton(this, other_button_ids, "5", wxPoint(120, 420), wxSize(100, 100));
	six = new wxButton(this, other_button_ids, "6", wxPoint(230, 420), wxSize(100, 100));
	multiply = new wxButton(this, other_button_ids, "*", wxPoint(340, 420), wxSize(100, 100));
	divide = new wxButton(this, other_button_ids, "/", wxPoint(450, 420), wxSize(100, 100));
	seven = new wxButton(this, other_button_ids, "7", wxPoint(10, 530), wxSize(100, 100));
	eight = new wxButton(this, other_button_ids, "8", wxPoint(120, 530), wxSize(100, 100));
	nine = new wxButton(this, other_button_ids, "9", wxPoint(230, 530), wxSize(100, 100));
	numMod = new wxButton(this, other_button_ids, "%", wxPoint(340, 530), wxSize(100, 100));
	equals = new wxButton(this, other_button_ids, "=", wxPoint(450, 530), wxSize(100, 210));
	zero = new wxButton(this, other_button_ids, "0", wxPoint(10, 640), wxSize(320, 100));
	negate = new wxButton(this, other_button_ids, "+/-", wxPoint(340, 640), wxSize(100, 100));

	calcOutputWindow = new wxTextCtrl(this, 120, "", wxPoint(10, 10), wxSize(540, 170));

	// TODO: Style buttons Font, Font-Size, Color
	// TODO: Style Output Window, Font, Font-Size, Color
}

Calculator::~Calculator() {
}

void Calculator::OnButtonClick(wxCommandEvent& evt) {
	int id = evt.GetId();
	wxButton* evtObj = (wxButton*)evt.GetEventObject();
	wxString buttonLabel = evtObj->GetLabelText();
	calcOutputWindow->AppendText(buttonLabel);
	if (buttonLabel == "C") calcOutputWindow->Clear();

	// TODO: Implement operators
	// TODO: Implement modifiers
}
