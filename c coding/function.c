#include <stdio.h>
#include <math.h> // sin(), cos(), tan(), sqrt()

int sum(int x, int y, int z); // function prototype

int main(int argc, char** argv) {
    int result;
    
    result = sum(10, 20, 30); // Function calling and storing result
    printf("The sum is %d\n", result); // Added missing semicolon and improved formatting

    return 0; // Return statement should be at the end of main
}

int sum(int x, int y, int z) {
    int result;
    result = x + y + z; // Corrected the sum calculation
    return result; // Added missing semicolon
}
