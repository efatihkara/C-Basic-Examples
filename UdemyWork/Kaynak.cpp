#include<iostream>
#include<locale.h>

using namespace std;

int main()
{
	setlocale(LC_ALL, "Turkish");
	int x, y, z;

	cout << "l�tfen 1. say�y� giriniz"<<endl;
	cin >> x;
	cout << "l�tfen 2. say�y� giriniz" << endl;
	cin >> y;
	cout << "l�tfen 3. say�y� giriniz" << endl;
	cin >> z;
	
	
	
	/*  Y�ntem 2*/
	// bu y�ntem daha stabil olacakt�r :)
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
	cout << "enb�y�k: " << enbuyuk << endl;
	cout << "enk�c�k: " << enkucuk << endl;
	/*  Y�ntem 2*/
	
			/* y�ntem 1*/

	if (x > y&&x>z)//x'in en b�y�k olma durumu
	{
		cout << "en b�y�k" << x << endl;
		if (y<z)
		{
			cout << "en k���k: " << y<<endl;

		}
		else
		{
			cout << "en k���k: " << z << endl;
		}
	}
	if (y>z&&y>x)//y'in en b�y�k olma durumu
	{
		cout << "en b�y�k" << y << endl;
		if (x < z)
		{
			cout << "en k���k" << x << endl;

		}
		else
		{
			cout << "en k���k" << z << endl;
		}
	}
	if (z>x&&z>y)//z'in en b�y�k olma durumu
	{
		cout << "en b�y�k" << z << endl;
		if (y<x)
		{
			cout << "en k���k" << y << endl;

		}
		else
		{
			cout << "en k���k" << x << endl;
		}
	}

			/* y�ntem 1*/


	return 0;

}