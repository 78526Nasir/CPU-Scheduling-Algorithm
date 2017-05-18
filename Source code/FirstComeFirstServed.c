// First Come First Served computer scheduling Algorithm implementation in C!

#include <stdio.h>
#define max 20 /// fixed maximum size for array

main()
{
    int process,burstTime[max],waitingTime[max],averageWaitingTime=0,i,j;
    printf("Enter The Number of Process(Max 20) : ");
    scanf("%d",&process);

    printf("\nEnter Process Burst Time\n");

    for(i=0;i<process;i++)
    {
        printf("For Process[%d]: ",i+1);
        scanf("%d",&burstTime[i]);
    }

    waitingTime[0]=0; // waiting time for the first Process is 0

    for(i=1;i<process;i++)
    {
        waitingTime[i]=0;
        for(j=0;j<i;j++)
            waitingTime[i]+=burstTime[j];
    }

    printf("\nProcess \tBurst Time\tWaiting Time\n");
    printf("-------------------------------------------\n");
    for(i=0;i<process;i++)
    {
        averageWaitingTime+=waitingTime[i];
        printf("%d\t\t%d\t\t%d\n",i+1,burstTime[i],waitingTime[i]);
    }

    averageWaitingTime/=i;
    printf("\nThe Average Waiting Time is : %d ",averageWaitingTime);

}



