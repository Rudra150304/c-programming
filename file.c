#include<stdio.h>
#include <math.h>
int main()
{
    long i,n,sum=0,j=1;
    printf("enter the number of terms :");
    scanf("%ld",&n);
    for (i=1;i<=n;i++){
        if(i%2==0){
            sum+=pow(j,3);
        }
        else{
            sum-=pow(j,3);
        
        }
        j=j+2;
    }
    printf("the sum of series is %ld",sum);
    return 0;

}