#include <iostream>
#include "european_option.hpp"

int main()
{
    EuropeanOption option;

    std::cout << "=== European Option Pricer ===" << std::endl;

    std::cout << "Spot price (S): ";
    std::cin >> option.S;

    std::cout << "Strike price (K): ";
    std::cin >> option.K;

    std::cout << "Risk-free rate (r) e.g. 0.05 for 5%: ";
    std::cin >> option.r;

    std::cout << "Volatility (sigma) e.g. 0.2 for 20%: ";
    std::cin >> option.sigma;

    std::cout << "Time to expiry in years (T): ";
    std::cin >> option.T;

    std::cout << "\nCall Price: " << option.CallPrice() << std::endl;

    return 0;
}