#include <stdio.h>
#include <math.h>

int main() {

    const float x = 166.124;
    const float z = 15.839;
    const float result = 1/x + 2/(pow(x,2) + z) + 3/(pow(x,3) + pow(z,2)) + 4/(pow(x,4) + pow(z,3)) + 5/(pow(x,5) + pow(z,4));
    printf("%f", result);


    
    
    scanf("%f", result);
 
    return 0;
}