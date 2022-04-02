#include <iostream>
#include<math.h>

using namespace std;

int main()
{
	/*Yol Hız problemleri*/
	int x, v;
	setlocale(LC_ALL, "Turkish");
	cout << "Mesafeyi giriniz : " << endl;
	cin >> x;
	cout << "Hızını giriniz : " << endl;
	cin >> v;
	
	cout << "Süre : " <<x/v << " saatir" << endl;
	
	int saat = x / v;
	float dakikakısmı = (float)x / v - (int)x / v;
	int dakika = dakikakısmı * 60;
	cout <<  dakika << " dakikadır "<<endl;

	return 0;

}

