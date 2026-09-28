#include <iostream>
using namespace std;

// int sum(int a, int b)
// {
//     int s = a + b;
//     return s;
// }
// Minimum of two numers

// int min(int a, int b) // Parameters 
// {
//     // int m = a < b;
//     if (a < b)
//     {
//         return a;
//     }
//     else
//     {
//         return b;
//     }
// }

// calculate sum of 1 to n;

// int sumN(int n){
//     int sum = 0;
//     for(int i = 0; i< n; i++){
//        sum += i;
//     }
//     return sum;
// }

// write again the sum 1 to N for better undertand of logic

// void sumN(int n){
//     int sum = 1;
//     for(int i = 1; i<=n ; i++){
//         sum *= i;
//     }
//     // return sum;
//     cout << sum;

// }

// write function for n factorial 
// int factN(int n){
//     int fact = 1;
//      for(int i = 1; i<=n; i++){
//        fact = fact * i;
//      }
//      return fact;
// }

//  Pass by Value 

// int sum(int a, int b){
//     a = 5 + 10;
//     b = 10 + 10;
//     return a + b;
// }

// void changeX(int x){
//     x = 2*x;
//     cout << "x= " << x << endl;
// }

// adding digits of a number
// int addDigits(int num){
//     int digitsum = 0;
//     while(num > 0){
//         int lastDigit = num % 10;
      
//         num /=10;
//         cout << num << endl;
        
//     }
//     return digitsum;
// }

// Calculate nCr  binomial cofficient 
int factorial(int n){
    int fact = 1;
    for(int i = 1; i<=n; i++){
        fact *= i;
    }
    return fact;
}

int nCr(int n, int r){
    int fact_n = factorial(n);
    int fact_r = factorial(r);
    int fact_nmr = factorial(n-r);

    return fact_n / (fact_r * fact_nmr);
}

int main()
{
    // cout<< sum(5, 10) << endl;
    // cout << min(4, 5) << endl;  //arguments 
    // cout << sumN(5) << endl;
    // cout << sumN(10) << endl;
    // sumN(5);
    // cout << factN(4);

    // int a = 3; 
    // int b = 4;

    // cout << sum(a , b) <<endl;
    // cout << a << endl;
    // cout << b << endl;
    // cout << a + b << endl;
    // int x = 5;
    // changeX(x);

    // cout << "x= " << x << endl;
    // cout << "sum of digits= " << addDigits(2356) << endl;
    int n = 8; 
    int r = 2;

    cout << "factorial= " << nCr(6,3);


    return 0;
}