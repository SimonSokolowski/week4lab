#include <iostream>

int main(){

    int number;
    std::cout << "Enter an integer: ";
    std::cin >> number;

    // test divisors of number, if a divisor other than 1 and number is
    // found, then number is not prime.   
    bool isPrime = true;

    if (number > 1) {
        for (int i = 2; i < number; i++)
            if (!(number % i))
            isPrime = false;

        if (isPrime)
            std::cout << "Prime\n";
        else
            std::cout << "Not prime\n";
    } else if (number == 1) {
        std::cout << "Prime";
    } else {
        std::cout << "Enter positive number";
    }

    return 0;
}