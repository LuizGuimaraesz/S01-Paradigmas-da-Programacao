#include <iostream>
using namespace std;

class pessoa{
private:
    string nome;
    int idade;
        

public:
    pessoa(string nome, int idade){
        this->nome = nome;
        this->idade = idade;
    }

    string getNome(){
        return nome;
    }

    int getIdade(){
        return idade;
    }
        
};


class protagonista : public pessoa{
private:
    int nivel;
    

public:
    protagonista(string nome, int idade, int nivel) : pessoa(nome, idade){
        this->nivel = nivel;
    }

    int getNivel(){
        return nivel;
    }
 
};

class personagem: public pessoa{
private:
    int rank;
    

public:

    personagem(string nome, int idade, int rank) : pessoa(nome, idade){
        this->rank = rank;
    }

    int getRank(){
        return rank;
    }
        
};


int main()
{
    protagonista Protagonista("Naruto", 14, 10);
    personagem Vilao("Sasuke", 15, 9);

    cout << "Protagonista: " << Protagonista.getNome() << ", Idade: " << Protagonista.getIdade() << ", Nivel: " << Protagonista.getNivel() << endl;
    cout << "Vilao: " << Vilao.getNome() << ", Idade: " << Vilao.getIdade() << ", Rank: " << Vilao.getRank() << endl;


    return 0;
}