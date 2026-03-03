//Library
#include <iostream>
using namespace std;
//Deklarasi Global
    float  alas, tinggi;   

//implementasi prosedur dan fungsi
void input(){
    cout << "Masukkan alas: ";
    cin >> alas;
    cout << "Masukkan tinggi: ";
    cin >> tinggi;
}

float LuasSegitiga(){
    return 0.5 * alas * tinggi;
}

void output(){
    cout << "Hasilnya : " << LuasSegitiga() << endl;
}

int main()
{//start
    input();
    output();
    cout << "Hasil Luas Segitiga :" << LuasSegitiga() << endl;
}


