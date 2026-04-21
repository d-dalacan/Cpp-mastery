#include <iostream>
using namespace std;

int main() {

     //program that prints all even numbers between 1 and 20 using a for loop.

    // for (int i = 1; i <= 20; i++) {

    //     if (i % 2 == 0) {
    //         cout <<i<<endl;
    //     }
    // }


    //Write a program using while loop that keeps asking the user to 
    //enter a number, adds them all up, and stops when the user enters -1. Then prints the total.

    // int num;
    // int sum = 0;

    // cout<< "Enter a number to add: ( -1 to stop)";
    // cin >>num;

    // while (num != -1) {
    //     sum += num;
    //     cout<< "Enter a number to add: ( -1 to stop)";
    //     cin >>num;
    // }

    //     cout << "The total sum is: " << sum;
    
    //     return 0;

        //Write a program using switch that takes a number 1-7 and prints the corresponding day of the week


    // int num = 0;

    // cout << "Enter a number between 1 and 7 to get the corresponding day of the week: ";
    // cin >> num;

    // switch (num) {
    //     case 1:
    //         cout <<"Monday";
    //         break;
    //     case 2:
    //         cout <<"Tuesday";
    //         break;
    //     case 3:
    //         cout <<"Wednesday";
    //         break;
    //     case 4:
    //         cout <<"Thursday";
    //         break;
    //     case 5:
    //         cout <<"Friday";
    //         break;
    //     case 6:
    //         cout <<"Saturday";
    //         break;
    //     case 7:
    //         cout <<"Sunday";
    //         break;
    //     default:
    //         cout <<"Invalid input, please enter a number between 1 and 7.";
    // };
    

    // Write a program using do while that prints numbers from 10 down to 1.
    // int num = 10;

    // do
    // {
    //    cout<<num<<endl;
    //    num--;
    // } while (num > 0);
    
    // Write a program that takes a score from the user and prints the grade — A for 70 and above, B for 60-69, C for 50-59, F for below 50
    // int score;

    // cout << "Enter a score to get the corresponding grade: ";
    // cin >> score;

    // if (score >= 70) {
    //     cout <<"Grade: A";
    // } else if (score >= 60) {
    //     cout <<"Grade: B";
    // } else if (score >= 50) {
    //     cout <<"Grade: C";
    // } else {
    //     cout <<"Grade: F";
    // }


    int num;

    cout<<"Enter a number to print the multiplication table";
    cin>>num;


    for(int i = 1; i <= 10; i++) {

        int val = num*i;

        if (val % 3 == 0 && val % 5== 0 ) {
            cout<<num<<" X "<<i<< " = "<<"FizzBuzz"<<endl;

        }else if (val % 3 == 0) {
            cout<<num<<" X "<<i<< " = "<<"Fizz"<<endl;

        }else if (val % 5 == 0) {
            cout<<num<<" X "<<i<< " = "<<"Buzz"<<endl;

        }else {
            cout<<num<<" X "<<i<< " = "<<val<<endl;
        }
    }


    return 0;

}
