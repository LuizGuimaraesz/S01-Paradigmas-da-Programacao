#include <iostream>
using namespace std;

int main(){
    
    int n;
    cout<< "Digite a quantidade de notas: ";
    cin>> n;

    float nota;
    float soma = 0;

    for (int i=0; i<n; i++){
        do{
            cout<< "Digite a nota: ";
            cin>> nota;
        } while (nota < 0 || nota > 10);
        
        soma += nota;
    }

    cout<< "Media: " << soma/n << endl;


    return 0;
}
