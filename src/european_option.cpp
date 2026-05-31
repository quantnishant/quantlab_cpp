#include "european_option.hpp"
#include "utils.hpp"
#include <cmath>
using namespace std;

double EuropeanOption:: CallPrice() const
{
    double tmp = sigma*sqrt(T);
    double d1 = (log(S/K) + (r + (sigma*sigma*0.5))*T) / tmp;
    double d2 = d1 - tmp ;

    return (S*cdf_norm(d1) - exp(-r*T)*K*cdf_norm(d2));
}


void EuropeanOption:: init()
{
    r = 0.05;
    sigma = 0.2;
    T = 1;
    K = 95;
    S = 100;
    optType = "C";
}
