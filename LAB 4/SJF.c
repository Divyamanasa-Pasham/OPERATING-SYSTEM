
#include<stdio.h>
int main()
{
int p[10],bt[10],wt[10],tat[10],twt,ttat,n,i,j;
float awt,atat;
int temp;
printf("\n enter number of process ready to execute");
scanf("%d",&n);
for(i=0;i<n;i++)
{
for(j=0;j<i;j++)
{
if(bt[i]<bt[j])
{
temp=bt[i];
bt[i]=bt[j];
bt[j]=temp;
temp=p[j];
p[i]=p[j];
p[j]=temp;
}
}
}

for(i=0;i<n;i++)
{
printf("enter process number");
scanf("%d",p[i]);
printf("enter bt");
scanf("%d", &bt[i]);
}
wt[0]=0;
twt=0;
tat[0]=bt[0];
ttat=bt[0];
for(i=1;i<n;i++)
{
wt[i]=wt[i-1]+bt[i-1];
tat[i]=wt[i]+bt[i];
twt=twt+wt[i];
ttat=ttat+tat[i];
}
awt=(float)twt/n;
atat=(float)ttat/n;
//output//
printf("\n process number bursttime wating time turn around time");
for(i=0;i<n;i++)
{
printf("\n %s\t %d\t %d\t %d\t", p[i],bt[i],wt[i],tat[i]);
}
printf("\n average waiting time = %f",awt);
printf("\n average turn around time = %f",atat);
}

