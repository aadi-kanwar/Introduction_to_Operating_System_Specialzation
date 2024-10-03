#include <stdio.h>

int main() {
    int n; // number of processes
    int duration[100], waiting_time[100], turnaround_time[100];
    float total_waiting_time = 0, total_turnaround_time = 0;

    // Input number of processes and their durations
    printf("Enter the number of processes: ");
    scanf("%d", &n);

    for(int i = 0; i < n; i++) {
        printf("Enter duration for process %d: ", i+1);
        scanf("%d", &duration[i]);
    }

    // Initialize waiting time for the first process
    waiting_time[0] = 0;

    // Calculate waiting time and turnaround time for each process
    for(int i = 1; i < n; i++) {
        waiting_time[i] = duration[i-1] + waiting_time[i-1];
        turnaround_time[i] = duration[i] + waiting_time[i];
    }

    // Calculate total waiting time and total turnaround time
    for(int i = 0; i < n; i++) {
        total_waiting_time += waiting_time[i];
        total_turnaround_time += turnaround_time[i];
    }

    // Display the results
    printf("Process\tDuration\tWaiting Time\tTurnaround Time\n");
    for(int i = 0; i < n; i++) {
        printf("%d\t%d\t\t%d\t\t%d\n", i+1, duration[i], waiting_time[i], turnaround_time[i]);
    }

    printf("Average Waiting Time: %.2f\n", total_waiting_time/n);
    printf("Average Turnaround Time: %.2f\n", total_turnaround_time/n);

    return 0;
}