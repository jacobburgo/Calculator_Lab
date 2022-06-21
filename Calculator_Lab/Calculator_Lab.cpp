#include "Calculator_Lab.h"
#include <iostream>
#include <string>
#include "wx/wx.h"
#include "ButtonFactory.h"
#include "CalculatorProcessor.h"

wxBEGIN_EVENT_TABLE(Calculator, wxFrame)
EVT_BUTTON(wxID_ANY, Calculator::OnButtonClick)
wxEND_EVENT_TABLE()

Calculator::Calculator() : wxFrame(nullptr, wxID_ANY, "Jacob's Calculator", wxPoint(675, 100), wxSize(575, 800)) {
	ButtonFactory factory;

	for (int i = 0; i < 20; i++) {
		mButtons[i] = factory.CreateButton(this, i);
	}

	calcOutputWindow = new wxTextCtrl(this, 120, "", wxPoint(10, 10), wxSize(540, 170));

	// TODO: Style buttons Font, Font-Size, Color
	// TODO: Style Output Window, Font, Font-Size, Color
}

Calculator::~Calculator() {}

void Calculator::OnButtonClick(wxCommandEvent& evt) {
	CalculatorProcessor* processor = CalculatorProcessor::GetInstance();

	wxButton* evtObj = (wxButton*)evt.GetEventObject();
	wxString buttonLabel = evtObj->GetLabelText();

	int commandWork = 0;

	wxString value = calcOutputWindow->GetValue();
	processor->SetBaseNumber(wxAtoi(value));

	if (buttonLabel == "C") {
		calcOutputWindow->Clear();
	} else if (buttonLabel == "hex") {
		std::string newVal = processor->GetHexadecimal();
		calcOutputWindow->Clear();
		calcOutputWindow->AppendText(newVal);
	} else if (buttonLabel == "dec") {
		std::string newVal = processor->GetDecimal();
		calcOutputWindow->Clear();
		calcOutputWindow->AppendText(newVal);
	} else if (buttonLabel == "bin") {
		std::string newVal = processor->GetBinary();
		calcOutputWindow->Clear();
		calcOutputWindow->AppendText(newVal);
	} else if (buttonLabel != "=") {
		calcOutputWindow->AppendText(buttonLabel);
	} else {
		if (buttonLabel == "+") {
		} else if (buttonLabel == "-") {
		} else if (buttonLabel == "*") {
		} else if (buttonLabel == "/") {
		}
	}

	// TODO: Implement operators
	// TODO: Implement modifiers
}
