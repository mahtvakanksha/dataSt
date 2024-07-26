#include <iostream>
#include <string.h>

using namespace std;

int main()
{
    string s = "";
    int r = 3;
    char c = '0' + r;
    cout << c;
    s = s + c;
    // for (int i = s.size(); i >= 0; i--)
    // {
    //     cout << s[i];
    // }
    return 0;
}

// #include <iostream>
// using namespace std;

// int main()
// {
//     cout << "enter:";
//     int n;
//     cin >> n;
//     int i = 1;

//     while (i <= n)
//     {
//         int count = 1;
//         int j = 1;
//         while (j <= 2 * n - 1)
//         {

//             if (((i + j) == n + 1 || (i + j) == 2 * n - 1 || (i + j) == 2 * n + 1) || (i + j) == 3 * n - 1)
//             {

//                 if (count <= i)
//                 {
//                     count++;
//                     cout << i << " ";
//                 }
//                 else
//                     cout << "* ";
//             }
//             else
//                 cout << "* ";
//             j++;
//         }
//         i++;
//         cout << endl;
//     }
//     return 0;
// }

// // #include <string.h>
// // #include <iostream>
// // using namespace std;

// // bool isPalindrome(string &str)
// // {
// //     int left = 0, right = str.length() - 1;
// //     while (left < right)
// //     {
// //         if (!isalnum(str[left])) // checks whether str[left] is alphanumeric or not, if not(condition satisfied, increments left)
// //             left++;
// //         else if (!isalnum(str[right]))
// //             right--;
// //         else if (tolower(str[left]) != tolower(str[right]))
// //             return false;
// //         else
// //         {
// //             left++;
// //             right--;
// //         }
// //         return true;
// //     }
// // }

// // int main()
// // {
// //     int i = 0;
// //     string str = "heleh";
// //     int n = str.length();
// //     // cout << n;
// //     // cout << str[i] << " " << str[n - 1 - i];
// //     bool ans = isPalindrome(str);
// //     (ans == true) ? (cout << "Palindomic") : (cout << "not");
// //     return 0;
// // }