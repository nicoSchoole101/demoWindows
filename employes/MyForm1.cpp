#include "MyForm1.h"

using namespace System;
using namespace System::Windows::Forms;

[STAThread]
int main()
{
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);

	employes::MyForm form;
	Application::Run(%form);
	return 0;
}