#include<stdio.h>

int programValue = 150;
int userValue ;

int main(){
printf("Enter the number: ");
scanf("%d", &userValue);

if(userValue >= programValue){
printf("Correct value");
}
else {
printf("WRONG VALUE");

}

}
