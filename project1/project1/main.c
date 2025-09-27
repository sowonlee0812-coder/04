
#include <stdlib.h>
#include <stdio.h>

int main(int argc, char * argv[]) {
    
    int year;
    
    printf("Input the year :");
    scanf("%i", &year);
    
    printf("Is the year %i leap year? : %i\n",
           year,
           ((year%4==0) && (year%100!=0)) || (year%400==0)
           );
    
    system("PAUSE");
    return 0;

}

