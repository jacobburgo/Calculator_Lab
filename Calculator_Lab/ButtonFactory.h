#pragma once
#include "wx/wx.h"

class ButtonFactory {
public:
	wxButton* CreateButton(wxWindow* parent, int index);
};

