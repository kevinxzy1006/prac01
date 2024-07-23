#include <iostream>

double sum_even(double array[], int n) {
    double sum = 0.0;

    if(n < 1) {
        return sum;
    }

    for(int i=0; i<n; i++) {
        if(i%2 == 0) {
            sum = sum + array[i];
        }
    }
    return sum;
}

int main() {
    double array[5] = {1.1 ,2.2, 3.3, 4.4, 5.5};
    int n = sizeof(array) / sizeof(array[0]);
    double sum = sum_even(array, n);
}