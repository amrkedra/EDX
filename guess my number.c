#include <stdio.h>
int main (void){
int des_num , guessed_num , i;
printf("please enter the desired number :");
scanf("%d" , &des_num);


while(guessed_num != des_num){
    
    printf("please enter the guessed num");
    scanf("%d" , &guessed_num);
    
    if (guessed_num > des_num)
    {
        printf("the guessed number is more than the needed number please enter another number :");
        scanf("%d" , &guessed_num);
    }
    else if (guessed_num < des_num){
        printf("the guessed numer is less than the needed number please enter another number:  ");
        scanf("%d" , &guessed_num);
    }

    i++;
}


    printf("you have reached the needed number ");



return 0 ;

}

