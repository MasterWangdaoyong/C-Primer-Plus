#include <iostream>
#include <array>
int main()
{
	using namespace std;

	array<float, 3> run_40;


	cout << "����������40���ܵĳɼ�(��λ��)\n";
	cout << "��һ��40���ܵĳɼ��� ";
	cin >> run_40[0];
	cout << "�ڶ���40���ܵĳɼ��� ";
	cin >> run_40[1];
	cout << "������40���ܵĳɼ��� ";
	cin >> run_40[2];
	cout << endl;

	cout << "�������εĳɼ���ƽ���ɼ�Ϊ�� " << (run_40[0] + run_40[1] +run_40[2])/3 << " �롣\n";

	cout << "������ռ���ڴ��С�� " << sizeof(run_40) << " �ֽڡ�";

	cin.get();
	cin.get();
	return 0;
}