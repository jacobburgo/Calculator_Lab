#include "RunApp.h"

wxIMPLEMENT_APP(RunApp);

RunApp::RunApp() {
}

RunApp::~RunApp() {
}

bool RunApp::OnInit() {
	calculator = new Calculator();
	calculator->Show();

	return true;
}
