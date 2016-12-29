#include <iostream>
using namespace std;

int main()
{
    enum city {urban, suburban, exurban, numurban};
    double popRate[numurban][numurban];
    popRate[urban][urban] = 1.1;
    popRate[urban][suburban] = 0.3;
    popRate[urban][exurban] = 0.7;
    popRate[suburban][urban] = 0.1;
    popRate[suburban][suburban] = 1.2;
    popRate[suburban][exurban] = 0.3;
    popRate[exurban][urban] = 0.2;
    popRate[exurban][suburban] = 0.6;
    popRate[exurban][exurban] = 1.3;
    double pop[numurban];
    pop[urban] = 2.1;
    for (int i = 1; i <= 10; ++i)
        pop[urban] += pop[urban]* (1.1 - 0.3 - 0.7);
    cout << pop[urban];
}