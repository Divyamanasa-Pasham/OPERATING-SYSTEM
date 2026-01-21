#include<stdio.h>
int main()
{
char p[10][10];
int bt[10],wt[10],tat[10],twt,ttat,n,i;
float awt,atat;
printf("\n enter number of process ready to execute");
scanf("%d",&n);
for(i=0;i<n;i++)
{
printf("\n enter process name");
scanf("%s",p[i]);
printf("\n enter bt");
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
printf("\n process number bursttime wating time turn around time");
for(i=0;i<n;i++)
{
printf("\n %s\t %d\t %d\t %d\t", p[i],bt[i],wt[i],tat[i]);
}
printf("\n average waiting time = %f",awt);
printf("\n average turn around time = %f",atat);
}
