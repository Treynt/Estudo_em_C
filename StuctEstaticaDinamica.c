#include <string.h>
typedef struct _aluno {
    char nome[100];
    int idade;
} Aluno;

//Setar de forma estática
Aluno ted;
strcpy(ted. nome, "Ted"); //strcpy é uma função do string.h que aloca uma string ao parametro indicado, como no caso, alocar Ted ao ted.nome
ted.idade = 10;
//Ou assim
Aluno ted = {.nome = "Ted", .idade = 10};
printf("sizeof(Aluno) = %lu bytes\n", sizeof(Aluno));

//Setar de forma dinamica
Aluno *ted = (*Aluno)calloc(1, sizeof(Aluno));//ou seja, é o tamanho estipulado do tipo de dado do strcut, que será 104 no exemplo, 100 do char e 4 do int
//Para acessar os campos da struct, diferentemente do estático, que usamos o '.', no dinamico usamos '->'
strcpy(ted->nome, "Ted");
ted->idade = 10;