#include <iostream> // Include the input/output stream library for cin and cout

using namespace std; // Use the standard namespace to avoid prefixing standard library names with 'std::'

// Function to calculate the sum of integers from 'first' to 'last' (inclusive)
int sum_from_to(int first, int last) {
    // Use the formula for the sum of an arithmetic series:
    // Sum = (number of terms) * (average of first and last term) / 2
    // Number of terms = (last - first + 1)
    // Average of first and last term = (first + last) / 2
    // Hence, Sum = (last - first + 1) * (first + last) / 2
    return (last - first + 1) * (first + last) / 2;
}

int main() {
    int first, last; // Declare variables to store the first and last integers

    // Prompt the user to enter the first integer
    std::cout << "Enter the first integer: ";
    std::cin >> first; // Read the first integer from the user

    // Prompt the user to enter the last integer
    std::cout << "Enter the last integer: ";
    std::cin >> last; // Read the last integer from the user

    // Calculate and display the sum of integers from 'first' to 'last'
    std::cout << "The sum is: " << sum_from_to(first, last) << std::endl;

    return 0; // Return 0 to indicate successful completion of the program
}