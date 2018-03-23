
#include <stdio.h>


int puissance(int base, int puis) {
    int result = 1;
    
    while (puis > 0) {
	result *= base;
	puis -= 1;
    }
    return result;
}





