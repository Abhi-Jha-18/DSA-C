// #include<iostream>
// #include<vector>
// using namespace std;
// vector<int> pairsum(vector<int>&nums, int target){
//   int n = nums.size();
//    vector<int>ans;

//   for (int i = 0; i < n; i++)
//   {
//     for (int j = 0; j <n; j++)
//     {
//        if(nums[i] + nums[j] == target){
//         ans.push_back(i);
//         ans.push_back(j);
//         return ans;
//        }

//     }
//   }
//   return ans;
// }
// int main(){

//   vector<int>nums= { 2,9,14,46,75};
//   int target = 60;
//   vector<int>ans = pairsum(nums,target);
//   cout << ans[0] <<  " " << ans[1] << endl ;
//   return 0 ;

// }
// #include <iostream>
// #include <vector>
// using namespace std;
// vector<int> pairsumbrute(vector<int> nums, int target)
// {
//   vector<int>ans;
//   int n = nums.size();
//   int i = 0, j = n-1;
//   while (i < j)
//   {
//     int pairsumbrute = nums[i] + nums[j];
//     if (pairsumbrute > target)
//     {
//      j--;
//     }
//     else if (pairsumbrute > target)
//     {
//       i++;
//     }
//     else
//     {
//       ans.push_back(i);
//       ans.push_back(j);
//       return ans;
//     }
//   }
//   return ans;
// }
// int main()
// {
//    vector<int>nums= { 2,9,14,46,75};
//   int target = 121;

//    vector<int>ans = pairsumbrute(nums,target);
//    cout << ans[0] <<  " " << ans[1] << endl ;
//    return 0 ;

  
// }
