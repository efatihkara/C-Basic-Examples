#include<iostream>
#include<math.h>
#include<locale.h>

using namespace std;

int main()
{
	int a, b, c;
	
	setlocale(LC_ALL, "Turkish");
	cout << "Dik üçgenin kenarlarını giriniz: " << endl;
	
	cout << "1.Kenarı giriniz: "; cin >> a; cout << endl;
	cout << "2.Kenarı giriniz: "; cin >> b; cout << endl;
	cout << "3.Kenarı giriniz: "; cin >> c; cout << endl;
	
	if (pow(a, 2) + pow(b, 2) == pow(c, 2)|| pow(a, 2) + pow(c, 2) == pow(b, 2) || pow(b, 2) + pow(c, 2) == pow(a, 2))
	{
		cout << "Dik üçgendir" << endl;

	}
	else
	{
		cout << "Dik üçgen değildir" << endl;

	}
	
	
	return 0;

}