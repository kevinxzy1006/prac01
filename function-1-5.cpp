#include <iostream>

int count_evens(int number) {
    int count = 0;
    for(int i = 0; i < number; i++) {
        if (i%2 == 0) {
            count++;
        } 
    }
    return count;
}

int main() {
    int number = 99;
    int count = count_evens(number);

    return 0;
}