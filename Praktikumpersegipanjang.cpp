//Library
#include <iostream>
using namespace std;
//Deklarasi Global
    float  p, l;   

//implementasi prosedur dan fungsi
void input(){
    cout << "Masukkan Panjang: ";
    cin >> p;
    cout << "Masukkan Lebar: ";
    cin >> l;
}

float LuasPersegi(){
    return p*l;
}

int Jumlah(int a, int b, int c){
    return a + b + c;
}

void output(){
    cout << "Hasilnya : " << LuasPersegi() << endl;
}

int main()
{//start
    input();
    output();
    cout << "Hasil Penjumlahan = " << Jumlah(8,6,9) << endl;
}//selesai
//10