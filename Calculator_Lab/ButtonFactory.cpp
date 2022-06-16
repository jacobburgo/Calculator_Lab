#include "ButtonFactory.h"
#include "wx/wx.h"

enum buttonIds {
	first_button_id = wxID_LAST + 1,
	other_button_ids
};

wxButton* ButtonFactory::CreateButtons(wxWindow* parent) {
	wxButton* bin = new wxButton(parent, first_button_id, "bin", wxPoint(10, 200), wxSize(100, 100));
	wxButton* hex = new wxButton(parent, other_button_ids, "hex", wxPoint(120, 200), wxSize(100, 100));
	wxButton* dec = new wxButton(parent, other_button_ids, "dec", wxPoint(230, 200), wxSize(100, 100));
	wxButton* clear = new wxButton(parent, other_button_ids, "C", wxPoint(340, 200), wxSize(210, 100));
	wxButton* one = new wxButton(parent, other_button_ids, "1", wxPoint(10, 310), wxSize(100, 100));
	wxButton* two = new wxButton(parent, other_button_ids, "2", wxPoint(120, 310), wxSize(100, 100));
	wxButton* three = new wxButton(parent, other_button_ids, "3", wxPoint(230, 310), wxSize(100, 100));
	wxButton* plus = new wxButton(parent, other_button_ids, "+", wxPoint(340, 310), wxSize(100, 100));
	wxButton* minus = new wxButton(parent, other_button_ids, "-", wxPoint(450, 310), wxSize(100, 100));
	wxButton* four = new wxButton(parent, other_button_ids, "4", wxPoint(10, 420), wxSize(100, 100));
	wxButton* five = new wxButton(parent, other_button_ids, "5", wxPoint(120, 420), wxSize(100, 100));
	wxButton* six = new wxButton(parent, other_button_ids, "6", wxPoint(230, 420), wxSize(100, 100));
	wxButton* multiply = new wxButton(parent, other_button_ids, "*", wxPoint(340, 420), wxSize(100, 100));
	wxButton* divide = new wxButton(parent, other_button_ids, "/", wxPoint(450, 420), wxSize(100, 100));
	wxButton* seven = new wxButton(parent, other_button_ids, "7", wxPoint(10, 530), wxSize(100, 100));
	wxButton* eight = new wxButton(parent, other_button_ids, "8", wxPoint(120, 530), wxSize(100, 100));
	wxButton* nine = new wxButton(parent, other_button_ids, "9", wxPoint(230, 530), wxSize(100, 100));
	wxButton* numMod = new wxButton(parent, other_button_ids, "%", wxPoint(340, 530), wxSize(100, 100));
	wxButton* equals = new wxButton(parent, other_button_ids, "=", wxPoint(450, 530), wxSize(100, 210));
	wxButton* zero = new wxButton(parent, other_button_ids, "0", wxPoint(10, 640), wxSize(320, 100));
	wxButton* negate = new wxButton(parent, other_button_ids, "+/-", wxPoint(340, 640), wxSize(100, 100));
	wxButton* button_array[21] = { bin, hex, dec, clear, one, two, three, plus, minus, four, five, six, multiply, divide, seven, eight, nine, numMod, equals, zero, negate };

	return *button_array;
}
