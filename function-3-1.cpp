#include <iostream>

bool is_fanarray(int array[], int n) {
    if(n<1) {
        return false;
    } else {
        for(int i=0; i<n; i++) {
            if(array[i] = array[n-i]) {
                return true;
            } else {
                return false;
            }
        }
    }
}

int main() {
    int array[9] = {1,2,3,4,5,6,7,8,9};
    int n = sizeof(array)/sizeof(array[0]);
    is_fanarray(array, n);
}