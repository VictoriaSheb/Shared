#include "FormMain.h"
using namespace System;
using namespace System::Windows::Forms;
[STAThread]
void Main(array<String^>^ args)
{
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	FormsOfRepresentation::FormMain form;
	Application::Run(% form);
}