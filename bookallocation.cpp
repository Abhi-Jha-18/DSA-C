#include <iostream>
#include <vector>
using namespace std;
bool isvalid(vector<int> &arr, int n, int m, int maximumallowedpages)
{
    int student = 0, pages = 0;
    for (int i = 0; i < n; i++)
    {
        if (pages >= maximumallowedpages)
        {
            return false;
        }
        if (pages + arr[i] <= maximumallowedpages)
        {
            pages += arr[i];
        }
        else
        {
            student++;
            pages = arr[i];
        }
    }
    return student > m ? false : true;
}
int allocation(vector<int> &arr, int n, int m)
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
    int st = 0, end = sum; // range of possible ans
    while (st <= end)
    {
        int mid = st + (end - st) / 2;
        if (isvalid(arr, m, n, mid)) // left
        {
            ans = mid;
            end = mid - 1;
        }
        else // right
        {
            st = mid + 1;
        }
    }
    return ans;
}
int main()
{
    vector<int> arr = {1, 2, 3, 4};
    int n = 4, m = 2;
    cout << allocation(arr, n, m) << endl;
    return 0;
}
