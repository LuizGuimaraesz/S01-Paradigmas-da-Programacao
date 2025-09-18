#include <iostream>
using namespace std;


float somarArray(float arr[], int tamanho) {
    int soma = 0;
    for (int i = 0; i < tamanho; i++) {
        soma += arr[i];
    }
    return soma;
}


int main() {

    int tamanho;
    cout << "Digite o tamanho do array: ";
    cin >> tamanho; 

    float arr[tamanho];
    cout << "Digite os elementos do array:" << endl;    
    for (int i = 0; i < tamanho; i++) {
        cin >> arr[i];
    }

    cout << "Soma dos elementos do array: " << somarArray(arr, tamanho) << endl;
    return 0;
}