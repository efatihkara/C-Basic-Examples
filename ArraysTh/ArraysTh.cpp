#include<iostream>
#include<locale.h>

using namespace std;


int main()
{
	setlocale(LC_ALL, "Turkish");

	int a[3] = { 1,2,3 };
	int b[7] = { 9,5,1,2,3,6,7 };

	int aboyut = 3;int bboyut = 7;
	for (int i = 0; i < bboyut; i++)
	{
		bool esit = true;
		for (int j = 0; j < aboyut; j++)
		{
			if (a[j] != b[i + j])
			{
				esit=false;
				break;

			}
		}
		if (esit)
		{
			cout << "alt elemanı vardır ve " << i+1 << " den baslar" << endl;
		}
	}
	


}