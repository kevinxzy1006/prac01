#include <iostream>

using namespace std;

double array_mean(int array[], int n) {
    double ave = 0.0;
    double sum = 0.0;
    for(int i = 0; i < n; i++) {
        sum = sum + array[i];
        ave = sum/n;
    }
    return ave;
}

int main() {
    int array[5] = {1, 2, 3, 4, 5};
    int n = sizeof(array)/sizeof(array[0]);
    double ave = array_mean(array, n);
    cout << ave << endl;
}