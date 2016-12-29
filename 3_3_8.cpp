#include <iostream>
using namespace std;

int main() {
    int m, n, p, q;
    typedef int *ptrInt;

    cout << "Create the first array: " << endl;
    cin >> m >> n;
    ptrInt *arr_1 = new ptrInt[m];
    for (int i = 0; i != m; ++i) {
        int *i_arr = new int[n];
        arr_1[i] = i_arr;
    }
    for (int i = 0; i != m; ++i) {
        for (int j = 0; j != n; ++j)
            cin >> arr_1[i][j];
    }
    cout << "Create the second array: " << endl;
    cin >> p >> q;
    ptrInt *arr_2 = new ptrInt[p];
    for (int i = 0; i != p; ++i) {
        int *i_arr = new int[q];
        arr_2[i] = i_arr;
    }
    for (int i = 0; i != p; ++i) {
        for (int j = 0; j != q; ++j)
            cin >> arr_2[i][j];
    }
    cout << "The mult of two arraies: " << endl;
    if (n == p) {
        ptrInt *arr = new ptrInt[m];
        for (int i = 0; i != m; ++i) {
            int *i_arr = new int[q];
            arr[i] = i_arr;
        }
        for (int i = 0; i != m; ++i) {
            for (int j = 0; j != q; ++j) {
                arr[i][j] = 0;
                for (int k = 0; k != n; ++k)
                    arr[i][j] += arr_1[i][k] * arr_2[k][j];
            }
        }

        for (int i = 0; i != m; ++i) {
            for (int j = 0; j != q; ++j)
                cout << arr[i][j] << " ";
            cout << endl;
        }
        for (int i = 0; i != m; ++i) {
            delete[] arr[i];
        }
        delete[] arr;
    } else {
        cout << "Can't mul!";
    }


    for (int i = 0; i != m; ++i) {
        delete[] arr_1[i];
    }
    delete[] arr_1;
    for (int i = 0; i != p; ++i) {
        delete[] arr_2[i];
    }
    delete[] arr_2;
}