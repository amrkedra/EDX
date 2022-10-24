#include<stdio.h>
int main (void){
int min_temp , Max_temp , dev_temp ;

printf("please enter the Min Temp : ");
scanf("%d" , &min_temp);

printf("Please enter the max temp :");
scanf("%d", &Max_temp);


printf("enter Device temp :");
scanf("%d" , &dev_temp);

while(dev_temp != -999){
    printf("enter Device temp :");
scanf("%d" , &dev_temp);
if (dev_temp != min_temp || dev_temp != Max_temp)
{
    printf("nothing to report");
    scanf("%d" , &Dev_temp);
}
else {

    printf("Alert");
    break;
}

}
return 0 ;
}
