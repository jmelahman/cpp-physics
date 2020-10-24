/* Calculate Fibonacci numbers */

#include <iostream>

void NextFibonacci(int *numPrev, int *num) {
    int numOld = *num;
    *num = *numPrev + *num;
    *numPrev = numOld;
}
