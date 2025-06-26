//
#include <iostream>
using namespace std;
#include <vector>
bool isvalid(vector<int> &arr, int n, int m, int maxallowedpages)
{
    int students = 1, pages = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] > maxallowedpages)
        {
            return false;
        }
        if (pages + arr[i] <= maxallowedpages)
        {
            pages += arr[i];
        }
        else
        {
            students++;
            pages = arr[i];
        }
    }
    return students > m ? false : true;
}
int allocation(vector<int> &arr, int m, int n)
{
    if (m > n)
    {
        return -1;
    }
    int sum = 0;

    for (int i = 0; i < n; i++)
    {
        sum += arr[i];
    }
    int ans = -1;
    int st = 0, end = sum; // range of possible answers
    while (st <= end)
    {
        int mid = st + (end - st) / 2;
        if (isvalid(arr, n, m, mid)) // left
        {
            ans = mid;
            end = mid -  1;
        }
        else
        {
            st = mid + 1; // right
        }
    }
    return ans;
}
int main()
{
    vector<int> arr = {15,17,20};
    int n = 4, m = 2;
    cout << allocation(arr, n, m) << endl;
    return 0;
}
