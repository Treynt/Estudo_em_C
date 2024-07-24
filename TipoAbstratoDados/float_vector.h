typedef struct float_vector FloatVector;
//A recomendação clássica é deixar aqui apenas o esqueleto da struct, setando o tipo e o apelido,  e passar sua estrutura no .c

FloatVector *create(int capacity);
void destroy(FloatVector **vec);
int size(const FloatVector *vec);
int capacity(const FloatVector *vec);
float at(const FloatVector *vec, int index);
float get(const FloatVector *vec, int index);
void append(FloatVector *vec, float val);
void set(FloatVector *vec, int index, float val);
void print(const FloatVector *vec);