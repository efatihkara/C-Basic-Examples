#include<iostream>
#include<math.h>
#include<locale.h>


using namespace std;


int main()
{
	setlocale(LC_ALL, "Turkish");


	int a[8] = { 5,7,2,8,9,1,4,3 };
	int toplam = 0;
	int carpım = 1;
	int tektoplam = 0;
	int ttsayisi = 0;
	int eb = a[0], ek = a[0];
	for (int i = 0; i < 8; i++)
	{
		toplam += a[i];
		if (a[i]%2==1)
		{
			tektoplam += a[i];
			ttsayisi++;
		}
		if (a[i] % 2 == 0)
		{
			if (eb < a[i])
			{
				eb = a[i];
			}
			if (ek > a[i])
			{
				eb = a[i];
			}
		}
		carpım *= a[i];
	}
	cout << "ortalama: " << (float)toplam / 8 << endl;
	cout << "geometrik ortalama: "<<pow(carpım,(float)1/8) << endl;
	cout << "tek sayıların ortalaması : " << (float)tektoplam/ttsayisi<<endl;
	cout << "Eb ile ek sayının ortalaması: " << (float)(eb + ek) / 2 << endl;

}