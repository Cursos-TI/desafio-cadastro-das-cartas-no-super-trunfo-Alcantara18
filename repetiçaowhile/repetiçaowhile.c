#include <stdio.h>
 
int main() {
    int i ;

    printf("Digite um número: \n");
    scanf("%d", &i);
   
    while (i <= 5) {
        printf("%d\n", i);
        i++;
    }
   
    return 0;
}