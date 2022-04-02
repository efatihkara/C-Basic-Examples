#include<iostream>
#include<locale.h>



using namespace std;


int main()
{

	setlocale(LC_ALL, "Turkish");


	int a;
	a = 10;
	cout << a << endl;
	int b = a << 2; //left shift ile 10 luk tabanda 10 değerine sondan 2 tane sıfır ekledi
	// ve 101000 oldu
	cout << b << endl;
	/* 
Shift işlemini kullanırken >> bu tarafa olduğunda sağdan istenilen değer kadar sil
<< bu tarafa olduğunda sağdan istenilen sayı kadar sıfır ekle


	*/

	int c = b >> 3;//right shift 
	//burada ise 10 luk tabanda olan 101000 olan değerimizden sondan 3 tane sayı silerek
	//101 değerini 10 luk tabanda bulduk 
	cout << c << endl;

	// ^ XOR=> Excluvise or anlamı her iki değer birbinden farklı ise true eğer aynı ise false 
	//  & herhangi iki sayının ondalık tabanda çevirip ona göre dizilmesi
	int x = 22 ^ 13;
	cout << x << endl;
	x = 22 & 13;
	cout << x << endl;
	x = 22 | 13;
	cout << x << endl;

	return(0);
}