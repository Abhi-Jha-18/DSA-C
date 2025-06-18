#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int n = 5;
    int maxsum = INT32_MIN;
    int arr[] = {1, 3, 4, 5, 6, 6, 7};
    int start = 0, end = start;
    for (int start = 0; start < n; start++)
    {   int crrsum = 0;
        for (int end = start; end < n; end++)
        {
            for (int i = start; i <= end; i++)
            {     crrsum += arr[end];
                maxsum = max(crrsum , maxsum ); 
                cout << arr[i];
            }
            cout << " ";
        }
        cout << endl;
    }
    cout << "the max sum is = " << maxsum << endl;
    return 0;
}
