#include <stdio.h>

int main() {
    int array[] = {97, 16, 45, 63, 13, 22, 7, 58, 72,};
    int n = sizeof(array) / sizeof(array[0]);
    int numSwaps[n];  // to store the number of swaps needed for each index
    int swapCount;
    
    for(int i = 0; i < n-1; i++) {
        swapCount = 0;

        for(int j = 0; j < n-i-1; j++) {
            if(array[j] > array[j+1]) {
                int temp = array[j];
                array[j] = array[j+1];
                array[j+1] = temp;
                swapCount++;
            }
        }

        printf("Iteration #%d: %d\n", i+1, swapCount);
    }

    
    return 0;
}