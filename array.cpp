#include <iostream>
#include <vector>
using namespace std;

int singlenumber(vector<int>&num){
  int ans = 0 ;
  for (int val : num)
  {  ans = ans^val;

    
  }
  return ans ;

}
int main()
{ 
    int arr[6] = {1, 3, 5, 67, 75, 56};
    int size = 6;
    
   
  vector<int> vec = {3, 4, 5};
  vec.push_back(23);
  vec.push_back(34);
  vec.push_back(90);
  vec.pop_back();
  cout << "size= " << vec.size() << endl;
  cout<< vec.back()<<endl;
  cout<< vec.front()<< endl;
  cout<< vec.at(1)<< endl;
  for (int i : vec)
  {
    cout << i << endl;
  }
 
   int n =5;
int arr[] = {1,3,4,5,6,6,7};
int start = 0, end = start;
for (int start = 0; start < n ; start++)
{
    for (int end  = start; end < n; end++)
    {
        for(int i = start; i <=end ;i++){
            cout<< arr[i];
        }
        cout<< " ";
    }
    cout<< endl;
}


    

  return 0;
}
