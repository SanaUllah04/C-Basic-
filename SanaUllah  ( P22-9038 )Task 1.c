#include<stdio.h>


int main(){
 int Integer;
 printf("\nEnter a number:  ");
 scanf("%d", & Integer);
 
 if(Integer%2 == 0){
 	printf("\nIts an Even Integer");
 }
 else{
 	printf("\n%d Is an Odd Integer ",Integer);
 }
return 0;
}
