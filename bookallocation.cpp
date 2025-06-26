#include <iostream>
#include <vector>;
using namespace std;
bool isvalid(vector<int> &arr, int n, int m, int maximumallowedpages ){
    int students = 1, pages = 0 ;
    int m = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] > maximumallowedpages)
        {
            return false;
        }
        if(pages + arr[i]){
            pages += arr[i];
        }
        else
        {
            students ++;
            pages  = arr[i];
        }
        
    }
    return students > m ? false : true;
}
int allocation(vector<int> &arr, int n, int m)
{
     int sum = 0;
    if (m > n)
    {
        return -1;
    }

    for (int i = 0; i < n; i++)
    {
       
        sum += arr[i];
    }
    int st = 0 , end = sum , ans = -1;
    while (st <= end)
    {
        int mid = st + (end - st)/2;
        if (isvalid(arr,n,m,mid))//left
        {
            ans  =mid;
            end  = mid-1;
        }
        else{//right
            st = mid +1;
        }
        return -1;
    }
    
}
    int main()
    {
         vector<int> arr = {1,2,3,4};
         int  n = 4 , students = 2;
         cout<< allocation(arr,n,m) << endl;
        return 0;
    }
