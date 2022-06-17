#include "ButtonFactory.h"
#include "wx/wx.h"
#include "Calculator_Lab.h"

enum Buttons {
	BIN = 0,
	HEX,
	DEC,
	C,
	ONE,
	TWO,
	THREE,
	PLUS,
	MINUS,
	FOUR,
	FIVE,
	SIX,
	MULTIPLY,
	DIVIDE,
	SEVEN,
	EIGHT,
	NINE,
	MOD,
	EQUALS,
	ZERO,
	NEGATE
};

wxButton* ButtonFactory::CreateButton(wxWindow* parent, int index) {
	switch (index) {
	case 0:
		return new wxButton(parent, BIN, "bin", wxPoint(10, 200), wxSize(100, 100));
	case 1:
		return new wxButton(parent, HEX, "hex", wxPoint(120, 200), wxSize(100, 100));
	case 2:
		return new wxButton(parent, DEC, "dec", wxPoint(230, 200), wxSize(100, 100));
	case 3:
		return new wxButton(parent, C, "C", wxPoint(340, 200), wxSize(210, 100));
	case 4:
		return new wxButton(parent, ONE, "1", wxPoint(10, 310), wxSize(100, 100));
	case 5:
		return new wxButton(parent, TWO, "2", wxPoint(120, 310), wxSize(100, 100));
	case 6:
		return new wxButton(parent, THREE, "3", wxPoint(230, 310), wxSize(100, 100));
	case 7:
		return new wxButton(parent, PLUS, "+", wxPoint(340, 310), wxSize(100, 100));
	case 8:
		return new wxButton(parent, MINUS, "-", wxPoint(450, 310), wxSize(100, 100));
	case 9:
		return new wxButton(parent, FOUR, "4", wxPoint(10, 420), wxSize(100, 100));
	case 10:
		return new wxButton(parent, FIVE, "5", wxPoint(120, 420), wxSize(100, 100));
	case 11:
		return new wxButton(parent, SIX, "6", wxPoint(230, 420), wxSize(100, 100));
	case 12:
		return new wxButton(parent, MULTIPLY, "*", wxPoint(340, 420), wxSize(100, 100));
	case 13:
		return new wxButton(parent, DIVIDE, "/", wxPoint(450, 420), wxSize(100, 100));
	case 14:
		return new wxButton(parent, SEVEN, "7", wxPoint(10, 530), wxSize(100, 100));
	case 15:
		return new wxButton(parent, EIGHT, "8", wxPoint(120, 530), wxSize(100, 100));
	case 16:
		return new wxButton(parent, NINE, "9", wxPoint(230, 530), wxSize(100, 100));
	case 17:
		return new wxButton(parent, MOD, "%", wxPoint(340, 530), wxSize(100, 100));
	case 18:
		return new wxButton(parent, EQUALS, "=", wxPoint(450, 530), wxSize(100, 210));
	case 19:
		return new wxButton(parent, ZERO, "0", wxPoint(10, 640), wxSize(320, 100));
	case 20:
		return new wxButton(parent, NEGATE, "+/-", wxPoint(340, 640), wxSize(100, 100));
	default:
		return new wxButton();
	}
}
