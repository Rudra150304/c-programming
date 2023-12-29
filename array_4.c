#include <stdio.h>
#include <conio.h>
void main(){
    int i,j,n,arr[100],ctr=0;
    printf("input the number of elements to be stored in an array :");
    scanf("%d",&n);
    for (i=0;i<n;i++){
        printf("elements=%d:",i);
        scanf("%d",&arr[i]);

    }
    for(i=0;i<n;i++){
        for(j=i+1;j<n;j++){
            if (arr[i]==arr[j]){
                ctr++;
                break;

            }
        }
    }
    printf("total number of duplicate array found in an array: %d\n",ctr++);

}