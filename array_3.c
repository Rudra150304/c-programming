#include<stdio.h>
int main()
{
    int a[100],i,n,min;
    printf("Input the number of elements to store in an array: \n");
    scanf("%d",&n);
    for(i = 0 ; i < n ; i++)
    {
        printf("\nelement- %d: ",i);
        scanf("%d",&a[i]);
        min = a[0];
    }
    for(i = 1; i < n; i++)
    {
        if(min>a[i])
            {
                min = a[i];
            }
    }
    printf("\nMinimum in array = %d",min);
    return 0;
}