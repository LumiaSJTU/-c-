#include <iostream>
#include <cmath>
using namespace std;
#define ON  1
#define OFF 0
const int SIZE = 151;

int main()
{
    int box[SIZE] = {0};
    for (int i = 2; i <= 150; ++i)
    {
        for (int j = i; j <= 150; j += i)
        {
            if (box[j] == 1)
                box[j] = 0;
            else
                box[j] = 1;
        }
    }
    for (int i = 1; i <= 150; ++i)
    {
        if (box[i] == 0)
            cout << i << " ";
    }
}