#include<stdio.h>

int main() {
   int num , counter, sum ;
   while (num >= 0){
       printf("enter expenses amount: ");
       scanf("%d" , &num);
       
       counter ++ ;
       
         sum+=num; 
   }
   
   printf("%d" , sum);
   
    return 0;
}
