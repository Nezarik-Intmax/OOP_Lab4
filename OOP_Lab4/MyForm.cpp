#include "MyForm.h"
#include "MyContainer.h"
#include "CCircle.h"

using namespace System;
using namespace System::Windows::Forms;

[STAThread]
void main(array<String^>^ arg){
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);

	OOPLab4::MyForm form;
	Application::Run(% form);
}