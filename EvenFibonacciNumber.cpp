#include <iostream>

int main() {
    
    long long a = 1, b = 2;
    const long long LIMIT = 4000000;
    long long sum = 0;
    while (b <= LIMIT) {
        
        if (b % 2 == 0) {
            sum += b;
        }
        long long temp = a + b;
        a = b;
        b = temp;
    }
    std::cout << "Sum of even Fibonacci numbers below " << LIMIT << " is: " << sum << std::endl;

    return 0;
}
