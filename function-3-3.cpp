#include <iostream>
#include <unordered_map>

double weighted_average(int array[], int n) {
    // Return 0 if the size is less than 1
    if (n < 1) {
        return 0.0;
    }

    // Create a hash map to count the occurrences of each element
    std::unordered_map<int, int> count_map;
    for (int i = 0; i < n; ++i) {
        ++count_map[array[i]];
    }

    // Calculate the weighted average
    double weighted_sum = 0.0;
    for (const auto& pair : count_map) {
        int element = pair.first;
        int count = pair.second;
        weighted_sum += static_cast<double>(element * count);
    }

    // Return the weighted average
    return weighted_sum / n;
}

int main() {
    int array[] = {1, 2, 1, 4, 1, 3};
    int n = sizeof(array) / sizeof(array[0]);

    double result = weighted_average(array, n);
    std::cout << "Weighted Average: " << result << std::endl;

    return 0;
}
