#include <iostream>
#include <string>

using namespace std;

struct lei
{
	string name;
	float zhi_jing;
	float zong_liang;
};

int main()
{
	cout << "��Һã��ҵ����ֽУ�����ƽ\n�������Ҽ�¼��С�Թ�˾���ơ�ֱ��������\n";
	
	lei a_1;  //����һ�����ƾ�OK��  �����Ϳ����ˣ�����
		
	cout << "������Ʒ�ƣ�";
	cin >> a_1.name;   //���ַ�������������,�����ܼ������   ������getline(cin, a_1.name)��������
	cout << "������ֱ��(CM)��";
	cin >> a_1.zhi_jing;
	cout << "����(KG)��";
	cin >> a_1.zong_liang;
	
	
	
	
	
	cout << "Ʒ�ƣ�" << a_1.name << "\nֱ����"<< a_1.zhi_jing << " CM\n������"<< a_1.zong_liang <<" KG"<< endl;

	cout <<"���ݴ洢��С��" << sizeof(a_1) << "�ֽ�(b)";
	cin.get();
	cin.get();
	return 0;
}