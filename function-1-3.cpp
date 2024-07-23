#include <iostream>

using namespace std;

int num_count(int array[], int n, int number) {
    if (n < 1) {
        return 0;
    }

    int count = 0;
    for (int i = 0; i < n; i++) {
        if (array[i] == number) {
            count++;
        }
    }
    return count;
}

int main() {
    int array[7] = {1, 2, 3, 2, 5, 2, 7}; // Example array
    int n = sizeof(array) / sizeof(array[0]);
}