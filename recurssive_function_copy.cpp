#include<iostream>

using namespace std;

// Calculate factorial
int factorial(int count) {
    if (count <= 1) {
        return 1; // Base case: factorial of 0 or 1 is 1
    }
    return count * factorial(count - 1);
}

// Generate Fibonacci sequence
int fibo_sequence(int a, int b, int fibo_steps) {
    if (fibo_steps <= 0) {
        return a; // Base case: return current Fibonacci number
    } else {
        int c = a + b;
        a = b;
        b = c;
        return fibo_sequence(a, b, fibo_steps - 1);
    }
}

int main() {
    // Input for factorial calculation
    int fact_count;
    cout << "Enter the number for factorial calculation: ";
    cin >> fact_count;

    // Calculate and display factorial
    int fact = factorial(fact_count);
    cout << "Factorial: " << fact << endl;

    // Input for Fibonacci sequence
    int fibo_steps;
    cout << "Enter the number of steps for Fibonacci Sequence: ";
    cin >> fibo_steps;

    // Print Fibonacci sequence
    cout << "Fibonacci Sequence: ";
    int a = 0, b = 1;
    for (int i = 0; i < fibo_steps; ++i) {
        cout << fibo_sequence(a, b, i) << " ";
    }
    cout << endl;

    return 0;
}
