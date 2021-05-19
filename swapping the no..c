#include<stdio.h>
main()
{
    float n1,n2;
    printf("Enter any two no.\n");
    scanf("%f%f",&n1,&n2);
    n1=n1/n2;
    n2=n2*n1;
    n1=n2/n1;
    printf("%f %f",n1,n2);
}
