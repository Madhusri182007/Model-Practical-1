#include<stdio.h>
int main()
{
    int age;
    char marrietal_status;
    char gender;
    printf("Enter age:");
    scanf("%d",&age);
    printf("Enter marrietal status if married enter 'm' else enter 'u':");
    scanf(" %c",&marrietal_status);
    printf("Enter gender if male enter 'm',if female enter 'f':");
    scanf(" %c",&gender);
    if(marrietal_status=='m')
    {
        printf("Driver is insured");
    }
    else if(marrietal_status=='u' && gender=='m' && age>=30)
    {
        printf("Driver is insured");
    }
    else if(marrietal_status=='u' && gender=='f' && age>=25)
    {
        printf("Driver is insured");
    }
    else {
        printf("Driver is  not insured");
    }
}
