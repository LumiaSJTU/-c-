#include <iostream>
using namespace std;
const int SIZE = 5551;

int main()
{
    int box[SIZE] = {0};
    int n = 2;
    while (n * n < SIZE || box[n] == 1)
    {
        if (box[n] == 0)
            for (int i = n * 2; i < SIZE; i += n)
                box[i] = 1;
        ++n;
    }
    for (int i = 2; i < SIZE; ++i)
    {
        if (box[i] == 0)
            cout << i << " ";
    }
}