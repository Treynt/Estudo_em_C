//TAD visa desvincular o tipo de dado (estrutura de dados e operações que as manipulam) de sua implementação
//Quando definimos um TAD estamos preocupados com o que el faz (especificação) e não como ele faz (implementação)
//ideia parecida com o Encapsulamento em Orientação a objeto
//No TDA terá dois arquivos: um arquivo cabeçalho '.h', voltado para a especificação, e um aruivo fonte '.c', relativo a implementação

//Exemplo: Crie um TAD onde o vetor tem uma capacidade máxima(número máximo de elementos) e ele informa seu tamanho (quantidade de elementos armazenados)
//Funções: size(tad vector): retorna o tamanho do vetor
//capacity(tad vector): retorna a capacidade do vetor(número máximo de elementos)
//at (tad vector, int index): retorna o elemento do índice 'index com bound-checked(se o indice é válido)
//get(tad vector, int index): retorna o elemento do índice 'index'
//append(tad vector, float val): adiciona o valor 'val' no final do vetor. Lança um erro se o vetor estiver cheio
//set(tac vector, in index, float val): Atribui o valor 'val' no indice 'index' do vetor de tipo 'tad'. Lança um erro se o indice for inválido
//print(tad vector): imprime todos os elementos do vetor