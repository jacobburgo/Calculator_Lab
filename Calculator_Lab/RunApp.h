#pragma once

#include "wx/wx.h"
#include "Calculator_Lab.h"

class RunApp : public wxApp
{
public:
	RunApp();
	~RunApp();

private:
	Calculator* calculator = nullptr;

public:
	virtual bool OnInit();
};

