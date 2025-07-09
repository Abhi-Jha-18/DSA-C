#include <iostream>
#include <vector>
using namespace std;
int diagonalsum(int arr[][4], int n)
{
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        // for (int j = 0; j <n  ; j++) // n^2 complexitiy
        // {
        //     if (i == j)
        //     {
        //         sum += arr[i][j];
        //     }
        //     else if (j == n - i - 1)
        //     {
        //         sum += arr[i][j];
        //     }
        // }
        sum += arr[i][i];
        if (i != n - i - 1)
        {
            sum += arr[i][n - i - 1];
        }
    }
    return sum;
}
bool linearsearch(int arr[][3], int rows, int col, int key)
{
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < col; j++)
        {
            if (arr[i][j] == key)
            {
                return true;
            }
        }
    }
    return false;
}
int getmaxrowsum(int arr[][3], int rows, int col)
{
    int maxrowsum = INT32_MIN;
    for (int i = 0; i < rows; i++)
    {
        int rowsum = 0;

        for (int j = 0; j < col; j++)
        {
            rowsum += arr[i][j];
        }
        maxrowsum = max(maxrowsum, rowsum);
    }
    return maxrowsum;
}
int main()
{
    int arr[4][4] = {{1, 2, 3, 4}, {5, 6, 7, 8}, {9, 10, 11, 12}, {13, 14, 15, 16}};
    int rows = 4;
    int col = 4;
    int n = 4;
    vector<vector<int>> mat = {{1, 2, 3}, {4, 5, 6,9,8}, {9, 10, 11}};
    for (int i = 0; i < mat.size(); i++)
    {
        for (int j = 0; j < mat[i].size(); j++)
        {
            cout << mat[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
