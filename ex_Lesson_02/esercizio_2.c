#include <stdio.h>
void main()
{
int i;
int j=0;
int a[5]={2,4,6,-2,1};
int somma=0;
for(i=0;i<5;i++){
if (a[j]>0){
somma=somma+a[j];
j=j+1;
}
else{

i=5;
}
}
printf("somma = %d",somma);
printf("\n");
}
