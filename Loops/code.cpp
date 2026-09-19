#include <iostream>
using namespace std;

int main()
{

    // While Loop
    // int i = 1;
    // int n = 20;
    // while(i <= n  ){
    //  cout << i << " ";
    //  i++;
    // }

    // int i = 1;
    // int sum = 0;
    // int n = 50;
    // while(i <= n){
    //      i++;
    //     sum += i;

    // }
    // cout << "sum = " << sum;

    // Sum of odd numbers from 1 to N using while loop

    // int n = 10;
    // int i = 1;
    // int sum = 0;
    // while(i <= n){
    //     if(i % 2 != 0){
    //         sum += i;
    //     }
    //      i++;
    // }
    // cout << "sum of odd numbers are : " << sum ;

    // int i = 1;
    // int n = 10;
    // int sum = 0;
    // while(i <= n){
    //     if(i % 2 == 0){
    //         sum += i;
    //     }
    //     i++;
    // }
    // cout << "sum of even numbers are : " << sum;

    // for loop

    // int n = 10;
    // for(int i = 1; i <= n; i++ ){
    //     cout << i << " ";
    // }

    // int n = 50;
    // int sum = 0;
    // for(int i = 1; i <= n; i++){
    //     sum +=i;
    //     if(i == 5){
    //         break;
    //     }
    // }
    // cout << sum;

    // Sum of all Odd numbers

    // int n = 5;
    // int sum = 0;
    // for(int i = 1; i <= n; i++){
    //     if(i % 2 != 0){
    //         sum += i;
    //     }

    // }
    // cout << sum;

    // solve the same problem with while loop
    // also solve the sum of even numbers 1 to n

    // int n = 10;
    // int sum = 0;
    // for(int i = 1; i <= n; i++){
    //      if(i % 2 == 0){
    //         sum += i;
    //      }
    //      cout << "sum of even numbers are : " << sum << endl ;
    // }
    // cout << "sum of even numbers are : " << sum ;

    // do while loop

    // int n = 10;
    // int i = 0;
    // do{
    //     cout << i << " ";
    //     i++;
    // }while(i <= 10);

    // Check the number is prime or not

    // int n = 10;
    // bool isPrime = true;

    // for(int i = 2; i <=n ; i++){
    //     if (n % i == 0){
    //         isPrime = false;
    //         break;
    //     }
    // };
    // if(isPrime == true){
    //      cout << "The number is Prime";
    // }
    // else{
    //         cout << "The number is not Prime";
    //      }

    // Nested loop

    int n = 20;

    for (int i = 1; i <= n; i++)
    {
        int m = 10;
        for (int j = 1; j <= m; j++)
        {
            cout << "*";
        }
        cout << endl;
    }
    return 0;
}