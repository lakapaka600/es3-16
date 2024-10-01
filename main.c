#include <stdio.h>

int main(void) {
    int num1,num2,num3;
    printf("inserisci num1");
    scanf("%d",&num1);
    printf("inserisci num2");
    scanf("%d",&num2);
    printf("inserisci num3");
    scanf("%d",&num3);
    if(num1>num2 && num1>num3) {
        printf("il primo numero è il maggiore : %d", num1);
    }
    else if (num2>num1 && num2>num3) {
        printf("il secondo numero è il maggiore : %d", num2);
    }
    else if (num3>num1 && num3>num2) {
        printf("il terzo numero è maggiore : %d", num3);
    }
    return 0;
}
