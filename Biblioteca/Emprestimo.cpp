#include <iostream>
using namespace std;

int main (){
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

    
}
