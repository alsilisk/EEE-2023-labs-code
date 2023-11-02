 #include <stdio.h>
 #define VEC_SIZE 200

 void clearvec(int *vector, int size);
 void printvec(int *vector, int size);

 int main(){
 int i[VEC_SIZE];

 printvec(i, VEC_SIZE);
 clearvec(i, VEC_SIZE);
 printvec(i, VEC_SIZE);

return 0;
 }
void fillvec(int val, int *vector, int size){
int i;

for(i=0; i < size; i++){
vector[i] = val;
}
 }
void clearvec(int *vector, int size){
fillvec(0, vector, size);
}


void printvec(int *vector, int size){
 int i;

for(i=0; i < size; i++){
printf("%d --> %d\n", i, vector[i]);
}
printf("\n------\n");
}