#include <iostream>
using namespace std;

struct User{
    string Nome; 
    int CPF;
    string Login; //public (Email)
    int Senha; //protected? ou private
    bool Status; //(Do emprestimo) (Se tem ou não livro emprestado?) + tempo restante?

    // Aprincipio ta tudo errado aqui tenta pesquisar sobre por favor
};