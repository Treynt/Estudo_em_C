/*

Structs são estruturas em que conseguimos criar tipos de dados específicos/personalizados de acordo com a necessidade
do nosso código, astravés de empacotar características desse novo tipo de dado criado
Ex. Ao inves de criar vários campos de pessoas, com variáveis com nomes diferentes para suas caracteristicas(nome, idade)
para não dar conflito, podemos só criar uma struct com nome e idade
Assim, uma Struct é um "pacote" de variáveis que podem ter tipos diferentes
Visa representar grupos de dados que resultem em algo mais concreto, p.ex. registro de aluno, automóveis, etc
Cada variável é um campo do registro
Em C, registros são conhecidos como stricts, que vem de structure, do ingles

Esqueleto:
struct[nome do registro] {
    tipo campo1;
    tipo campo2;
    tipo campo3;
    ...
    tipo campoN;
}[uma ou mais variáveis];

[nome do registro] e [uma ou mais variáveis] são opcionais
[nome do registro] é simplesmente o nome da classe de registro, e não um tipo
Você já pode declarar variáveis, referentes a esta struct, colocando-as no lugar de [uma ou mais variaveis]
*/

//Ex1

struct Aluno {
    char nome[100];
    int idade;
};
//declaração de uma variável
struct Aluno barney;

//------------------------------------------------------
//Ex2
struct Aluno {
    char nome[100];
    int idade;
} barney, ted;
//Aqui, ao setar o struct, já cria duas variáveis globais atreladas a esse tipo de dado, e ainda permitir criar uma
//nova variável quando achar necessário, usando o exemplo do caso 1, como 'struct Aluno m
//----------------------------------------------------

//Ex3 - Instancia anonima
struct {
    char nome[100];
    int idade;
} barney, ted;
//Na instancia anonima, você não pode criar novas variaveis atreladas a esse tipo de dado, ficando preso as variaveis globais
//criadas na sua raiz, diferentemente so segundo exemplo

//------------------------------------------------------------

//Ex4 Mais usado

typedef struct Aluno {
    char nome[100];
    int idade;
} TipoAluno;

struct Aluno barney;
TipoAluno ted;
/*
Aqui é o modo mais 'elegante'. Agora, ao inves de declarar variáveis globais na raiz do struct, colocamos um apelido para ela
permitindo que a usemos quando formos criar novas variaveis: "TipoAluno ted;", mas ainda permitindo o outro modo "struct Aluno barney"
*/