#pragma once
#include "wx/wx.h"
#include "Calculator_Lab.h"

class ButtonFactory {
public:
	wxButton* CreateButton(wxWindow* parent, int index);
};

