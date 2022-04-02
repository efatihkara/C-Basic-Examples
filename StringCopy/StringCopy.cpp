#include<iostream>
#include<locale.h>

using namespace std;

int main()
{
	/*
	* strcmp
	* shallow copy 
	* bus error 10
	* 
	*/
	setlocale(LC_ALL, "Turkish");

	const char* s = "kara";
	cout << s << endl;
	cout << s[1] << endl;
	const char c[5] = "kara";
	char a[5];
	a[0] = 'e';
	a[1] = 'f';
	a[2] = 'k';
	cout << c << endl;
	cout << a << endl;
	if(strcmp(c,s)==0)
	{
		cout << "esitler" << endl;

	}
	else
	{
		cout << "değiller" << endl;
	}

}