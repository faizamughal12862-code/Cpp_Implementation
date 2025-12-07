#include <iostream>
using namespace std;

int main() {
    

    // Write a program for an Internet café billing N customers. Read minutes used for each. Charge 4 per minute. If minutes > 120 apply 8% discount for that customer.   Print bill per customer and total.

    int customer;
    double min;

    double total=0;

    cout<< "Enter NUmber of customers: ";
    cin>> customer;

    for(int i=0;i<customer; i++)
    {
        cout<< "Enter minutes used by customer " << i+1 << " : ";
        cin>> min;

        double cost = min*4;

        if(min> 120)
        {
            double discount = ((min*4)*8)/100; 
            cost = cost- discount;
        }

        cout<< "Bill of customer " << i+1 << " is: " << cost << endl;
        total+= cost;

    }
    cout<< "Total bill of all " << customer << " customer is: " << total << endl;
    return 0;
}
