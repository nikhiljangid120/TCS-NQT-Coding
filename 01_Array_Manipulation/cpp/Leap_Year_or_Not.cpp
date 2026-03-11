/*
 * Problem Name: Leap Year Or Not
 * 
 * Problem Description:
 * Write a C++ program to solve the "Leap Year Or Not" problem.
 */

#include <iostream>
using namespace std;

int main() {
    int year;
    cout<<"Enter the year to check if it's a leap year or not? ";
    cin>>year;
    if(year%400==0) cout<<year<<" is a leap year!";
    else if(year%4 == 0 && year%100 != 0){
        cout<<year<<" is a leap year!";
    }
    else cout<<year<<" is not a leap year!";
    return 0;
}
