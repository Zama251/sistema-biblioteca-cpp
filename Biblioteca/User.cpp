#include <iostream>
#include <string> //Ele serve para você poder usar o tipo string do C++. Sem esse #include, o compilador não sabe o que é string.

using namespace std;

class User{ //se fosse struct tudo seria publico por padrão, ou seja, a senha e o cpf seriam publico, criando uma class ele fica mais seguro.
   private: 
   
   string senha; //senha do usuario!! a senha como int é insegura e limitada, com string voce pode adicionar simbolos, tipos de letra e tamanho.
   string cpf;

   public: 
   
   string login; //Email do usuario.
   string nome; 

   bool TE; //Tem Emprestimo //o bool so serve pra true/false ele não pode gaurdar o tempo restante, se queremos usar ele tem que ser dessa forma.
   int DR; // Dias Restantes

   User(string nome, string login, string cpf, string senha) {
   
      this -> nome = nome;
      this -> login = login; a
      this -> cpf = cpf;
      this -> senha = senha;

      TE = false;
      DR = 0;

   }

      bool VS (string tentativas); //Validador de senhas
      bool VCPF (); //Validador de CPF
      void FE (int D); // FazerEmprestimos | Dias
      void DL (); //Devolver Livros

      




};


   


