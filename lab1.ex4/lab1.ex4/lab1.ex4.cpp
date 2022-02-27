#include <iostream>

using namespace std;

bool isPrime(int n)
{
    for (int tr = 2; tr < n /2+1 ; tr++)

        if ((n % tr) == 0)

            return false;

    return true;
}

int main()

{
    int n;

    std::cout << "Enter a number:";

    std::cin >> n;
    //cazul n=1 nu este tratat si va afisa ca 1 este prim
    if (isPrime(n))

        std::cout << n << " is prime !";

    else

        std::cout << n << " is NOT prime !";

    return 0;
}