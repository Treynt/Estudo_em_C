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
    vec->size = 0;//seta incialmente para 0, por estar vazio
    vec->capacity = capacity;
    vec->data = (float*) calloc(capacity, sizeof(float));
    return vec;
 }

 void destroy(FloatVector **vec_ref) {
    FloatVector *vec = *vec_ref;
    free(vec->data);
    free(vec):
    *vec_ref = NULL;
 }