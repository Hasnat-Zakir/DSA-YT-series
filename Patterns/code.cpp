#include <iostream>
using namespace std;
int main()
{

    // int n = 4;

    // for(int i = 1; i <= n; i++){
    //      for(int j = 1; j <= n; j++){
    //         cout << j;
    //      }
    //      cout << endl;
    // }

    // for star pattern

    // int n = 5;
    // for(int i = 1; i <= n; i++){
    //     for(int j = 1; j <= n; j++){
    //         cout << " * ";
    //     }
    //     cout<< endl;
    // }

    // Patterns of characters

    // int n = 4;
    // for (int i = 0; i < n; i++){
    //     char ch = 'A';
    //     for(int j = 0; j < n; j++){
    //         cout << ch << " ";
    //         ch++;
    //     }
    //     cout << endl;
    // }

    // int n = 3;
    // int num = 1;
    // for (int i = 0; i < n; i++){
    //     for(int j = 0; j < n; j++){
    //         cout << num << " ";
    //         num++;
    //     }
    //     cout << endl;
    // }

    // Triangle pattern for stars
    // int n = 4;
    // for(int i = 0; i < n; i++){
    //     for(int j = 0; j < i + 1; j++){
    //         cout << "* ";
    //     }
    //     cout << endl;
    // }

    // int n = 4;
    // char ch = 'A';
    // for(int i = 0; i < n; i++){
    //   for(int j = 0; j < i+1; j++){
    //     cout << ch;
    //     ch++;
    //   }
    //   cout << endl;
    // }

    // int n = 4;
    // int num = 1;
    // for(int i = 0; i < n; i++){
    //     for(int j = 0; j < i+1; j++){
    //         cout<< (i + 1) << " ";
    //         // num+1;
    //     }
    //     cout << endl;
    // }

    // int n = 5;
    // char ch = 'A';
    // for(int i = 0; i < n; i++){
    //     for(int j = 0; j < i + 1; j++){
    //         cout << ch << " ";
    //     }
    //     ch++;
    //     cout << endl;
    // }

    // int n = 4;
    // for(int i = 0; i < n; i++){
    //     for(int j = 1; j <= i+1; j++){
    //         cout << j << " ";
    //     }
    //     cout << endl;
    // }

    // int n = 4;
    // for(int i = 0; i < n; i++){
    //     for(int j = 1; j <= i+1; j++){
    //         cout << j;
    //     }
    //     cout << endl;
    // }

    // int n = 4;
    // int num = 1;
    // for(int i = 0;  i<= n; i++){
    //     for(int j=i+1; j>0 ; j--){
    //         cout<< num << " ";
    //         num++;
    //     }
    //     cout << endl;
    // }
    // int n = 4;
    // char ch = 'A';
    // for(int i = 0;  i<= n; i++){
    //     for(int j=i+1; j>0 ; j--){
    //         cout<< ch << " ";
    //         ch++;
    //     }
    //     cout << endl;
    // }
    // int n = 4;
    // int num = 1;
    // for (int i = 0; i < n; i++)
    // {
    // for space
    //         for (int j = 0; j < i; j++)
    //         {
    //             cout << " ";
    //         }
    //         // for nums
    //         for (int j = 0; j < n - i; j++)
    //         {
    //             cout << (i + 1);
    //         }
    //         cout << endl;
    //     }

    // Pyramid Pattern

    // int n = 5;

    // for (int i = 0; i < n; i++)
    // {
    //     // for spaces
    //     for (int j = 0; j < n - i - 1; j++)
    //     {
    //         cout << " ";
    //     }
    //     // for nums1
    //     for (int j = 1; j <= i + 1; j++)
    //     {
    //         cout << j;
    //     }
    //     // for nums2
    //     for (int j = i; j > 0; j--)
    //     {
    //         cout << j;
    //     }
    //     cout << endl;
    // }
    // return 0;

    // Hollow Diamond pattern
    // int n = 4;
    // int m = 3;
    // char star = '*';

    // for (int i = 0; i < n; i++)
    // {
    //     // for spaces
    //     for (int j = 0; j < n - i - 1; j++)
    //     {
    //         cout << " ";
    //     }
    //     cout << star;
    //     // spaces
    //     if (i != 0)
    //     {
    //         for (int j = 0; j < 2 * i - 1; j++)
    //         {
    //             cout << " ";
    //         }
    //         cout << star;
    //     }
    //     cout << endl;
    // }
    //   Bottom side
    // for(int i = 0; i<n-1 ; i++){
    //         for (int j = 0; j < i + 1; j++)
    //         {
    //             cout << " ";
    //         }
    //         cout << star;
    //         // space
    //          if (i < (n-1) - 1)
    //         {
    //         for (int j = 0; j < 2 * ( (n-1) - i ) -3  ; j++)
    //         {
    //             cout << " ";
    //         }
    //        cout << star;

    //         }
    //         cout<< endl;
    //         }

    // Butterfly Pattern
    int n = 4;

    for (int i = 1; i <= n; i++)
    {
        // upper left side
        for (int j = 1; j <= i; j++)
        {
            cout << "*";
        }
        // upper Middle space
        for (int j = 0; j < 2 * (n - i); j++)
        {
            cout << " ";
        }
        // for upper right stars
        for (int j = 1; j <= i; j++)
        {
            cout << "*";
        }
        cout << endl;

       
    }
    for(int i = 0; i<n; i++){
        // for lower right side
        for (int j = 0; j < n-i ; j++)
        {
            cout << "*";
        }
        
    //     // for lower middle space 
        for(int j= 0; j< 2 * i; j++){
            cout<< " ";
        }
        for (int j = 0; j < n-i ; j++)
        {
            cout << "*";
        }
        cout << endl;
        
    }
   
}