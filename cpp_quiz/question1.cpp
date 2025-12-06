#include <iostream>
using namespace std;



int main() {

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


        



