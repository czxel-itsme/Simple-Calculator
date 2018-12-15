#include <iostream>

using namespace std;

int main()
{
    int menu = 0;
    int angka = 0;
    int angka2 = 0;
    int hasil = 0;

    cout << "---------------------------" << endl;
    cout << "    K A L K U L A T O R    " << endl;
    cout << "                           " << endl;
    cout << "   B y t e D e v C o d e   " << endl;
    cout << "---------------------------" << endl;
    cout << "1.Penjumlahan" << endl;
    cout << "2.Pengurangan" << endl;
    cout << "3.Perkalian" << endl;
    cout << "4.Pembagian" << endl;
    cout << "5.Modulus (Sisa Pembagian)" << endl;
    cout << "---------------------------" << endl;
    cout << "Pilih : ";
    cin >> menu;

    system("CLS");
    while (menu <= 5)
    {
    if (menu == 1)
    {
        cout << "Masukkan Angka Pertama : ";
        cin >> angka;
        cout << "Masukkan Angka Kedua : ";
        cin >> angka2;
        hasil = angka + angka2;
        cout << "----------------------" << endl;
        cout << "Hasil : " << hasil << endl;
        cout << "----------------------" << endl;
    }

    else if (menu == 2)
    {
        cout << "Masukkan Angka Pertama : ";
        cin >> angka;
        cout << "Masukkan Angka Kedua : ";
        cin >> angka2;
        hasil = angka - angka2;
        cout << "----------------------" << endl;
        cout << "Hasil : " << hasil << endl;
        cout << "----------------------" << endl;
    }

    else if (menu == 3)
    {
        cout << "Masukkan Angka Pertama : ";
        cin >> angka;
        cout << "Masukkan Angka Kedua : ";
        cin >> angka2;
        hasil = angka * angka2;
        cout << "----------------------" << endl;
        cout << "Hasil : " << hasil << endl;
        cout << "----------------------" << endl;
    }

    else if (menu == 4)
    {
        cout << "Masukkan Angka Pertama : ";
        cin >> angka;
        cout << "Masukkan Angka Kedua : ";
        cin >> angka2;
        hasil = angka / angka2;
        cout << "----------------------" << endl;
        cout << "Hasil : " << hasil << endl;
        cout << "----------------------" << endl;
    }

    else if (menu == 5)
    {
        cout << "Masukkan Angka Pertama : ";
        cin >> angka;
        cout << "Masukkan Angka Kedua : ";
        cin >> angka2;
        hasil = angka % angka2;
        cout << "----------------------" << endl;
        cout << "Hasil : " << hasil << endl;
        cout << "----------------------" << endl;
    }

    }
    return 0;
}
