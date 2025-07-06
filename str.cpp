#include <iostream>
using namespace std;
bool ispalindrome(string str)
{

    int strt = 0, end = str.length() - 1;
    while (strt <= end)
    {
        if (str[strt] != str[end])
        {
            return false;
        }
    }
    return true;
}
int main()
{
    string str = "my name is anthony";
    // int strt = 0, end = str.length() - 1;
    // string str = "abhishek jha";
    // getline(cin,str);
    // cout<< "output : " << str <<endl;
    // f
    // reverse a string.
    // while(strt <= end){
    // swap(str[strt],str[end]);
    // strt++;
    // end--;
    // }
    // for (int i = 0; i <str.length(); i++)
    // {
    //     cout << str[i] << " ";
    // }
    // cout<< endl;
    if (ispalindrome(str))
    {
        cout << "yes it is a palindrome" << endl;
    }
    else
    {
        cout << "string is not a palindrome" << endl;
    }

    return 0;
}
