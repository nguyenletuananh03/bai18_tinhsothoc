#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;
int main()
{
	//https://vnexpress.net/net/bon-bai-toan-gap-doi-co-truc-giac-danh-lua-tu-duy-4604373.html
	cout << "tinh so thoc tren ban co vua\n";
	int o;
	double tongthoc = 0;
	cout << "tinh so thuoc tren ban:\n";
	cout << "so o: "; cin >> o; cout << endl;
	cout.imbue(locale("en_US.UTS-8"));
	if (0 > 64)
	{
		cout << "tren ban chi co 64o,vui long nhap so <=64\n";
		system("pause");
		return 0;
	}
	for (int i = 0; i < o; i++)
	{
		tongthoc = tongthoc + pow(2, i);
		cout << "o thu" << i + 1 << "co \t\t" << fixed << setprecision(0) << pow(2, i) << "hat thoc\n";
	}
	cout << "tong so thoc:\t " << fixed << setprecision(0) << tongthoc << "hat thoc\n";
	return 0;
}