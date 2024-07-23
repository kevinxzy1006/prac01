#include <iostream>

using namespace std;

int array_sum(int array[], int n) {
    int sum = 0;
    for (int i=0; i<n; i++) {
        sum = sum + array[i];
    }
    return sum;
}

int main() {
    int array[] = {1, 2, 3, 4, 5};
    int n = sizeof(array)/ sizeof(array[0]);
    int sum = array_sum(array, n);
    cout << sum << endl;

    return 0;
}