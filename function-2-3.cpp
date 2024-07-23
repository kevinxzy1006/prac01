#include <iostream>

using namespace std;

void two_five_nine(int array[], int n) {
    //Use uppercase letters to represent the times of appearance of 2, 5 and 9
    int T = 0;
    int F = 0;
    int N = 0;
    for(int i = 0; i < n; i++) {
        if(array[i] == 2) {
            T++;
        } else if(array[i == 5]) {
            F++;
        } else if(array[i == 9]) {
            N++;
        }
    }
    //output result
    cout << "2:" << T << ";" << "5:" << F << ";" << "9:" << N << ";" << endl;
}

int main() {
    int array[10] = {2,2,5,5,9,9,2,5,8,0};
    int n = sizeof(array)/sizeof(array[0]);
    two_five_nine(array, n);
}
