#include <iostream>
using namespace std;
int selectionsort(int arr[], int n ){
    for (int i = 0; i < n-1; i++)
    {  int smallestidx = i;
    
        for (int j = i+1; j < n; j++)
        {
            if (arr[j]<arr[smallestidx])
            {
                smallestidx = j;

            }
           
        }
        swap(arr[i],arr[smallestidx]);
     
        
    }
    
}
void printarray(int arr[] , int n ){
   for (int i = 0; i < n ; i++)
   {
      cout << arr[i] << " " ; 
   }
   cout << endl;
}
int main()
{ int n = 5;
    int arr[] = {1,4,2,3,9};
    selectionsort(arr,n);
    printarray(arr,n);
    
   return 0;
}
