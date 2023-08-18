// sum of int and float digits and difference between them
// Input -
// - Output:
/*
10 4        
4.0 2.0

14 6
6.0 2.0
*/


#include <stdio.h>

int main()
{
	int a,b,absum,abdiff;
    float c,d,cdsum,cddiff;
    scanf("%d %d",&a,&b);
    scanf("%f %f",&c,&d);

    absum = a+b;
    abdiff = a - b;
    printf("%d ",absum);
    printf("%d",abdiff);

    cdsum = c+d;
    cddiff = c-d;
    printf("\n%.1f ",cdsum);
    printf("%.1f",cddiff);
    return 0;
}