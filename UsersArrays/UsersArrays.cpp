#include<iostream>
#include<locale.h>


using namespace std;


int main()
{
	setlocale(LC_ALL, "Turkish");
	int n;
	cout << "Dizi için bir sayı giriniz: " << endl;
	
	int a[n];
	int toplam = 0;
	
	for (int i = 0; i <n; i++){
		cin >> a[i];
	}
	for (int i = 0; i < n; i++){
		int g;
		cin >> g;
		toplam += g;
	}
	cout << "Toplam " << toplam;





	return 0;

}