#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int main(int ac, char **av){
    if(ac != 3){
        printf(" |");
        return 0;
    }

int x = atoi(av[2]);
int y = atoi(av[1]);

for(int i = 1; i <= x; i++){


    for(int j = 1; j <= y; j++){

        if(i==1 && j==1 || i==x && j==y || j==y && i==1|| i==x && j==1){
            printf("o");
        }
        else if(i==1||i==x){
            printf("-");
        }
        else if(j==1 || j==y){
            printf("|");
        }
        else {
            printf(" ");
        }
    }
    printf("\n");
    
    
    }
    return 0; 
    
    
    
    }