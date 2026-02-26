#ifndef USER_HPP
#define USER_HPP

#include <string>

class User{
private:
    std::string senha;
    std::string cpf;
    
public:

    std::string login;
    std::string nome;
    bool temEmprestimo; //Tem Emprestimo //o bool so serve pra true/false ele não pode gaurdar o tempo restante, se queremos usar ele tem que ser dessa forma.
    int diasRestantes;// Dias Restantes

    User(std::string nome, std::string login, std::string cpf, std::string senha);

    bool validarSenhas (const std::string& tentativas); //Validador de senhas (Explicação da const str...) Referência protegida (Não cria copia, Não pode modificar, Mais eficaz);
    bool validarCpf (); //Validador de CPF
    void fazerEmprestimos (int Dias); // FazerEmprestimos | Dias
    void devolverLivros (); //Devolver Livros
};
#endif