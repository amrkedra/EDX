#include <stdio.h>

int main() {
int  count , i;
double weight[1000] , w_sum;
printf("enter how many cars : ");
scanf("%d" , &count);
for(i=1; i<=count ; i++){
    printf("please enter the weight of num %d car :", i);
    scanf("%lf" , &weight[i]);
    printf("\n");
    w_sum += weight[i];
}
 printf("the total weight is : %.2lf \n" , w_sum);
for (i=1; i<=count; i++){
    printf("the optimal weight for cat %d is : %.2lf  \n",i , (w_sum/count)-weight[i]); 
}

    return 0;
}