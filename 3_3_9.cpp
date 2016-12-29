#include <iostream>
using namespace std;

int main() {
    int n;
    typedef int *ptrInt;

    cout << "Input the number: " << endl;
    cin >> n;
    ptrInt *arr = new ptrInt[n];
    for (int i = 0; i != n; ++i) {
        int *i_arr = new int[n];
        arr[i] = i_arr;
    }
    for (int i = 0; i != n; ++i)
    {
        for (int j = 0; j != n; ++j)
            arr[i][j] = 0;
    }

    int mid = n / 2;
    int k = 1;
    int i = 0, j = mid;
    while (k <= n * n)
    {
        if (arr[i][j] == 0)
            arr[i][j] = k;
        else
        {
            if (i == n - 1 && j == 0)
            {
                i = 1;
                j = n - 1;
                arr[i][j] = k;
            }
            else
            {
                ++i;
                --j;
                ++i;
                arr[i][j] = k;
            }
        }

        if (i == 0)
            i = n - 1;
        else
            --i;
        if (j == n - 1)
            j = 0;
        else
            ++j;
        ++k;
    }
    cout << "Output the result of n = " << n << endl;
    for (i = 0; i != n; ++i)
    {
        for (j = 0; j != n; ++j)
            cout << arr[i][j] << " ";
        cout << endl;
    }

    for (i = 0; i != n; ++i) {
        delete[] arr[i];
    }
    delete[] arr;
}