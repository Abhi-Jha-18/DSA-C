#include <iostream>
#include <vector>
using namespace std;
int recbinaryfinder(vector<int>arr,int target,int st, int end){
    int n = arr.size();
    if (st <= end)
    {
        int mid = st + (end - st )/2 ;
        if (target > arr[mid])
        {
            return recbinaryfinder(arr,target, mid+1,end);
        }
        else if (target < arr[mid])
        {
            return recbinaryfinder(arr,target,st,mid -1);
        }
        else {
            return mid;
        }
        
    }

    return -1;
}
int main()
{
  vector<int> arr1 = {1, 2, 4, 5, 6, 7, 8, 7}; // even
    int target1 = 8;
   cout << recbinaryfinder(arr1,target1,0,7) << endl;
    vector<int> arr2 = {1, 2, 4, 5, 6, 7, 63}; // odd
    int target2 = 7;
    cout << recbinaryfinder(arr2, target2,0,6) << endl;
    
    return 0;
}
