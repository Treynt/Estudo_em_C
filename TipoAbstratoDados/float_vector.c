#include "float_vector.h"
#include <stdio.h>
#include <stdlib.h>

struct float_vector{
    int capacity;//num máximo de elementos
    int size;//quantidade de elementos armazenados atualmente
    float *data;//votr de floats
};

/**
*@brief Cria (aloca) um vetor de floats com uma dada capacidade
*
*@param capacity capacidade do vetor
*@return FloatVector* um vetor de floats alocado/criado
 */
 FloatVector *create(int capacity){
    FloatVector *vec = calloc(1, sizeof(FloatVector));
 }