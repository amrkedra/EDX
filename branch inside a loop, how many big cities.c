#include <stdio.h>
int main (void){
int i , num_of_cities , population , population_count=0 ;
printf("please enter the number of cities :");
scanf("%d" , &num_of_cities);

for(i=1; i<num_of_cities+1; i++){

printf("please enter the population number of city no %d :" , i);
scanf("%d" , &population);

if (population > 10000 ){

    population_count = population_count +1;
}

}
 
 printf("cities with Population more than 10000 are : %d", population_count);

return 0 ;

}