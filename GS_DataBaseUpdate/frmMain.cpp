#include "frmMain.h"

using namespace GS_DataBaseUpdate;

[STAThreadAttribute]
int main(){
	// ��������� ���������� �������� Windows �� �������� �����-���� ��������� ����������
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);

	// �������� �������� ���� � ��� ������
	Application::Run(gcnew frmMain());
	return 0;
}
