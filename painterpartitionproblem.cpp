#include <iostream>
#include <vector>
using namespace std;
bool isvalid(vector<int> &arr, int n, int m, int maxtime)
{
    int painters = 1, times = 0;
    for (int i = 0; i < n; i++)
    {
       
        
        if (times + arr[i] <= maxtime)
        {
            times += arr[i];
        }
        else
        {
            painters++;
            times = arr[i];
        }
    }
     return painters <= m;
     
}
int mintime(vector<int> &arr, int n, int m)
{
    int sum = 0,maxval = INT16_MIN;
    for (int i = 0; i < n; i++)
    {
        sum += arr[i];
        maxval = max(maxval ,arr[i]);
    }
    int st = maxval, end = sum, ans = -1;
    while (st <= end)

    {
        int mid = st + (end - st) / 2;
        if (m > n)
        {
            return -1;
        }
        if (isvalid(arr, n, m, mid))
        {
            ans = mid;
            end = mid - 1;
        }
        else
        {
            st = mid + 1;
        }
    }
    return ans;
}
int main()
{
    vector<int> arr = {40, 30, 20, 10};
    int n = 4, m = 2;
    cout << mintime(arr, n, m) << endl;
    return 0;
}
