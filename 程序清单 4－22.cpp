#include <iostream>    // 1��ͷ�ļ�����
#include <cstring>
using namespace std;       //   2�������⡢�ڲ�����ʹ��STD�ռ�����
char * getname(void);        //   3���ⲿ��������������Ϊ�ú���void��ֵ
int main()     //
{
	char * name;   //   8������ָ��
	
	name = getname();    //  9����һ�ε��� char * getname(void)������name���ڴ��ַ��*name��name�ڴ��ַ��Ķ�����char���飩
	cout << name << " at " << (int *) name << endl;      //  ��int*�� ���ܣ� �� &name��  (�������ڴ��ַ����һ��)��   102ҳ���ǲ���ǿ������ת������������
	delete [] name;    //   10�����ָ�룬�ͷ��ڴ�

	name = getname();   // 10���ڶ��ε��� char * getname(void)������
	cout << name << " at " << (int *) name << endl;           
	delete [] name;


	cin.get();
	cin.get();
	return 0;
}

char * getname()    //      3�������ŷ���voidֵ  �ڴ��ַ
{
	char temp[80];       //    3.1������char(�ַ��������80���ַ�) ����temp�� �磺temp[0], temp[1], temp[2]......temp[......]={"a,b,c,d,e......"}
	cout << "Enter last name: ";
	cin.getline(temp, 80);      // 3.2����ԭ�����嵥4��22  �޸�Ϊ�������룺�����ո񣬵ȵ��ַ���ֻҪ��80���ַ��ڶ��������롣cin.getline() �������78ҳ
	char * pn = new char[strlen(temp) + 1];  // 3.3������char��ָ�� pn����̬�ڴ棬��ַ���ڴ泤����ԭ80�����ַ���ϼ���1 char��λ��strlen���ܼ�85ҳ
	strcpy(pn, temp);  //  3.4���ڴ渴�ơ�ճ������temp��pn

	return pn;        //  3.5pnΪvoidֵ��pn���ڴ��ַ
}