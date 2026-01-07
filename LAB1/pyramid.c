#include<stdio.h>
int main()
{
int i,j,p,n;
printf("enter the number of rows:");
scanf("%d",&n);
for(i=1;i<=n;i++){
for (p=1;p<=n-i;p++){
printf(" ");
}
for(j=1;j<=i;j++){
printf("* ");
}

printf("\n");
}
}
