#include<iostream>
#include<locale.h>


using namespace std;



int main()
{
	setlocale(LC_ALL, "Turkish");

	int a;
	a = 1;
	while (a<10)
	{
		cout << "Merhaba" << endl;
		a++;
		//9 defa yazması :)
	}

}