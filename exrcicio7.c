#include<stdio.h>
#include<stdlib.h>

main(){
    int num1;
    int num2;
    int num3;
    printf("Enter the first number: ");
    scanf("%d", &num1);
    printf("Enter the Second number: ");
    scanf("%d", &num2);
    printf("Enter the Second number: ");
    scanf("%d", &num3);

    if(num1 > num2 && num1> num3){
    printf("maior numero é: %d", num1);
    }
    if(num2 > num1 && num2 > num3){

    printf("maior numero é: %d", num2);
    }
    if(num3 > num2 && num3 > num1){
    printf("maior numero é: %d", num3);

    }
    if(num1 < num2 && num1< num3){
    printf("mnr numero é: %d", num1);
    }
    if(num2 < num1 && num2 < num3){

    printf("menr numero é: %d", num2);
    }
    if(num3 < num2 && num3 < num1){
    printf("menr numero é: %d", num3);

    }
    if((num1 > num2 && num1 < num3 )|| (num1 < num2 && num1 > num3)){
    printf("med é: %d", num1);

    }
   if((num2 > num1 && num2 < num3 )|| (num2 < num1 && num2 > num3)){
    printf("med é: %d", num2);

    }
    if((num3 > num2 && num3 < num1 )|| (num3 < num2 && num3 > num1)){
    printf("med é: %d", num3);

    }
}
















