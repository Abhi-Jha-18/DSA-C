#include <iostream>
#include<vector>
using namespace std;
int binarysystem(vector<int>arr,int target){
    int n = arr.size();
    int st = 0, end = n-1;
    while (st <= end)
    {
        int mid = st + (end - st)/2;
        if (target < arr[mid])
        {
            end = mid-1;
        }
        else if (target > arr[mid])
        {
            st = mid+1;
        }
        else{
            return mid;
        }
        
    }return -1;
    

}
int main()
{
    vector<int>arr1 = {1,4,5,6,7,8,9,19};
    int target1 = 19;
    cout << binarysystem(arr1,target1) << endl ;
    vector<int>arr2 = {1,4,5,13,7,8,9};
    int target2= 13;
    cout << binarysystem(arr2,target2) << endl ;
   return 0;
}
