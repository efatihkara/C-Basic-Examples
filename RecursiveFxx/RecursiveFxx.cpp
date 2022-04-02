#include <iostream>
#include <math.h>
#include <locale.h>
using namespace std;


int recursive(int a, int b) {
    if (b == 0 || a == 0)
        return 0;
    if (b < 0)
        return recursive(0 - a, 0 - b);
    return a + recursive(a, b - 1);
}


int carpim(int a, int b) {
    int sonuc{};
    for (int i = 0; i < b; i++) {

        sonuc = sonuc + a;

    }
    return sonuc;
}


int main()
{

    setlocale(LC_ALL, "Turkish");
    cout << "oz yineli carpim fonksiyonu" << endl;
    cout << carpim(3, 4) << endl;
    cout << recursive(3, 4) << endl;
    cout << recursive(-5, -3) << endl;
    cout << recursive(5, -3) << endl;


}