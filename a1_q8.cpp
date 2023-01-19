#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int n, k;
    cin >> n >> k;

    // if k is positive, rotate to the right
    if (k > 0) {
        for (int i = 0; i < k; i++) {
            int last_digit = n % 10;
            n /= 10;
            n = n + last_digit * pow(10, floor(log10(n) + 1));
        }
    } 
    // if k is negative, rotate to the left
    else {
        k = -k;
        int num_digits = floor(log10(n) + 1);
        for (int i = 0; i < k; i++) {
            int first_digit = n / pow(10, num_digits - 1);
            n = n % int(pow(10, num_digits - 1));
            n = first_digit + n * 10;
        }
    }

    cout << n << endl;
    return 0;
}
