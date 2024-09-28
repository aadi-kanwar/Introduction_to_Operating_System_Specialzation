#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int main(int argc, char *argv[]) {

    // insert your code below this line
    
    int id = fork();
    if (id == 0) {
        printf("Hello from the child\n");
    } 
    else if (id > 0) {
        sleep(1);
        printf("Goodbye from the parent\n");
    } 
    else {
        printf("fork did not work as intended\n");
        exit(1);
    }  
    
    // insert your code above this line

    return 0;
}