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


    float media = soma/n;

    cout<< "Media: " << media << endl;

    if (media >= 7)
        cout<< "Aprovado" << endl;
    else
        cout<< "Reprovado" << endl;




    return 0;
}
