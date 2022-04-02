#include<iostream>
#include<locale.h>

using namespace std;

int main()
{
	setlocale(LC_ALL, "Turkish");
	int x, y, z;

	cout << "lütfen 1. sayýyý giriniz"<<endl;
	cin >> x;
	cout << "lütfen 2. sayýyý giriniz" << endl;
	cin >> y;
	cout << "lütfen 3. sayýyý giriniz" << endl;
	cin >> z;
	
	
	
	/*  Yöntem 2*/
	// bu yöntem daha stabil olacaktýr :)
	int enbuyuk = x;
	if (y>enbuyuk)
	{
		enbuyuk = y;
	}
	if (z > enbuyuk)
	{
		enbuyuk = z;
	}
	int enkucuk=x;

	if (y < enkucuk)
	{
		enkucuk = y;
	}
	if (z < enkucuk)
	{
		enkucuk = z;
	}
	cout << "enbüyük: " << enbuyuk << endl;
	cout << "enkücük: " << enkucuk << endl;
	/*  Yöntem 2*/
	
			/* yöntem 1*/

	if (x > y&&x>z)//x'in en büyük olma durumu
	{
		cout << "en büyük" << x << endl;
		if (y<z)
		{
			cout << "en küçük: " << y<<endl;

		}
		else
		{
			cout << "en küçük: " << z << endl;
		}
	}
	if (y>z&&y>x)//y'in en büyük olma durumu
	{
		cout << "en büyük" << y << endl;
		if (x < z)
		{
			cout << "en küçük" << x << endl;

		}
		else
		{
			cout << "en küçük" << z << endl;
		}
	}
	if (z>x&&z>y)//z'in en büyük olma durumu
	{
		cout << "en büyük" << z << endl;
		if (y<x)
		{
			cout << "en küçük" << y << endl;

		}
		else
		{
			cout << "en küçük" << x << endl;
		}
	}

			/* yöntem 1*/


	return 0;

}