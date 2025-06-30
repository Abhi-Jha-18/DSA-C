#include <iostream>
using namespace std;
void insertivesort(int arr[], int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        int crr = arr[i];
        int previous = i - 1;
        while (previous >= 0 && arr[previous] > crr)
        {
            arr[previous+1] = arr[previous];
            previous--;
        }
        arr[previous+1] = crr; // placing the current in its correct position
    }
}
void printarray(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}
int main()

{
    int n = 5;
    int arr[] = {1, 4, 6, 8, 9};
    insertivesort(arr, n);
    printarray(arr, n);

    return 0;
}
