#include "MyForm.h"
#include "Zavd1.h"
#include "Zavd2.h"
#include "Zavd3.h"

using namespace System;
using namespace System::Windows::Forms;
void main(array<String^>^ args)
{
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	Project5::MyForm form;
	Application::Run(% form);
}

