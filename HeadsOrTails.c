#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
    int i, countH = 0, countT = 0;
    char *h = "Heads";
    char *t = "Tails";
    int coin;

    printf("Tossing a coin...\n");
    srand((unsigned int)time(NULL));
    for(i = 0; i < 3; i++){
        printf("Round %d: ", i);
        coin = 0 + rand() % 2;
        if(coin == 0){
             printf("%s", h);
             countH++;
        }
        else if(coin == 1){
            printf("%s", t);
            countT++;
        }
        else{
            return 0;
        }
       
    }

    printf("Heads: %d, Tails: %d\n", countH, countT);
    return 0;
}