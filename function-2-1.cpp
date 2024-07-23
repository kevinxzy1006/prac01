#include <iostream>

int min_element(int array[], int n) {
    int min = 0;
    for(int i = 0; i < n; i++) {
        if(array[i] > array[i+1]) {
            min = array[i+1];
        }
    }
    return min;
}

int main() {
    int array[7] = {1,2,3,4,5,6,7};
    int n = sizeof(array)/sizeof(array[0]);
    int min_value = min_element(array, n);

    return 0;
}