Pricipais pontos do codigo:
Cadastro de usuarios | Admins | Segurança da aplicação
Cadastro de livros | Fisicos | Digitais | Espaço "Biblioteca" 
Sistema de emprestimos | Sistema de Compra

COMO VAMOS CONFIGURAR/PLANEJAR CADA ITEM

Id: UserADM = 00000001 e **2
Id: User = 00000003 em diante ate 20000000

Id: LivrosFisico = 20000001 a 3**0
Id: LivrosDigitais = 30000001 a 4**0

Emprestimo: --- (Caso o usuario tenha pego um livro, apartir do dia em que ele alugou o livro, ele tera um prazo até devolução do mesmo) (Caso Usuario atrase a devolução do livro 8 dias, um sistema de contagem de infrações é acionado para esse usuario em especifico)(se o usuario tiver mais de 3 infrações ele fica bloqueado de alugar livros por 14 dias)
(Caso seja um usuario que não cometa infrações e devolve os livros no prazo ele ganha beneficios, EX: ganho de mais alguns dias para poder ficar com o livro ou poder pegar mais de um de uma vez.) duvidas aqui atualiza assim q possivel!!

Sistema de compra só pix? Cartão de credito e pix? (Não vai funcionar obvio mas e bom pra teste) | caso o usuario queira alugar o livro, ele tera disponivel como forma de pagamento o cartão de crédito, debito e pix, caso seja uma compra, só cartão de debito e pix.

Definir preços depois!!!

Adiciona mais coisa que pensa ai apaga tudo com ? (Essa mensagem) Corrige tudo que falta Usa o GPT qualquer coisa pra aqui ficar bem explicativo antes da gente começar a codar.

