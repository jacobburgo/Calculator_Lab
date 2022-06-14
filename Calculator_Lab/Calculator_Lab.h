#pragma once

#include "wx/wx.h"

class Calculator : public wxFrame {
public: // Lifecycle Methods
	Calculator();
	~Calculator();

private: // wxWidget vars
	// Threw error when implementing as wxButton* one, two, three, etc;
	// Error	C2679	binary '=' : no operator found which takes a right - hand operand of type 'wxButton *' (or there is no acceptable conversion)	Calculator_Lab	C : \Users\Jacob Burgo\Desktop\Programing Classes\SWE\Calculator_Lab\Calculator_Lab\Calculator_Lab.cpp	8

	// Buttons: 1, 2, 3, 4, 5, 6, 7, 8, 9, 0, =, +, -, /, *, %, neg, bin, hex, decimal
	wxButton* one;
	wxButton* two;
	wxButton* three;
	wxButton* four;
	wxButton* five;
	wxButton* six;
	wxButton* seven;
	wxButton* eight;
	wxButton* nine;
	wxButton* zero;
	wxButton* clear;
	wxButton* equals;
	wxButton* plus;
	wxButton* minus;
	wxButton* divide;
	wxButton* multiply;
	wxButton* numMod;
	wxButton* negate;
	wxButton* bin;
	wxButton* hex;
	wxButton* dec;
	wxTextCtrl* calcOutputWindow;

public: // Event handling
	wxDECLARE_EVENT_TABLE();

	void OnButtonClick(wxCommandEvent& evt);
};
