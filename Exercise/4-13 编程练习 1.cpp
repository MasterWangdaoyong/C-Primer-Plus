#include <iostream> 
#include <string>
int main()
{
	using namespace std;
	string first_name; //= "Betty Sue";
	string last_name; //= "Yewe";
	char grade;
	int age;
	cout << "What is your first name? " ;
	getline(cin,first_name);
	cout << "What is your last name?  " ;
	getline(cin, last_name);
	cout << "What letter grade do you deserve? ";
	cin >> grade;
	cout << "What is your age? ";
	cin >> age;
	cout << "Name: " << last_name << ", " << first_name << endl;
	cout << "Grade: " << char(int(grade) + 1) << endl;    // ����ת�� intת��Ϊchar    �ڴ��ַ��ӣ���    �е�ģ�����ƶ��Ƕ�
	cout << "Age: " << age << endl;

	cin.get();
	cin.get();
	return 0;
}