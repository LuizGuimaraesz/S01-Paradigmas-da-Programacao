#include <iostream>
#include <list>
using namespace std;

class SerVivo {
protected:
    string nome;

public:
    SerVivo(string nome) {
        this->nome = nome;
    }

    virtual void apresentar() {
        cout << "Sou um ser vivo chamado " << nome << endl;
    }

};

class Humano : public SerVivo {
public:
    Humano(string nome) : SerVivo(nome) {}

    void apresentar() override {
        cout << "Sou um humano chamado " << nome << "!" << endl;
    }
};

class Elfo : public SerVivo {
public:
    Elfo(string nome) : SerVivo(nome) {}

    void apresentar() override {
        cout << "Sou um elfo chamado " << nome << "!" << endl;
    }
};

class Fada : public SerVivo {
public:
    Fada(string nome) : SerVivo(nome) {}

    void apresentar() override {
        cout << "Sou uma fada chamada " << nome << "!" << endl;
    }
};

int main() {
    list<SerVivo*> seres;

    Humano humano_1("Luiz");
    Elfo elfo_1("Legolas");
    Fada fada_1("Tinker Bell");

    seres.push_back(&humano_1);
    seres.push_back(&elfo_1);
    seres.push_back(&fada_1);

    for (SerVivo* s : seres) {
        s->apresentar();
    }

    return 0;
}
