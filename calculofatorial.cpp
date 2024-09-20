#include <iostream>

using namespace std;

int fatorial(int n) {
    if (n == 0) {
        return 1;
    } else {
        return n * fatorial(n - 1);
    }
}

int main() {
    int num;

    cout << "Digite um numero inteiro: ";
    cin >> num;

    if (num < 0) {
        cout << "O fatorial nao esta definido para numeros negativos." << endl;
    } else {
        cout << "O fatorial de " << num << " e: " << fatorial(num) << endl;
    }

    return 0;
}