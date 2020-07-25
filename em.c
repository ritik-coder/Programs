#include<stdio.h>
#include<stdlib.h>      //DMA
int main(){
    int chars, i=0;
    char *ptr;
    while (i<1000){
printf("Employee %d: Enter the number of characters in your employee ID:\n", i+1);
scanf("%d",&chars);
ptr=(char*)malloc((chars+1)*sizeof(char));
printf("Enter your employee ID:\n");
scanf("%s",ptr);
printf("Your Employee ID is %s\n",ptr);
free(ptr);
i=i+1;
    }

    return 0;
}