#include <stdio.h>

int main(void)
{
    int j;
    printf("Jahr:");
    scanf("%d", &j);

    if(j % 4 == 0 && j % 100 != 0 || (j % 400 == 0)) {
            printf("Das Jahr %d ist ein Schaltjahr.\n", j);
    }else{
        printf("Oops, kein Schaltjahr\n");}
    return 0;
}