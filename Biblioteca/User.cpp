#include <iostream>
#include <string> //Ele serve para você poder usar o tipo string do C++. Sem esse #include, o compilador não sabe o que é string.

using namespace std;

class User{ //se fosse struct tudo seria publico por padrão, ou seja, a senha e o cpf seriam publico, criando uma class ele fica mais seguro.
   private: 
   
   string senha; //senha do usuario!! a senha como int é insegura e limitada, com string voce pode adicionar simbolos, tipos de letra e tamanho.
   string cpf; // o cpf como int não daria certo por conta que ele tem 11 digitos e estoura o maximo do int.

   public: 
   
   string login; //Email do usuario.
   string nome;

bool temEmprestimo; //o bool so serve pra true/false ele não pode gaurdar o tempo restante, se queremos usar ele tem que ser dessa forma.
bool diasRestantes;
};
