#include <iostream>
using namespace std;

bool checkPrimeNumber(int);
void swapNum(int *,int*);

int main() {
    int n1, n2;
    bool flag;

    cout << "Enter first positive integers: ";
    cin >> n1;
    cout << "Enter second positive integer: ";
    cin >> n2;

    // swapping n1 and n2 if n1 is greater than n2
    if (n1 > n2) 
    {
        swapNum(&n1, &n2);
    }

    cout << "Prime numbers between " << n1 << " and " << n2 << " are: ";

    for (int i = n1 + 1; i < n2; ++i) 
    {
        flag = checkPrimeNumber(i);
        if (flag) { cout << i << " "; }
    }
    return 0;
}

bool checkPrimeNumber(int n) {
    bool isPrime = true;

    // 0 and 1 are not prime numbers
    if (n == 0 || n == 1) { isPrime = false; }
    else 
    {
        for (int j = 2; j <= n / 2; ++j) 
        {
            if (n % j == 0) 
            {
                isPrime = false;
                break;
            }
        }
    }
    return isPrime;
}

void swapNum(int *x , int *y)
{
    int temp = *x;
    *x = *y;
    *y = temp;
}