#include<iostream>
#include<locale.h>

using namespace std;

int boyut(const char* s)
{
	int b = 0;
	char c = s[0];

	while (c != '\10')
	{
		c = s[++b];
	}

	return b;
}



int main()
{
	/*
	* strcmp
	* shallow copy
	* bus error 10
	* deep copy 
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
	if (strcmp(c, s) == 0)
	{
		cout << "esitler" << endl;

	}
	else
	{
		cout << "değiller" << endl;
	}
	cout << boyut(s) << endl;
	cout << boyut(c) << endl;
	cout << strlen(c) << endl;
	// char* x=(const char*)malloc(sizeof(char)*7);
	// strcpy(x, s); //deep copy
	// cout << x << endl;



}