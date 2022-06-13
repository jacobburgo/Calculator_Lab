#pragma once

#include "wx/wx.h"

class Calculator : public wxFrame {
public:
	Calculator();
	~Calculator();

private:
	// Threw error when implementing as wxButton* numOne, numTwo, numThree, numEtc;
	// Severity	Code	Description	Project	File	Line	Suppression State
	// Error	C2679	binary '=' : no operator found which takes a right - hand operand of type 'wxButton *' (or there is no acceptable conversion)	Calculator_Lab	C : \Users\Jacob Burgo\Desktop\Programing Classes\SWE\Calculator_Lab\Calculator_Lab\Calculator_Lab.cpp	8

	// Buttons: 1, 2, 3, 4, 5, 6, 7, 8, 9, 0, =, +, -, /, *, %, neg, bin, hex, decimal
	wxButton* numOne;
	wxButton* numTwo;
	wxButton* numThree;
	wxButton* numFour;
	wxButton* numFive;
	wxButton* numSix;
	wxButton* numSeven;
	wxButton* numEight;
	wxButton* numNine;
	wxButton* numZero;
	wxButton* clear;
	wxButton* equals;
	wxButton* plus;
	wxButton* minus;
	wxButton* divide;
	wxButton* multiply;
	wxButton* numMod;
	wxButton* negate;
	wxButton* binary;
	wxButton* hexadecimal;
	wxButton* decimal;
	wxTextCtrl* calcOutputWindow;

public:
	// Function declarations here
};
