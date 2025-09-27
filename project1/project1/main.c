
#include <stdlib.h>
#include <stdio.h>

int main(int argc, char * argv[]) {
    
    int time;
    
    printf("input the second :");
    scanf("%i", &time);
    
    printf("the time is %i : %i\n", time/60, time%60);
     
    return 0;

}

