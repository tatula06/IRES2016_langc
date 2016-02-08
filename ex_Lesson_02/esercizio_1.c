#include <stdio.h>

void main()
{
int i;
int j=20;
int a[20]={};
printf("array_a = ");
for (i=0;i<20;i++){
a[i]=j;
printf(" %d", a[i]);
j-=1;
}
printf("\n");
}
