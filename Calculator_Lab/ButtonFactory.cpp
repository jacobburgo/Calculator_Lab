#include "ButtonFactory.h"
#include "wx/wx.h"

enum buttonIds {
	first_button_id = wxID_LAST + 1,
	other_button_ids
};

wxButton* ButtonFactory::CreateButton(wxWindow* parent, int index) {
	switch (index) {
	case 0:
		return new wxButton(parent, first_button_id, "bin", wxPoint(10, 200), wxSize(100, 100));
	case 1:
		return new wxButton(parent, other_button_ids, "hex", wxPoint(120, 200), wxSize(100, 100));
	case 2:
		return new wxButton(parent, other_button_ids, "dec", wxPoint(230, 200), wxSize(100, 100));
	case 3:
		return new wxButton(parent, other_button_ids, "C", wxPoint(340, 200), wxSize(210, 100));
	case 4:
		return new wxButton(parent, other_button_ids, "1", wxPoint(10, 310), wxSize(100, 100));
	case 5:
		return new wxButton(parent, other_button_ids, "2", wxPoint(120, 310), wxSize(100, 100));
	case 6:
		return new wxButton(parent, other_button_ids, "3", wxPoint(230, 310), wxSize(100, 100));
	case 7:
		return new wxButton(parent, other_button_ids, "+", wxPoint(340, 310), wxSize(100, 100));
	case 8:
		return new wxButton(parent, other_button_ids, "-", wxPoint(450, 310), wxSize(100, 100));
	case 9:
		return new wxButton(parent, other_button_ids, "4", wxPoint(10, 420), wxSize(100, 100));
	case 10:
		return new wxButton(parent, other_button_ids, "5", wxPoint(120, 420), wxSize(100, 100));
	case 11:
		return new wxButton(parent, other_button_ids, "6", wxPoint(230, 420), wxSize(100, 100));
	case 12:
		return new wxButton(parent, other_button_ids, "*", wxPoint(340, 420), wxSize(100, 100));
	case 13:
		return new wxButton(parent, other_button_ids, "/", wxPoint(450, 420), wxSize(100, 100));
	case 14:
		return new wxButton(parent, other_button_ids, "7", wxPoint(10, 530), wxSize(100, 100));
	case 15:
		return new wxButton(parent, other_button_ids, "8", wxPoint(120, 530), wxSize(100, 100));
	case 16:
		return new wxButton(parent, other_button_ids, "9", wxPoint(230, 530), wxSize(100, 100));
	case 17:
		return new wxButton(parent, other_button_ids, "%", wxPoint(340, 530), wxSize(100, 100));
	case 18:
		return new wxButton(parent, other_button_ids, "=", wxPoint(450, 530), wxSize(100, 210));
	case 19:
		return new wxButton(parent, other_button_ids, "0", wxPoint(10, 640), wxSize(320, 100));
	case 20:
		return new wxButton(parent, other_button_ids, "+/-", wxPoint(340, 640), wxSize(100, 100));
	default:
		return new wxButton();
	}
}
