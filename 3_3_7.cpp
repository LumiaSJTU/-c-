#include <iostream>
using namespace std;

int main()
{
    int m, n;
    cin >> m >> n;
    typedef int * ptrInt;

    cout << "Create the first array: " << endl;
    ptrInt *arr_1 = new ptrInt[m];
    for (int i = 0; i != m; ++i)
    {
        int *i_arr = new int[n];
        arr_1[i] = i_arr;
    }
    for (int i = 0; i != m; ++i)
    {
        for (int j = 0; j != n; ++j)
            cin >>arr_1[i][j];
    }
    cout << "Create the second array: " << endl;
    ptrInt *arr_2 = new ptrInt[m];
    for (int i = 0; i != m; ++i)
    {
        int *i_arr = new int[n];
        arr_2[i] = i_arr;
    }
    for (int i = 0; i != m; ++i)
    {
        for (int j = 0; j != n; ++j)
            cin >>arr_2[i][j];
    }
    cout << "The total of two arraies: " << endl;
    for (int i = 0; i != m; ++i)
    {
        for (int j = 0; j != n; ++j)
            arr_1[i][j] += arr_2[i][j];
    }
    for (int i = 0; i != m; ++i)
    {
        for (int j = 0; j != n; ++j)
            cout << arr_1[i][j] << " ";
        cout << endl;
    }
    for (int i = 0; i != m; ++i)
    {
        delete[] arr_1[i];
    }
    delete[] arr_1;
    for (int i = 0; i != m; ++i)
    {
        delete[] arr_2[i];
    }
    delete[] arr_2;
}

