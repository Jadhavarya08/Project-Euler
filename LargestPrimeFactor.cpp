#include <iostream>

long long largestPrimeFactor(long long n) {
    long long largest = -1;

    while (n % 2 == 0) {
        largest = 2;
        n /= 2;
    }

    for (long long i = 3; i * i <= n; i += 2) {
        while (n % i == 0) {
            largest = i;
            n /= i;
        }
    }
    if (n > 2) {
        largest = n;
    }
return largest;
}

int main() {
   const long long NUMBER = 600851475143;
    long long result = largestPrimeFactor(NUMBER);
    std::cout << "The largest prime factor of " << NUMBER << " is: " << result << std::endl;

    return 0;
}