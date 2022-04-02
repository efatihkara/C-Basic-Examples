#include<iostream>
#include<locale.h>

using namespace std;



int main(){

	setlocale(LC_ALL, "Turkish");

	int a[7] = {5,6,-7,9,8,3,2};
	bool ck = false;
	int as1 = a[0];
	int as2 = a[0];
	int as3 = a[0];
	
	for (int j = 0; j < 7; j++)
	{

		if (a[j]>0)
		{
			ck = true;
		}
		else
		{
			ck = false;
		}


	}
	if(ck==true)
	{
		for (int i = 1; i < 7; i++)
		{
			if (as1 < a[i])
			{
				as3 = as2;
				as2 = as1;
				as1 = a[i];
			}
			else if (as2 < a[i])
			{
				as1 = as2;
				as2 = a[i];
				
			}
			else if (as3 < a[i])
			{
				as3 = a[i];
			}

		}
	}
	else
	{
		cout << "Dizi içerisinde negatif sayı var" << endl;
	}
	cout <<"En büyük  3 sayı" <<as1<<"," << as2 <<","  << as3 << "," << endl;
	cout << "3 sayının toplamı : " << as1 + as2 + as3;
}