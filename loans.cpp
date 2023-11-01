#include <stdio.h>
int main{
int loan = 10000000;
int installment = 1000000;
int installment_period = 0;

int option;
printf("your loan is 10000000 ugandan shillings\n");
printf("enter your choice(1 or 2)");

scanf("%d" &option);
switch (option){
    case 1:
    printf("1. yes\n");
    loan -=installment;
    installment_period++

    prinf("you need %d installments to complete your loan\n");
    
    break;
    case 2:
    prinf("2. no\n");
    break;
    default:
    printf("you have completed your loan");
    break;
} return 0:
}