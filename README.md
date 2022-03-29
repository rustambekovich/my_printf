# my_printf
Qwasar
#include <stdio.h>

int main() {
    int number,number2;
    printf("Enter number: ");
    scanf("%d %d", &number, &number2);
      if (number%2==0 ){
        printf("Juft son\n%d",number);
    }
    else if (number%2== !0 ){
        printf("Toq son\n%d",number);
    }
     if (number2%2==0){
        printf("\nBu juft son\n%d",number2);
    }
    else {
        printf("\nToq son\n%d",number2);
    }
    return 0;
}
