#include <iostream>

bool isPrime(int n)
{

    for (int i = 2; i < n; i++)
    {
        if (n <= 1)
            return false;
        if (n % 2 == 0)
            return false;

        return true;
    }
}
int main()
{

    int n;
    std::cout << "Enter the Number";
    std::cin >> n;

    return 0;
}