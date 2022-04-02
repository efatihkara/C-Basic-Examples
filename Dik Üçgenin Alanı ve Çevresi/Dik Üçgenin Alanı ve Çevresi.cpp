#include <iostream>
#include<math.h>

using namespace std;

int main()
{
	setlocale(LC_ALL, "Turkish");

	/* Dik üçgen hesaplama alanı ve çevresi */
	int ak, bk, ck;
	cout << "a kenarını giriniz: " << endl;
	cin >> ak;
	cout << "b kenarını giriniz: " << endl;
	cin >> bk;
	ck = sqrt(ak * ak + bk * bk);
	cout << "h= " << ck << endl;
	cout << "cevresi= " << ak + bk + ck << endl;
	cout << "alanı=" << float(ak * bk / 2) << endl;
	/* Dik üçgen hesaplama alanı ve çevresi */
	return 0;

}

