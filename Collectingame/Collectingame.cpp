#include<iostream>
#include<locale.h>


using namespace std;


int main()
{
	setlocale(LC_ALL, "Turkish");
	int a[5];
	cout << "lütfen 5 sayı giriniz: " << endl;
	for (int i = 0; i <5; i++)
	{
		cin >> a[i];

	}
	int eb = a[0], ek = a[0]; int toplam = a[0];
	for (int i = 1; i < 5; i++)
	{
		toplam += a[i];
		if (eb < a[i])
		{
			eb = a[i];
		}
		if (ek > a[i])
		{
			ek = a[i];
		}
	}
	cout << "maks: " << toplam - ek << endl;
	cout << "min: " << toplam - eb << endl;
}