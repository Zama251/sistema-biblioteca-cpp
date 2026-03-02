#include "User.h"

User::User(std::string nome, std::string login, std::string cpf, std::string senha)
    : nome(nome),
      login(login),
      cpf(cpf),
      senha(senha),
      temEmprestimo(false),
      diasRestantes(0)
{
}
