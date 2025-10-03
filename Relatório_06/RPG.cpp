#include <iostream>
using namespace std;

class personagem {
private:
        string nome;
        int nivel;
        int dano;
        int vida;

public:
        personagem(string nome, int nivel, int dano, int vida){
        this->nome = nome;
        this->nivel = nivel;
        this->dano = dano;
        this->vida = vida;
    }

    void atacar(personagem &alvo){ 
        alvo.vida -= this->dano;
        cout << this->nome << " atacou " << alvo.nome << " causando " << this->dano << " de dano." << endl;
        if (alvo.vida <= 0) {
            cout << alvo.nome << " foi derrotado!" << endl;
        } else {
            cout << alvo.nome << " agora tem " << alvo.vida << " de vida restante." << endl;
        }
        
        
        
    }
        

};


int main(){

    personagem p1("Guerreiro", 1, 8, 100);
    personagem p2("Mago", 1, 15, 60);

    p1.atacar(p2);
    p2.atacar(p1);
    p1.atacar(p2);
    

    return 0;
}