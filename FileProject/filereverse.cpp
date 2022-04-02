#include<iostream>
#include<fstream>
#include<string>
using namespace std;

string ters(string s) {

	char c = s[0];
	int i = 1;
	char* p,*q;
	p = &s[0];
	q = &s[0];
	
	while (*p!='\0')
	{
		p++;
	}
	p--;
	while (p>q)
	{//swapping 
		char c = *p;
		*p = *q;
		*q = c;
		p--;
		q++;

	}
	return s;
}





int main()
{
	setlocale(LC_ALL, "Turkish");

	ifstream girdi("deneme.txt");
	string s;
	ofstream cikti("cikti.txt");

	while (getline(girdi, s))
	{
	
		cout<<ters(s)<<endl;
		cikti << ters(s) << endl;

	}
	girdi.close(); 
		cikti.close();

}