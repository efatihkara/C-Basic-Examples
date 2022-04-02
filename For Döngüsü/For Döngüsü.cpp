#include<iostream>
#include<locale.h>


using namespace std;



int main()
{
	setlocale(LC_ALL, "Turkish");
	

	for (int i = 0; i < 10; i++)
	{
		cout << "merhaba" << endl;
		/*kural olarak bütün while döngüleri for bütün for döngüleri while olarak yazılabilir */
	}


}