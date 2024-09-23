#include <iostream>
using namespace std;

bool prima(int angka){
    if (angka <= 1 ) return false;
    for ( int i = 2; i * i <= angka; i++){
        if ( angka % i ==0 ) return false;
    }
    return true;
}
void faktor( int angka){
    cout << "Faktor dari " << angka << ": ";
    for (int i = 1; i <= angka; i++){
        if (angka % i == 0)
        cout << i << " ";
    }
    cout << endl;
}
void ganjilgenapprima(int batas){
    cout << "Bilangan ganjil dari 1 ke " << batas << endl;
    for (int i = 1; i <= batas; i++){
        if ( i % 2 )
            cout << i << " ";
        }
    cout << endl;
    cout << "Bilangan genap dari 1 ke " << batas << endl;
    for (int i = 1; i <= batas; i++){
        if ( i % 2 == 0)
            cout << i << " ";
        }
    cout << endl;
    cout << "Bilangan prima dari 1 ke " << batas << endl;
    for (int i = 2; i <= batas; i++ ){
        if (prima(i))
            cout << i << " ";
    }
    cout << endl;
}
int main(){
    int batas;
    cout << "Masukkan batas: ";
    cin >> batas;
    ganjilgenapprima(batas);
    for (int i = 1; i <= batas; i++){
        faktor(i);
    }
    return 0;
}
