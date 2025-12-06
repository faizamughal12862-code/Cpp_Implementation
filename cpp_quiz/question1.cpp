#include <iostream>
using namespace std;



int main() {

    // Write a program for a subscription-based video service. 
    // Read N users and the monthly fee for each user. If fee > 1000 mark the user as “Premium”.
    // Print total revenue and number of premium users. Use variables, loops, input/output and conditions

    int user;

    cout<< "Enter total numbers of users: ";
    cin>> user;

    int fee;
    int count=0;
    double rev=0;


    for (int i=0; i< user ;i++)
    {
        cout<< "Enter monthly fee for user " << i+1 << ": ";
        cin>> fee;

        rev += fee;
        if (fee> 1000)
        {
            cout<< "User " << i+1 << " is preminum user" << endl;
            count++;
        }

    }
    cout<< "Total revenue from " << user << " users is " << rev << endl;
    cout<< "Total number of premium users are: " << count << endl;

    return 0;
}


        




