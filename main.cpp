#include <iostream>

/*
    Program BMI
    Ket : Program menentukan kategori BMI berdasarkan berat badan dan tinggi
    By  : Yudha Rizqia Grafer
    Tgl : 19 Oktober 2022

*/

using namespace std;

int main()
{
    //Kamus
    int b;
    float t, bmi;

    //Algoritma
    cout << "Program menghitung BMI index" << endl;
    cout << "============================" << endl;
    cout << "Berat Badan Anda (kg) : ";
    cin >> b;
    cout << "Tinggi Badan Anda (m) : ";
    cin >> t;
    bmi = b / ( t * t );
    cout << "Nilai BMI anda : " << bmi << endl;
    if ( ( bmi > 0 ) && ( bmi < 18.5 ) )
    {
        cout << "Anda Termasuk Kategori : Kurus";
    }
    else if ( ( bmi >= 18.5 ) && ( bmi < 25 ) )
    {
        cout << "Anda Termasuk Kategori : Normal atau Ideal" << endl;
    }
    else if ( ( bmi >= 25 ) && ( bmi < 30 ) )
    {
        cout << "Anda Termasuk Kategori : Kelebihan Berat Badan" << endl;
    }
    else if ( bmi >=30 )
    {
        cout << "Anda Termasuk Kategori : Kegemukan" << endl;
    }
    else
    {
        cout << "Inputan Anda Salah" << endl;
    }
    return 0;
}
