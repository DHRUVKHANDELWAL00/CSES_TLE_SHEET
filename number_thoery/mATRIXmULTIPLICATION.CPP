#include <bits/stdc++.h>
using namespace std;
#define N 101
int arr[N][N], I[N][N];

void mul(int A[][N], int B[][N], int dim)
{
    int res[dim + 1][dim + 1];
    for (int i = 0; i < dim; i++)
    {
        for (int j = 0; j < dim; j++)
        {
            res[i][j] = 0;
            for (int k = 0; k < dim; k++)
            {
                res[i][j] += A[i][k] * B[k][j];
            }
        }
    }
    for (int i = 0; i < dim; i++)
    {
        for (int j = 0; j < dim; j++)
        {
            B[i][j] = res[i][j];
        }
    }
}

void power(int arr[][N], int dim, int n)
{
    for (int i = 0; i < dim; i++)
    {
        for (int j = 0; j < dim; j++)
        {
            if (i == j)
            {
                I[i][j] = 1;
            }
            else
            {
                I[i][j] = 0;
            }
        }
    }
    // for (int i = 0; i < n; i++)
    // {
    //     mul(arr, I, dim); // I=A*I
    // }
    while (n)
    {
        if (n % 2)
        {
            mul(arr, I, dim);
            n--;
        }
        else
        {
            mul(arr, arr, dim);
            n = n / 2;
        }
    }
    for (int i = 0; i < dim; i++)
    {
        for (int j = 0; j < dim; j++)
        {
            arr[i][j] = I[i][j];
        }
    }
}
void printMat(int arr[][N], int dim)
{
    for (int i = 0; i < dim; i++)
    {
        for (int j = 0; j < dim; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
}
int main()
{
    // mat ^3;
    int t;
    cin >> t;
    while (t--)
    {
        int dim, n;
        cin >> dim >> n;
        for (int i = 0; i < dim; i++)
        {
            for (int j = 0; j < dim; j++)
            {
                cin >> arr[i][j];
            }
        }
        power(arr, dim, n);
        printMat(arr, dim);
    }
}