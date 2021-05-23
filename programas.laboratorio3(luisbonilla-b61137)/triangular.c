#include <stdio.h>
#include <stdlib.h>
int main(int argc, char *argv[]){
// Variables a utilizar
long int n=0;
long int triangular;
// preparando el bucle

while(triangular < 100) {
triangular= n*(n+1)/2;
printf("%ld x",triangular);

printf("\n");
n++;
}
printf(" \n\nEstos sn todos los nuemros primos del 0 añ 100");
system("PAUSE");
return 0;
}
