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
	CandyBar snack[3] = {
		{"Mocha Munch", 2.3, 350},
		{"����", 400.5, 6000},
		{"�ʵ�", 543210.005, 12345678.12}
	};
	cout << "Ʒ��1: "<<snack[0].ping_pai << endl;
	cout << "����: " << snack[0].zong_liang << endl;
	cout << "����: " << snack[0].long_liang << endl << endl;

	cout << "Ʒ��2: "<<snack[1].ping_pai << endl;
	cout << "����: " << snack[1].zong_liang << endl;
	cout << "����: " << snack[1].long_liang << endl << endl;

	cout << "Ʒ��3: "<<snack[2].ping_pai << endl;
	cout << "����: " << snack[2].zong_liang << endl;
	cout << "����: " << snack[2].long_liang << endl << endl;

	cin.get();
	cin.get();
	return 0;
}