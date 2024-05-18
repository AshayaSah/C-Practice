#include <iostream>
using namespace std;

int main() {
    // Initialize the sum
    double total_sum = 0.0;

    // Loop through the series
    for (int i = 1; i <= 97; i += 2) {
        total_sum += static_cast<double>(i) / (i + 2);
    }

    // Print the total sum
    cout << "Sum of the series: " << total_sum << endl;

    return 0;
}
