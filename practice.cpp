// 
#include <iostream>
#include <vector>
using namespace std;
bool isvalid(vector<int> &arr, int n, int m, int maximumallowedpages)
{
    int students = 1, pages = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] >= maximumallowedpages)
        {
            return false;
        }
        if (pages + arr[i] <= maximumallowedpages)
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
        if (isvalid(arr, n,m, mid)) // left
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
    vector<int> arr = {15,17,20};
    int n = 3, m = 2;
    cout << allocation(arr, n, m) << endl;
    return 0;
}
