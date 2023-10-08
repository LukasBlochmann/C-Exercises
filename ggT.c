#include <stdio.h>

int main(void){

int a;
int b;

printf("Bitte gib zwei zu vergleichende Werte ein.\nWert A:");
scanf("%d", &a);
printf("Wert B:");
scanf("%d", &b);

while(a != b){
    if(a > b){
        a = a-b;
    }else{
        b = b-a;
    }
}printf("Der gesuchte ggT ist %d\n", a);


return 0;


}