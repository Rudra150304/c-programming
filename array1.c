#include<stdio.h>
#include<math.h>
int main()
{
    int i;
    int arr[10];
    printf("\n\nRead and Print elements of an array\n");
    printf("_______________________________________\n");

    printf("Input 10 elements in the array: \n");
    for(i = 0; i < 10; i++)
    {
        printf("element- %d: ",i);
        scanf("%d",&arr[i]);
    }
    printf("\nElements in an array are: ");
    for(i=0; i<10; i++)
    {
        printf("%d ",arr[i]);
    }
    printf("\n");
    return 0;
}