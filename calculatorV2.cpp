#include <iostream>

using namespace std;

int main()
{

    char o;
    float num1, num2, jumlah;

    cout << "==========================" << endl;
    cout << "KALKULATOR by ByteDevCode" << endl;
    cout << "Pilihan : " << endl;
    cout << "1. Tambah (+)" << endl;
    cout << "2. Kurang (-)" << endl;
    cout << "3. Kali (-)" << endl;
    cout << "4. Bagi (/)" << endl;
    cout << "===========================" << endl;

    cout << "Masukkan Simbol : ";
    cin >> o;

    cout << endl;

    cout << "Masukkan Angka 1 : ";
    cin >> num1;
    cout << "Masukkan Angka 2 : ";
    cin >> num2;

    cout << endl;

    switch(o)
    {
        case '+' :
            cout << "Hasil " << num1 << " + " << num2 << " = " << num1 + num2;
            break;

        case '-' :
            cout << "Hasil " << num1 << " - " << num2 << " = " << num1 - num2;
            break;

        case '*' :
            cout << "Hasil " << num1 << " * " << num2 << " = " << num1 * num2;
            break;

        case '/' :
            cout << "Hasil " << num1 << " / " << num2 << " = " << num1 / num2;
            break;

        default :
        break;
    }

    cout << endl;

    return 0;
}
