#pragma comment(linker, "/subsystem:windows /ENTRY:mainCRTStartup")
#include "MainForm.h"

using namespace System;
using namespace System::Windows::Forms;
using namespace std;

int main() {
	Application::EnableVisualStyles();
	OOPFirst::MainForm form;
	Application::Run(% form);
}

