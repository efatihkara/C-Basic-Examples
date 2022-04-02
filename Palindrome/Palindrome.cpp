#include<iostream>


using namespace std;

int main()
{
/*

bir kelimenin okunuşu ile tersten okunuşu aynıysa bu kelimeye
palindrom ismi verilir 
bu kodda ise verilen kelimenin palindrom olup olmadığını bulacağız.

*/
	setlocale(LC_ALL, "Turkish");
	cout << "lütfen bir kelime giriniz" << endl;
	char c[100];
	cin >> c;
	const char* p, * q;
	p = c;
	q = c;

	while (*q!='\0'){
		q++;//dizgi sonu 

	}
	q--;//dizginin son elemanı
	bool palindrome = true;
	while (q>p){
		if (*p != *q)
		{
			palindrome = false;

		}
		p++;
		q--;
	}
	if (palindrome)
	{
		cout << "girilen dizgi bir palindromdur" << endl;

	}
	else
	{
		cout << "girilen dizgi palindrom değildir" << endl;

	}
}