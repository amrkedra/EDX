#include<stdio.h>
int main (void){
int population , day=1 , infected=1 ;
printf("please enter the population : ");
scanf("%d" , &population);

while(infected < population){

day = day + 1;

infected=infected*3;

}

printf("the entire city will take %d days to be infected" , day);

return 0 ;

}

