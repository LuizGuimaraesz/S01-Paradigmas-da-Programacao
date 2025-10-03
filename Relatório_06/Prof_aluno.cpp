#include <iostream>
using namespace std;


class Pessoa{
protected:
    string nome;


public:
    Pessoa(string nome){
        this->nome = nome;
    }

    virtual void apresentar(){
        cout << "Ola, meu nome e " << nome << " e sou uma pessoa." << endl;
    }

};

class Professor : public Pessoa{
private:
    string disciplina;

public:
    Professor(string nome, string disciplina) : Pessoa(nome){
        this->disciplina = disciplina;
    }

    void apresentar() override{
        cout << "Ola, meu nome e " << nome << " e sou professor" << " de " << disciplina << "."<<endl;
    }



};


class Aluno : public Pessoa{
private:
    string curso;

public:
    Aluno(string nome, string curso) : Pessoa(nome){
        this->curso = curso;
    }

    void apresentar() override{
        cout << "Ola, meu nome e " << nome << " e sou aluno" << " do curso de " << curso <<"." << endl;
    }

};

int main()
{
    Professor prof_1("Marcelo", "Paradigmas da programacao");
    Aluno aluno_1("Luiz", "Engenharia de software");

    Pessoa* pt1 = &prof_1;
    Pessoa* pt2 = &aluno_1;

    pt1->apresentar();
    pt2->apresentar();
    

    return 0;
}