#include<stdio.h>
#include<stdlib.h>
int main (void){
char name[50];
int i , name_count ;

printf("please enter the name : ");
scanf("%s" , name);

name_count = strlen(name);

if(name_count % 2 ==0){

    printf("please go to line 1");
}
else {
    printf("please go to line 2");
}

return 0 ;

}
