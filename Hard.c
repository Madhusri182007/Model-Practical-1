#include<stdio.h>
int main()
{
    int n;
    printf("Enter array1 size:");
    scanf("%d",&n);
    int m;
    printf("Entere size of array2:");
    scanf("%d",&m);
    if(n==m)
    {
    int a[n];
    printf("Enter array1 elements:");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    int b[m];
    printf("enter array2 elements:");
    for(int i=0;i<m;i++)
    {
        scanf("%d",&b[i]);
    }
    int i=0,j=0;
    while(i<n)
    {
        if(a[i]==b[i])
        {
            j++;
        }
        i++;
    }
    if(j==m)
    {
        printf("Both arrays are equal or same");
    }
    else {
        printf("Arrays are not equal");
    }
    }
    else {
        printf("Array size not match");
    }
}
