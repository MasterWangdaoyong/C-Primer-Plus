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

	lei * xing_xi = new lei;
	
	cout << "���������붫����ֱ��(CM)��";
	cin >> xing_xi->zhi_jing;    
	cout << "Ʒ�ƣ�";     
	cin >> xing_xi->name;          //���ַ�������������,�����ܼ������   ������getline(cin, a_1.name)�������� 
	cout << "����(KG)��";
	cin >> xing_xi->zong_liang;
	
	
	
	
	
	cout << "Ʒ�ƣ�" << xing_xi->name << "\nֱ����"<< xing_xi->zhi_jing << " CM\n������"<< xing_xi->zong_liang <<" KG"<< endl;

	delete  xing_xi;    //��������ɾ��   �ͷ��ڴ�
	cout <<"���ݴ洢��С��" << sizeof(xing_xi) << "�ֽ�(b)";
	cin.get();
	cin.get();
	return 0;
}
// ָ��* xing_xi Ҫ������ lei a_1 ռ���ڴ�С�ö�!!!     4-13 �����ϰ 7 �� 4-13 �����ϰ 8 ���