#pragma once
#include <string>

class EuropeanOption
{
private:
    void init();

public:
    double r;
    double sigma;
    double T;
    double K;
    double S;
    std::string optType;

    EuropeanOption() { init(); }
    ~EuropeanOption() {}

    double CallPrice() const;
};