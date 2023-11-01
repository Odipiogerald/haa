#include <stdio.h>
int main(){
    int num;
    printf("enter a number");
    scanf("%d",&num);

    if(num % 2 == 0){
        printf("%d is even.\n",num);
    }else{
        printf("%d is odd.\n",num);
    }
    return 0;
}

#include <stdio.h>
int main() {
double num;
printf("Enter a number: ");
scanf("%lf", &num);
if (num <= 0.0) {
if (num == 0.0) {
printf("You entered 0.");
} else {
printf("You entered a negative number.");
}
} else {
printf("You entered a positive number.");
}
return 0;
}