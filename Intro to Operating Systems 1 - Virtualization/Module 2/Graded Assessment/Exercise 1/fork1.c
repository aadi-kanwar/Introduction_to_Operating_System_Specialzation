#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int num;

int main(int argc, char *argv[]) 
{
  // add code below this line    
    num = 100;
    int id = fork();

    if (id == 0) {
        printf("value in child process: %d\n", num);
    } else if (id > 0) {
        printf("value in parent process: %d\n", num);
    } else {
        printf("fork did not work as intended\n");
        exit(1);
    }  
    // add code above this line
    return 0;
}