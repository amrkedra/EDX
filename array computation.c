#include <stdio.h>
int main(void){
    int no_of_ing ,i ;
    double price_per_pound[10] , weight_of_ing[10] , total_cost , price_for_entred_weight[10 ];
    printf("please enter the number of ingredients : ");
    scanf("%d" ,&no_of_ing);

    for(i=1; i<no_of_ing+1; i++){
        printf("please enter the price of 1 pound of no %d ingredient : ", i);
        scanf("%lf" , &price_per_pound[i]);
        printf("\n");
    }
   
        for(i=1; i<no_of_ing+1; i++){
        printf("please enter the weight needed for no %d ingredient : ",i);
        scanf("%lf", &weight_of_ing[i]);
        printf("\n");
price_for_entred_weight[i] = price_per_pound[i] * weight_of_ing[i] ;
total_cost = total_cost + price_for_entred_weight[i];

}
        total_cost += price_for_entred_weight[i];
        printf("the total cost is : %.2lf" , total_cost);
    
    
    return 0 ;
}