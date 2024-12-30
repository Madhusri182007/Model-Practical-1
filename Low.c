#include<stdio.h>
#include<math.h>
int main()
{
    int edge;
    scanf("%d",&edge);
    float volume;
    volume=((15+7*(sqrt(5)))/4*(edge*edge*edge));
    printf("%f",volume);
}
