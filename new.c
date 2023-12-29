#include<stdio.h>
int main()
{
    int a[10],i,n,min,max;
    printf("Number of values in array- ");
    scanf("%d",&n);
    printf("\nElements in array- ");
    for(i=0; i<n; i++)
    {
        scanf("%d",& a[i]);
    }
    min = a[0];
    max = a[0];
    for(i=1; i<n; i++)
    {    if (min > a[i])
        {
            min = a[i];
        }
        if (max < a[i])
        {
            max = a[i];
        }
    }
    printf("min. no. is %d\n",min);
    printf("max. no. is %d",max);
    return 0
}