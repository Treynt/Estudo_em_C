/*
Percorrer primeiro as linhas ao invés da coluna ocorre por um motivo
em razão a performace, atrelada a como os dados são armazenados na memória, visto que a CPU (CPU caching/memória cache) processa 
dados sequenciais mais eficientemente do que dados não sequenciais, e na linguagem C, a sequencia é
estipulada em percorrer linha por linha (Row-Major Order, ao invés de Column-Major order). Por isso é importante saber o layout dos dados usados para passar
corretamente arrays entre programas escritos em diferentes linguagens
*/