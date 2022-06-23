#include "Calculator_Lab.h"
#include <iostream>
#include <string>
#include "wx/wx.h"
#include "ButtonFactory.h"
#include "CalculatorProcessor.h"
#include "IBaseCommand.h"
#include "Add.h"
#include "Divide.h"
#include "Minus.h"
#include "Multiply.h"
#include "Mod.h"

wxBEGIN_EVENT_TABLE(Calculator, wxFrame)
EVT_BUTTON(wxID_ANY, Calculator::OnButtonClick)
wxEND_EVENT_TABLE()

Calculator::Calculator() : wxFrame(nullptr, wxID_ANY, "Jacob's Calculator", wxPoint(675, 100), wxSize(575, 800)) {
	ButtonFactory factory;

	for (int i = 0; i < 21; i++) {
		mButtons[i] = factory.CreateButton(this, i);
		mButtons[i]->Bind(wxEVT_COMMAND_LEFT_CLICK, &Calculator::OnButtonClick, this, mButtons[i]->GetId());
	}

	calcOutputWindow = new wxTextCtrl(this, 120, "", wxPoint(10, 10), wxSize(540, 170));
}

Calculator::~Calculator() {
	for (size_t i = 0; i < 21; i++) {
		delete mButtons[i];
	}
}

void Calculator::OnButtonClick(wxCommandEvent& evt) {
	CalculatorProcessor* processor = CalculatorProcessor::GetInstance();

	const char* p = "+";
	const char* s = "-";
	const char* m = "*";
	const char* d = "/";
	const char* mo = "%";

	wxButton* evtObj = (wxButton*)evt.GetEventObject();
	wxString buttonLabel = evtObj->GetLabelText();

	int commandWork = 0;

	wxString value = calcOutputWindow->GetValue();
	processor->SetBaseNumber(wxAtoi(value));

	if (buttonLabel == "C") {
		Calculator::commands.clear();
		calcOutputWindow->Clear();
	}
	else if (buttonLabel == "hex") {
		std::string newVal = processor->GetHexadecimal();
		calcOutputWindow->Clear();
		calcOutputWindow->AppendText(newVal);
	}
	else if (buttonLabel == "dec") {
		std::string newVal = processor->GetDecimal();
		calcOutputWindow->Clear();
		calcOutputWindow->AppendText(newVal);
	}
	else if (buttonLabel == "bin") {
		std::string newVal = processor->GetBinary();
		calcOutputWindow->Clear();
		calcOutputWindow->AppendText(newVal);
	}
	else if (buttonLabel == "+/-") {
		if (value[0] != *s) {
			calcOutputWindow->Clear();
			calcOutputWindow->AppendText("-" + value);
		}
		if (value[0] == *s) {
			wxString newVal = value.substr(1);
			calcOutputWindow->Clear();
			calcOutputWindow->AppendText(newVal);
		}
	}
	else if (buttonLabel == "=") {
		wxString tempVal = calcOutputWindow->GetValue();
		int answer = 0;
		for (size_t i = 0; i < Calculator::commands.size(); i++) {
			std::string temp = tempVal.ToStdString();
			std::string num2 = temp.substr(processor->numSize + 1);
			int num2Int = std::stoi(num2);
			for (size_t i = 0; i < Calculator::commands.size(); i++) {
				answer = Calculator::commands[i]->Execute(num2Int);
			}
		}
		calcOutputWindow->Clear();
		calcOutputWindow->AppendText(std::to_string(answer));
	}
	else {
		if (buttonLabel == "+") {
			processor->numSize = value.length();
			Add* add = new Add(processor, wxAtoi(value));
			Calculator::commands.push_back(add);
			calcOutputWindow->AppendText(buttonLabel);
		}
		else if (buttonLabel == "-") {
			processor->numSize = value.length();
			Minus* sub = new Minus(processor, wxAtoi(value));
			Calculator::commands.push_back(sub);
			calcOutputWindow->AppendText(buttonLabel);
		}
		else if (buttonLabel == "*") {
			processor->numSize = value.length();
			Multiply* mult = new Multiply(processor, wxAtoi(value));
			Calculator::commands.push_back(mult);
			calcOutputWindow->AppendText(buttonLabel);
		}
		else if (buttonLabel == "/") {
			processor->numSize = value.length();
			Divide* div = new Divide(processor, wxAtoi(value));
			Calculator::commands.push_back(div);
			calcOutputWindow->AppendText(buttonLabel);
		}
		else if (buttonLabel == "%") {
			processor->numSize = value.length();
			Mod* mod = new Mod(processor, wxAtoi(value));
			Calculator::commands.push_back(mod);
			calcOutputWindow->AppendText(buttonLabel);
		}
		else {
			calcOutputWindow->AppendText(buttonLabel);
		}
	}

	// TODO: Implement operators
	// TODO: Implement modifiers
}
