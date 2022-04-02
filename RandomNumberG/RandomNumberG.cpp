#include<iostream>
#include<math.h>
#include<locale.h>
#include<stdlib.h>


using namespace std;

int main()
{
	int rg,rgs,rgf;
	srand(time(NULL));//zaman'a göre random sayı tutma
	rg = rand() % 6 + 1;//1 ile 6 arasında sınırlama vermek 
	cout << rg<<endl;
	rgs = rand() % 2; //yazı tura için
	cout << rgs<<endl;
	rgf = rand()%300;
	cout << rgf<<endl;




}