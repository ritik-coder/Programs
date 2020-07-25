#include<stdio.h>


struct Driver
{
    char name[30];
    char dlno[40];
    char route[47];
    int kms;
};

int main(){
struct Driver d1,d2,d3;
printf("Enter the details of the First Driver: \n");
printf("Enter the name of First Driver: \n");
scanf("%s",&d1.name);
printf("Enter the dlno of First Driver: \n");
scanf("%s",&d1.dlno);
printf("Enter the route of First Driver: \n");
scanf("%s",&d1.route);
printf("Enter the number of kms of First Driver: \n");
scanf("%d",&d1.kms);

printf("Enter the details of Second Driver: \n");
printf("Enter the name of Second Driver: \n");
scanf("%s",&d2.name);
printf("Enter the dlno of Second Driver: \n");
scanf("%s",&d2.dlno);
printf("Enter the route of Second Driver: \n");
scanf("%s",&d2.route);
printf("Enter the number of kms of Second Driver: \n");
scanf("%d",&d2.kms);

printf("Enter the details of Third Driver: \n");
printf("Enter the name of Third Driver: \n");
scanf("%s",&d3.name);
printf("Enter the dlno of Third Driver: \n");
scanf("%s",&d3.dlno);
printf("Enter the route of Third Driver: \n");
scanf("%s",&d3.route);
printf("Enter the number of kms of Third Driver: \n");
scanf("%d",&d3.kms);

printf("******Printing information of these drivers:*******\n");
printf("For Driver no 1:\nName is %s\n",d1.name);
printf("DL number is %s\n",d1.dlno);
printf("Route is %s\n",d1.route);
printf("Number of kms is %d\n\n",d1.kms);

printf("For Driver no 2:\nName is %s\n",d2.name);
printf("DL number is %s\n",d2.dlno);
printf("Route is %s\n",d2.route);
printf("Number of kms is %d\n\n",d2.kms);

printf("For Driver no 3:\nName is %s\n",d3.name);
printf("DL number is %s\n",d3.dlno);
printf("Route is %s\n",d3.route);
printf("Number of kms is %d\n",d3.kms);

    return 0;
}