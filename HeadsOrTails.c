#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
    int i, countH = 0, countT = 0;
    char *h = "Heads";
    char *t = "Tails";
    int coin;
    char name[15];

    pritnf("Who are you?\n");
    scanf("%s", name);
    printf("Hello, %s!\n", name);

    printf("Tossing a coin...\n");
    srand((unsigned int)time(NULL));
    for(i = 0; i < 3; i++){
        printf("Round %d: ", i+1);
        coin = 0 + rand() % 2;
        if(coin == 0){
             printf("%s\n", h);
             countH++;
        }
        else if(coin == 1){
            printf("%s\n", t);
            countT++;
        }
        else{
            return 0;
        }
       
    }

    printf("Heads: %d, Tails: %d\n", countH, countT);
    if(countH > countT) printf("%s won!\n", name);
    else printf("%s lost!\n", name);
    return 0;
}