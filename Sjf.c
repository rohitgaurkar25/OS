#include<stdio.h>
void main()
{
 int t=1,bt[10],ct[10],processid[10],at[10]={0},btime=0,k=1,min,temp,turnaroundtime[10]={0},i,j,n,wt[10]={0};
 float atat=0,awt=0;
 printf("\nEnter number of processes:");
 scanf("%d",&n);
 printf("\nEnter burst time of processes"); 	
 for(i=0;i<n;i++)
 {
  printf("\nP%d:",i+1);
  processid[i]=i+1;
  scanf("%d",&bt[i]);
 }
 printf("\nEnter arrival time of processs:");
 for(i=0;i<n;i++)
 {
  printf("\nP%d:",i+1);
  scanf("%d",&at[i]);
 }
 for(i=0;i<n;i++)
 {
  for(j=0;j<n-1-i;j++)
  {
  if(at[i]<at[j])
  {
  temp=processid[j];
  processid[j]=processid[i];
  processid[i]=temp;
  
  temp=at[j];
  at[j]=at[i];
  at[i]=temp;
  
  temp=bt[j];
  bt[j]=bt[i];
  bt[i]=temp;
  }
 }
}
ct[0]=at[0]+bt[0];
for(j=0;j<n;j++)
{
 btime=btime+bt[j];
 min=bt[k];
 for(i=k;i<n;i++)
 {
 if (btime>at[i] && bt[i]<min)
 {
 temp=processid[k];
 processid[k]=processid[i];
 processid[i]=temp;
 
 temp=at[k];
 at[k]=at[i];
 at[i]=temp;
 
 temp=bt[k];
 bt[k]=bt[i];
 bt[i]=temp;
 
 }
}
ct[t]=ct[t-1]+bt[t];

t++;
k++;
}

for(i=0;i<n;i++)
{
turnaroundtime[i]=ct[i]-at[i];
atat=atat+turnaroundtime[i];
wt[i]=turnaroundtime[i]-bt[i];
awt=awt+wt[i];
}

printf("Process Arrival Burst_Time Completion Turn_Around_Time Waiting_Time\n");
for(i=0;i<n;i++)
{
 printf("P%d      %d	    %d	        %d 	   %d	           %d\n",processid[i],at[i],bt[i],ct[i],turnaroundtime[i],wt[i]);
}
awt=awt/n;
atat=atat/n;
printf("Average waiting time:%.2f\nAverage Turn around time:%.2f",awt,atat);
}
