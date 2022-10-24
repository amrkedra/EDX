#include <stdio.h>
#include <stdlib.h>
int main() {
 char word[101];
 int i ,num_of_rep;
 
 printf("how many number you want to repeat : ");
 scanf("%d" , &num_of_rep);
 
 printf("enter the word : ");
 scanf("%s" , word);
     
 for (i=1; i< num_of_rep+1; i++){
     printf("%s" , word);
 }

    return 0;
}
