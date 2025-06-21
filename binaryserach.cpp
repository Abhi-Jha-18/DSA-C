#include <iostream>
using namespace std;
#include<vector>
int binarysearch(vector<int>&nums,int target){
    int n = nums.size();
    int mid = 0;
    int strt = 0,end = n-1;
    while(strt <= end){
        mid = (strt+end)/2;
        if(target > nums[mid]){
            strt = mid+1;

            
        }
        else if(target < nums[mid]){
            end = mid-1;

        }
        else{
         return mid;
        }
        
    }return -1;
  

}
int main()
{ vector<int> arr1 = {1,2,4,5,6,7,8,7}; //even
int target1 =8;
cout << binarysearch(arr1,target1) << endl;
 vector<int> arr2 = {1,2,4,5,6,7,8}; //odd
 int target2 = 5;
 cout << binarysearch(arr2,target2) << endl;
 
   return 0;
}
