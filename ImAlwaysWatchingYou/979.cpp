#include "979.h"

//using namespace std;
using namespace System;
using namespace System::Windows::Forms;

[STAThreadAttribute]
int main(array <String^>^ args) {
	Application::SetCompatibleTextRenderingDefault(false);
	Application::EnableVisualStyles();
	ImAlwaysWatchingYou::My979 form;
	Application::Run(% form);

	return 0;
}
