#include <iostream>
#include <vector>
using namespace std;
// void reverse(int arr[], int size)
// {
//   int start = 0, end = size - 1;
//   for (int i = 0; i < size; i++)
//   {
//     while (start <= end)
//     {
//       int temp = arr[start];
//       arr[start] = arr[end];
//       arr[end] = temp;
//       start++;
//       end--;
//     }
//   }
// }

//   int arr[10] = {1, 4, 5, 6, 4, 3, 4, 0};
//   int size = 8;
//   cout << "original arrray" << endl;

//   for (int i = 0; i < size; i++)
//   {
//     cout << arr[i] << " ";
//   }
//   cout << endl;
//   cout << "reverse arrray" << endl;
//   reverse(arr, size);

//   for (int i = 0; i < size; i++)
//   {
//     cout << arr[i] << " ";
//   }
//   cout << endl;
// int product(int arr[], int size)
// {
//   int mult = 1;
//   for (int i = 0; i < size; i++)
//   {

//     mult = mult * arr[i];
//   }
//   return mult;
// }
// int sum(int arr[], int size)
// {
//   int add = 0;
//   for (int i = 0; i < size; i++)
//   {
//     add = add + arr[i];
//   }
//   return add;
// }
int singlenumber(vector<int>&num){
  int ans = 0 ;
  for (int val : num)
  {  ans = ans^val;

    
  }
  return ans ;

}
int main()
{
  //   int arr[6] = {1, 3, 5, 67, 75, 56};
  //   int size = 6;
  //   sum(arr, size);
  //   product(arr, size);
  //   cout << sum(arr, size) << endl;
  //   cout << product(arr, size) << endl;
  // vector<int> vec = {3, 4, 5};
  // vec.push_back(23);
  // vec.push_back(34);
  // vec.push_back(90);
  // vec.pop_back();
  // cout << "size= " << vec.size() << endl;
  // cout<< vec.back()<<endl;
  // cout<< vec.front()<< endl;
  // cout<< vec.at(1)<< endl;
  // for (int i : vec)
  // {
  //   cout << i << endl;
  // }
 
//    int n =5;
// int arr[] = {1,3,4,5,6,6,7};
// int start = 0, end = start;
// for (int start = 0; start < n ; start++)
// {
//     for (int end  = start; end < n; end++)
//     {
//         for(int i = start; i <=end ;i++){
//             cout<< arr[i];
//         }
//         cout<< " ";
//     }
//     cout<< endl;
// }


    

  return 0;
}
