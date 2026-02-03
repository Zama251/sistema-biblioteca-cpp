#include <iostream>
using namespace std;

int main () {};
  class Livro {
private:
    int id;
    string titulo;
    bool disponivel;

public:
    Livro(int id, string titulo) {
        this->id = id;
        this->titulo = titulo;
        this->disponivel = true;
    }

    bool estaDisponivel() {
        return disponivel;
    }

    void emprestar() {
        disponivel = false;
    }

    void devolver() {
        disponivel = true;
    }

    string getTitulo() {
        return titulo;
    }
};

class Usuario {
private:
    int id;
    string nome;

public:
        Usuario() {} // construtor vazio
    Usuario(int id, string nome) {
        this->id = id;
        this->nome = nome;
    }

};
class Emprestimo {
private:
    Usuario usuario;
    Livro* livro;
    string dataEmprestimo;
    string dataDevolucao;
    bool ativo;

public:
    Emprestimo(Usuario usuario, Livro* livro, string dataEmprestimo) {
        this->usuario = usuario;
        this->livro = livro;
        this->dataEmprestimo = dataEmprestimo;
        this->ativo = true;

        livro->emprestar();
    }

    void devolver(string dataDevolucao) {
        this->dataDevolucao = dataDevolucao;
        this->ativo = false;
        livro->devolver();
    }

    bool estaAtivo() {
        return ativo;
    }
};
