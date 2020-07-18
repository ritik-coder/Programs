#include<stdio.h>


int main(){

int h=0, m=0, s=0;
printf("Please Enter a time format in HH:MM:SS\n");
scanf("%d%d%d",&h,&m,&s);
start:
for(h;h<24;h++)
{
    for(m;m<60;m++){
        for(s;s<60;s++){
            printf("\n\n\t\t%d:%d:%d",h,m,s);
            if(h<12){
                printf(" AM");
            } 
            else {
                printf(" PM");
            }
                        printf("\n\n\t\t\t Saturday July 18 2020");
            for(double i=0;i<3619999;i++)
            i++;
        }
    }   s=0;
}   m=0;;
h=0;
goto start;
    return 0;
}