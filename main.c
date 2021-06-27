
#include<stdio.h>
int main(){
    int i,num,flag=0;
    printf("Enter a number to be checked\n");
    scanf("%d",&num);
    for(i=1;i<=num;i++)
    {
        if(num%i==0)
        {
            flag++;
        }
    }
    if(num==1)
    {
        printf("1 is neither prime nor a composit number\n");
    }
    else
    {
        if(flag==2)
        {
            printf("%d is a prime number\n",num);
        }
        else
            printf("%d is not a prime number\n",num);
    }
    return 0;
}
 
