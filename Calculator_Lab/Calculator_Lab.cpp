#include "Calculator_Lab.h"
#include <iostream>
#include "wx/wx.h"

Calculator::Calculator() : wxFrame(nullptr, wxID_ANY, "Jacob's Calculator", wxPoint(675, 100), wxSize(575, 800)) {
	// Loop and create all buttons using index for position
	binary = new wxButton(this, 101, "bin", wxPoint(10, 200), wxSize(100, 100));
	hexadecimal = new wxButton(this, 102, "hex", wxPoint(120, 200), wxSize(100, 100));
	decimal = new wxButton(this, 103, "dec", wxPoint(230, 200), wxSize(100, 100));
	clear = new wxButton(this, 104, "C", wxPoint(340, 200), wxSize(210, 100));
	numOne = new wxButton(this, 105, "1", wxPoint(10, 310), wxSize(100, 100));
	numTwo = new wxButton(this, 106, "2", wxPoint(120, 310), wxSize(100, 100));
	numThree = new wxButton(this, 107, "3", wxPoint(230, 310), wxSize(100, 100));
	plus = new wxButton(this, 108, "+", wxPoint(340, 310), wxSize(100, 100));
	minus = new wxButton(this, 109, "-", wxPoint(450, 310), wxSize(100, 100));
	numFour = new wxButton(this, 110, "4", wxPoint(10, 420), wxSize(100, 100));
	numFive = new wxButton(this, 111, "5", wxPoint(120, 420), wxSize(100, 100));
	numSix = new wxButton(this, 112, "6", wxPoint(230, 420), wxSize(100, 100));
	multiply = new wxButton(this, 113, "*", wxPoint(340, 420), wxSize(100, 100));
	divide = new wxButton(this, 112, "/", wxPoint(450, 420), wxSize(100, 100));
	numSeven = new wxButton(this, 113, "7", wxPoint(10, 530), wxSize(100, 100));
	numEight = new wxButton(this, 114, "8", wxPoint(120, 530), wxSize(100, 100));
	numNine = new wxButton(this, 115, "9", wxPoint(230, 530), wxSize(100, 100));
	numMod = new wxButton(this, 116, "%", wxPoint(340, 530), wxSize(100, 100));
	equals = new wxButton(this, 117, "=", wxPoint(450, 530), wxSize(100, 210));
	numZero = new wxButton(this, 118, "0", wxPoint(10, 640), wxSize(320, 100));
	negate = new wxButton(this, 119, "+/-", wxPoint(340, 640), wxSize(100, 100));

	calcOutputWindow = new wxTextCtrl(this, 120, "", wxPoint(10, 10), wxSize(540, 170));

	// TODO: Style buttons Font, Font-Size, Color
	// TODO: Style Output Window, Font, Font-Size, Color
}

Calculator::~Calculator() {
}
