#include<stdio.h>
int main (void){
int num_of_cards ,i;
char first[100] , last[100] ;

printf("please enter the number of cards :");
scanf("%d" , &num_of_cards);

for (i=0; i,num_of_cards; i++){

printf("enter first name : ");
scanf("%s" , first);

printf("Enter the last name : ");
scanf("%s" , last);


printf("the correct name is : %s %s \n", last , first);

}
return 0 ;

}
