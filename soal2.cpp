#include <iostream>
using namespace std;

int fibonaci(int n){
    if (n <= 1){
        return n;
    }
    return fibonaci(n-1) + fibonaci(n-2);
}

int main(){
    int n;
    cout << "Masukkan angka: ";
    cin >> n;
    cout << "Fibonaci: ";
    for (int i = 0; i < n; i++){
        cout << fibonaci(i) << " ";
    }
    return 0;
}
