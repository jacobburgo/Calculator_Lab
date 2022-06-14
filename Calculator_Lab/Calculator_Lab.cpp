#include "Calculator_Lab.h"
#include <iostream>
#include <string>
#include "wx/wx.h"

wxBEGIN_EVENT_TABLE(Calculator, wxFrame)
EVT_BUTTON(101, Calculator::OnButtonClick)
EVT_BUTTON(102, Calculator::OnButtonClick)
EVT_BUTTON(103, Calculator::OnButtonClick)
EVT_BUTTON(104, Calculator::OnButtonClick)
EVT_BUTTON(105, Calculator::OnButtonClick)
EVT_BUTTON(106, Calculator::OnButtonClick)
EVT_BUTTON(107, Calculator::OnButtonClick)
EVT_BUTTON(108, Calculator::OnButtonClick)
EVT_BUTTON(109, Calculator::OnButtonClick)
EVT_BUTTON(110, Calculator::OnButtonClick)
EVT_BUTTON(111, Calculator::OnButtonClick)
EVT_BUTTON(112, Calculator::OnButtonClick)
EVT_BUTTON(113, Calculator::OnButtonClick)
EVT_BUTTON(114, Calculator::OnButtonClick)
EVT_BUTTON(115, Calculator::OnButtonClick)
EVT_BUTTON(116, Calculator::OnButtonClick)
EVT_BUTTON(117, Calculator::OnButtonClick)
EVT_BUTTON(118, Calculator::OnButtonClick)
EVT_BUTTON(119, Calculator::OnButtonClick)
wxEND_EVENT_TABLE()

Calculator::Calculator() : wxFrame(nullptr, wxID_ANY, "Jacob's Calculator", wxPoint(675, 100), wxSize(575, 800)) {
	// TODO: Loop and create all buttons using index for position & ID
	// const wxButton* buttonArray [21] = { bin, hex, dec, clear, one, two, three, plus, minus, four, five, six, multiply, divide, seven, eight, nine, numMod, equals, zero, negate };
	// const char* buttonLabelArray[21] = { "bin", "hex", "dec", "C", "1", "2", "3", "+", "-", "4", "5", "6", "*", "/", "7", "8", "9", "%", "=", "0", "+/-" };
	// int pointX = 10, pointY = 200, sizeX = 100, sizeY = 100;

	bin = new wxButton(this, 101, "bin", wxPoint(10, 200), wxSize(100, 100));
	hex = new wxButton(this, 102, "hex", wxPoint(120, 200), wxSize(100, 100));
	dec = new wxButton(this, 103, "dec", wxPoint(230, 200), wxSize(100, 100));
	clear = new wxButton(this, 104, "C", wxPoint(340, 200), wxSize(210, 100));
	one = new wxButton(this, 105, "1", wxPoint(10, 310), wxSize(100, 100));
	two = new wxButton(this, 106, "2", wxPoint(120, 310), wxSize(100, 100));
	three = new wxButton(this, 107, "3", wxPoint(230, 310), wxSize(100, 100));
	plus = new wxButton(this, 108, "+", wxPoint(340, 310), wxSize(100, 100));
	minus = new wxButton(this, 109, "-", wxPoint(450, 310), wxSize(100, 100));
	four = new wxButton(this, 110, "4", wxPoint(10, 420), wxSize(100, 100));
	five = new wxButton(this, 111, "5", wxPoint(120, 420), wxSize(100, 100));
	six = new wxButton(this, 112, "6", wxPoint(230, 420), wxSize(100, 100));
	multiply = new wxButton(this, 113, "*", wxPoint(340, 420), wxSize(100, 100));
	divide = new wxButton(this, 114, "/", wxPoint(450, 420), wxSize(100, 100));
	seven = new wxButton(this, 115, "7", wxPoint(10, 530), wxSize(100, 100));
	eight = new wxButton(this, 116, "8", wxPoint(120, 530), wxSize(100, 100));
	nine = new wxButton(this, 117, "9", wxPoint(230, 530), wxSize(100, 100));
	numMod = new wxButton(this, 118, "%", wxPoint(340, 530), wxSize(100, 100));
	equals = new wxButton(this, 119, "=", wxPoint(450, 530), wxSize(100, 210));
	zero = new wxButton(this, 120, "0", wxPoint(10, 640), wxSize(320, 100));
	negate = new wxButton(this, 121, "+/-", wxPoint(340, 640), wxSize(100, 100));

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
	if (id == 104) calcOutputWindow->Clear();

	// TODO: Implement operators
	// TODO: Implement modifiers
}
