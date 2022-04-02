

#include <iostream>
#include<locale.h>

using namespace std;
int main()
{
    setlocale(LC_ALL, "Turkish");

    cout << "5 adet sayı giriniz: " << endl;
    //int a[4];
    int* p;
    p = (int*)malloc(sizeof(int) * 5);//void*
    //ramdeki 5 sayıya erişim yapmak için 
    /*
    * 5 integer için ramde arka arkadaya duruyorrrr
    */
    for (int i = 0; i < 5; i++)
    {
        cin >> *(p + i);//pointer aritmetiği :)
        //cin >> p[i];
    }
    for (int i = 0; i < 5; i++)
    {
        cout << *(p + i);
        //cout<< p[i];
        cout << ",";
    }
}

