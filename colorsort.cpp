//  dutch  national flag algorithm 
#include <iostream>
#include <vector>
using namespace std;
void sortColors(vector<int> &a, int n)
{

    int mid = 0, low = 0, high = n - 1;
    while (mid <= high)
    {
        if (a[mid] == 0)
        {
            swap(a[low], a[mid]);
            mid++, low++;
        }
        else if (a[mid] == 2)
        {
            swap(a[high], a[mid]);
            high--;
        }

        else
        {
            mid++;
        }
    }
}
int main()
{
    int n = 6;
    vector<int> a = {2, 0, 2, 1, 1, 0};
    sortColors(a, n);
    for (int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
        
    }
    cout << endl;

    return 0;
}
