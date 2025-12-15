#include<stdio.h>

int gameValue = 400;
int userValue ;

int main(){
printf("Enter the number: ");
scanf("%d", &userValue);

if(gameValue == userValue){
printf("Correct value");
}
else {
printf("WRONG VALUE");

}

}
