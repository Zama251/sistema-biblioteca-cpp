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

   bool temEmprestimo; //Tem Emprestimo //o bool so serve pra true/false ele não pode gaurdar o tempo restante, se queremos usar ele tem que ser dessa forma.
   int diasRestantes;// Dias Restantes

   User(string nome, string login, string cpf, string senha) {
   
      this -> nome = nome; //indicação de local o -> this (literalmente uma seta)
      this -> login = login; 
      this -> cpf = cpf;
      this -> senha = senha;

     temEmprestimo = false;
      diasRestantes = 0;

   }

      bool validarSenhas (const string& tentativas); //Validador de senhas (Explicação da const str...) Referência protegida (Não cria copia, Não pode modificar, Mais eficaz);
      bool validarCpf (); //Validador de CPF
      void fazerEmprestimos (int Dias); // FazerEmprestimos | Dias
      void devolverLivros (); //Devolver Livros

      




};


   


