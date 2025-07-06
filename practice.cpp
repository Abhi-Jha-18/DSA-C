// #include <iostream>
// using namespace std;
// bool isalphanumeric(char ch)
// {
//     if ((ch >= 0 && ch <= 9) || (ch <= 'a' && ch <= 'z'))
//     {
//         return true;
//     }
   
    
//         return false;
    
// }
// bool ispalindrome(string str)
// {
//     int n = str.size();
//     int strt = 0, end = n - 1;
//     while (strt < end)
//     {
//         if (!isalphanumeric(str[strt]))
//         {
//             strt++;
//             continue;
//         }
//         if (!isalphanumeric(str[end]))
//         {
//             end--;
//             continue;
//         }
//         if(tolower(str[strt]) != tolower(str[end]))
//         {
//             return false;
//         }
//     }
//     return true;
// }
// int main()
// {
//     string str = "racecar";
//     if (ispalindrome(str))
//     {
//         cout << "The string is palindrome" << " ";
//     }
//     else
//     {
//         cout << "thr string is not palindrome" << endl;
//     }

//     return 0;
// }
