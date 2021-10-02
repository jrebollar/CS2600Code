#include <stdio.h>
#include <string.h>

void main() {
    int magicSquare[3][3];

    for(int i = 0; i < 3; i++) {
        for(int a = 0; a < 3; a++) {
            magicSquare[i][a] = (rand() % 15);
        }
    }
    for(int i = 0; i < 3; i++) {
        printf("[");
        for(int a = 0; a < 3; a++) {
            printf("%d ", magicSquare[i][a]);
            if(a ==2){
                printf("\n");
            }
        }
   }
}