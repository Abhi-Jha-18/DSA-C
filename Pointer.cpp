#include <iostream>
using namespace std;


int main(){
    int arr[] = {1,2,3,4,5};
    int *ptr = arr;
    cout<< *(ptr+1) << endl;
    cout<< *(ptr+3) << endl;
    ptr++;
    cout << *ptr <<endl;


    
  
  
 
   return 0;
}
