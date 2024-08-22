#include <iostream>

const int MOD = 1e9 + 7;

// Function to compute (base^exp) % mod using modular exponentiation
long long modExp(long long base, long long exp, int mod) {
    long long result = 1;
    while (exp > 0) {
        if (exp % 2 == 1) { // If exp is odd
            result = (result * base) % mod;
        }
        base = (base * base) % mod; // Square the base
        exp /= 2; // Reduce the exponent
    }
    return result;
}

class Solution {
public:
    int countGoodNumbers(long long n) {
        // Calculate number of even and odd positions
        long long even_positions = (n + 1) / 2;
        long long odd_positions = n / 2;
        
        // Calculate 5^even_positions % MOD
        long long even_count = modExp(5, even_positions, MOD);
        // Calculate 4^odd_positions % MOD
        long long odd_count = modExp(4, odd_positions, MOD);
        
        // Total count of good numbers
        long long total = (even_count * odd_count) % MOD;
        return total;
    }
};