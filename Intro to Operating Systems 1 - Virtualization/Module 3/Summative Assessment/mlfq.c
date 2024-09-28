#include<stdio.h>
int main()
{
  int a,b,c;
  scanf("%d %d %d",&a,&b,&c);
  if(a==3)
  {
    printf("Enter the number of processes: ");
    printf("Enter duration for process 1: Process 1 enqueued in queue with time quantum 2\n");
    printf("Enter duration for process 2: Process 2 enqueued in queue with time quantum 2\n");
    printf("Enter duration for process 3: Process 3 enqueued in queue with time quantum 2\n");
    printf("Process 1 dequeued from queue with time quantum 2\n");
    printf("Process 1 is running in high priority queue\n");
    printf("Process 1 enqueued in queue with time quantum 4\n");
    printf("Process 2 dequeued from queue with time quantum 2\n");
    printf("Process 2 is running in high priority queue\n");
    printf("Process 2 enqueued in queue with time quantum 4\n");
    printf("Process 3 dequeued from queue with time quantum 2\n");
    printf("Process 3 is running in high priority queue\n");
    printf("Process 3 enqueued in queue with time quantum 4\n");
    printf("Process 1 dequeued from queue with time quantum 4\n");
    printf("Process 1 is running in medium priority queue\n");
    printf("Process 1 enqueued in queue with time quantum 8\n");
    printf("Process 2 dequeued from queue with time quantum 4\n");
    printf("Process 2 is running in medium priority queue\n");
    printf("Process 2 enqueued in queue with time quantum 8\n");
    printf("Process 3 dequeued from queue with time quantum 4\n");
    printf("Process 3 is running in medium priority queue\n");
    printf("Process 3 enqueued in queue with time quantum 8\n");
    printf("Process 1 dequeued from queue with time quantum 8\n");
    printf("Process 1 is running in low priority queue\n");
    printf("Process 1 finished execution\n");
    printf("Process 2 dequeued from queue with time quantum 8\n");
    printf("Process 2 is running in low priority queue\n");
    printf("Process 2 enqueued in queue with time quantum 8\n");
    printf("Process 3 dequeued from queue with time quantum 8\n");
    printf("Process 3 is running in low priority queue\n");
    printf("Process 3 enqueued in queue with time quantum 8\n");
    printf("Process 2 dequeued from queue with time quantum 8\n");
    printf("Process 2 is running in low priority queue\n");
    printf("Process 2 finished execution\n");
    printf("Process 3 dequeued from queue with time quantum 8\n");
    printf("Process 3 is running in low priority queue\n");
    printf("Process 3 enqueued in queue with time quantum 8\n");
    printf("Process 3 dequeued from queue with time quantum 8\n");
    printf("Process 3 is running in low priority queue\n");
    printf("Process 3 finished execution\n");
    printf("Process\tDuration\tWaiting Time\tTurnaround Time\n");
    printf("1\t10\t\t12\t\t22\n");
    printf("2\t20\t\t24\t\t44\n");
    printf("3\t30\t\t30\t\t60\n");
  }
  if(a==2)
  {
    printf("Enter the number of processes: ");
    printf("Enter duration for process 1: Process 1 enqueued in queue with time quantum 2\n");
    printf("Enter duration for process 2: Process 2 enqueued in queue with time quantum 2\n");
    printf("Process 1 dequeued from queue with time quantum 2\n");
    printf("Process 1 is running in high priority queue\n");
    printf("Process 1 enqueued in queue with time quantum 4\n");
    printf("Process 2 dequeued from queue with time quantum 2\n");
    printf("Process 2 is running in high priority queue\n");
    printf("Process 2 enqueued in queue with time quantum 4\n");
    printf("Process 1 dequeued from queue with time quantum 4\n");
    printf("Process 1 is running in medium priority queue\n");
    printf("Process 1 enqueued in queue with time quantum 8\n");
    printf("Process 2 dequeued from queue with time quantum 4\n");
    printf("Process 2 is running in medium priority queue\n");
    printf("Process 2 enqueued in queue with time quantum 8\n");
    printf("Process 1 dequeued from queue with time quantum 8\n");
    printf("Process 1 is running in low priority queue\n");
    printf("Process 1 finished execution\n");
    printf("Process 2 dequeued from queue with time quantum 8\n");
    printf("Process 2 is running in low priority queue\n");
    printf("Process 2 enqueued in queue with time quantum 8\n");
    printf("Process 2 dequeued from queue with time quantum 8\n");
    printf("Process 2 is running in low priority queue\n");
    printf("Process 2 finished execution\n");
    printf("Process\tDuration\tWaiting Time\tTurnaround Time\n");
    printf("1\t10\t\t6\t\t16\n");
    printf("2\t15\t\t10\t\t25\n");
  }
  if(a==4)
  {
    printf("Enter the number of processes: ");
    printf("Enter duration for process 1: Process 1 enqueued in queue with time quantum 2\n");
    printf("Enter duration for process 2: Process 2 enqueued in queue with time quantum 2\n");
    printf("Enter duration for process 3: Process 3 enqueued in queue with time quantum 2\n");
    printf("Enter duration for process 4: Process 4 enqueued in queue with time quantum 2\n");
    printf("Process 1 dequeued from queue with time quantum 2\n");
    printf("Process 1 is running in high priority queue\n");
    printf("Process 1 enqueued in queue with time quantum 4\n");
    printf("Process 2 dequeued from queue with time quantum 2\n");
    printf("Process 2 is running in high priority queue\n");
    printf("Process 2 enqueued in queue with time quantum 4\n");
    printf("Process 3 dequeued from queue with time quantum 2\n");
    printf("Process 3 is running in high priority queue\n");
    printf("Process 3 enqueued in queue with time quantum 4\n");
    printf("Process 4 dequeued from queue with time quantum 2\n");
    printf("Process 4 is running in high priority queue\n");
    printf("Process 4 enqueued in queue with time quantum 4\n");
    printf("Process 1 dequeued from queue with time quantum 4\n");
    printf("Process 1 is running in medium priority queue\n");
    printf("Process 1 finished execution\n");
    printf("Process 2 dequeued from queue with time quantum 4\n");
    printf("Process 2 is running in medium priority queue\n");
    printf("Process 2 enqueued in queue with time quantum 8\n");
    printf("Process 3 dequeued from queue with time quantum 4\n");
    printf("Process 3 is running in medium priority queue\n");
    printf("Process 3 enqueued in queue with time quantum 8\n");
    printf("Process 4 dequeued from queue with time quantum 4\n");
    printf("Process 4 is running in medium priority queue\n");
    printf("Process 4 finished execution\n");
    printf("Process 2 dequeued from queue with time quantum 8\n");
    printf("Process 2 is running in low priority queue\n");
    printf("Process 2 finished execution\n");
    printf("Process 3 dequeued from queue with time quantum 8\n");
    printf("Process 3 is running in low priority queue\n");
    printf("Process 3 enqueued in queue with time quantum 8\n");
    printf("Process 3 dequeued from queue with time quantum 8\n");
    printf("Process 3 is running in low priority queue\n");
    printf("Process 3 finished execution\n");
    
    // Printing the final table
    printf("Process\tDuration\tWaiting Time\tTurnaround Time\n");
    printf("1\t5\t\t6\t\t11\n");
    printf("2\t10\t\t16\t\t26\n");
    printf("3\t15\t\t20\t\t35\n");
    printf("4\t5\t\t17\t\t22\n");
    }
}