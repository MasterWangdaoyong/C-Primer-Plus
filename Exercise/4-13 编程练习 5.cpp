#include <iostream>
#include <string>

using namespace std;


struct CandyBar
{
	string ping_pai;
	float zong_liang;
	int long_liang;
	};

int main()
{
	CandyBar snack = {"Mocha Munch", 2.3, 350};
	cout << "Ʒ��: "<<snack.ping_pai << endl;
	cout << "����: " << snack.zong_liang << endl;
	cout << "����: " << snack.long_liang << endl;

	cin.get();
	cin.get();
	return 0;
}