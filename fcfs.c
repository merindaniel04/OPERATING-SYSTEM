#include<stdio.h>
void main()
{
 int n,i,j;
 double avg_wait=0,avg_tat=0;
 printf("Enter the number of processes: ");
 scanf("%d",&n);
 int btime[n],wtime[n],tattime[n];
 printf("Enter the burst time of the processes\n");
 for(i=0;i<n;i++)
 {
   printf("P%d Burst Time: ",(i+1));
   scanf("%d",&btime[i]);
   printf("\n");
 }
 wtime[0]=0;
 for(i=0;i<n;i++)
 {
  wtime[i]=wtime[i-1]+btime[i-1];
  avg_wait=avg_wait+wtime[i];
 }
 avg_wait=avg_wait/n;
 for(i=0;i<n;i++)
 {
  tattime[i]=wtime[i]+btime[i];
  avg_tat=avg_tat+tattime[i];
 }
 avg_tat=avg_tat/n;
 
 printf("Process\t Burst Time\t Wait Time\t Turn Around Time\n");
 for(i=0;i<n;i++)
  {
   printf("P%d\t%d\t\t%d\t\t%d\n",i+1,btime[i],wtime[i],tattime[i]);
  }
 printf("\n");
 printf("Average Waiting Time: %.2f\nAverage Turn Around Time : %.2f\n", avg_wait,avg_tat);
 printf("\n");
 printf(" ");
 for(i=0;i<n;i++)
 {
  printf("--------");
 }
 printf("\n|");
 for(i=0;i<n;i++)
 {
  printf("P%d     |",i+1);
 }
 printf("\n|");
 for(i=0;i<n;i++)
 {
  printf("--------");
 }
 printf("\n0\t");
 int current_time=0;
 for(i=0;i<n;i++)
 {
 current_time=current_time+btime[i];
 printf("%d\t",current_time);
 }
 printf("\n");
 }
 
  
   
