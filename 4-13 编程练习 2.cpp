#include <iostream>
#include <string>
int main()
{
	using namespace std;
	string name;
	string dessert;

	cout << "Enter your name:\n";
	getline(cin, name);     
	cout << "Enter your favorite dessert:\n";
	getline(cin, dessert);
	cout << "I have some delicious " << dessert << " for you, " << name << ".\n";


	cin.get();
	cin.get();
	return 0;
}

//getline(cin, XXX)       cin.get()     cin.getline()      ����???????       ��81ҳ
//getline(cin, XXX)               �������з����س���������87ҳ��û���ֽ��޶����������롣     ���string��ʹ�ýϼѣ��� �е�ģ�����ƶ��Ƕ�
//cin.get(xxx,��Ŀ)               �������з����س�����������һ��Ҫ������ʱ�������ε���cin.get()�����ܿ���û��з���  ��������80ҳ��  �������ʹ�ýϼѣ����е�ģ�����ƶ��Ƕ�
//cin.getline(xxx,��Ŀ)          ��Ϊ������Ŀ�����Ա���̫�������롣     �������ʹ�ýϼѣ��� �е�ģ�����ƶ��Ƕ�



