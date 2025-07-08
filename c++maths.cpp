#include <iostream>
using namespace std;
int gcd(int a , int b){
    while (a > 0 && b> 0)
    {
       if (a >b)
       {
         a = a % b ;
       }
       else {
        b = b % a;
       }
       
    }
     if(a == 0) return b;
      return a ;
    
}
//armsstrong number
// bool isarmstrong(int n ){ 
//     int copyN = n;
//     int sumOfcube = 0;
//     while(n != 0){
//         int digit = n%10 ;
//         sumOfcube += (digit*digit*digit);
//         n = n/10;
//     }
//     return sumOfcube == copyN;
// }

// 
// void reversenum(int n)
// { int count =0;
//     while (n != 0)
//     {
//         int digit = n % 10;
//         // cout << digit << endl;
//         count++;

//         n = n / 10;
//     }
//     // cout << count << endl;
// }

int main()  
{ cout << gcd(6,90) << endl;
    // int n = 8903;
    // reversenum(n);
    // int n = 153;
    // if (isarmstrong(n))
    // {
    //     cout << "yes this number is an armstrong number" << endl;
    // }
    // else
    // {
    //     cout<< "it is not an  armstorng number"<< endl;
    // }
    
    
  
    return 0;
}
