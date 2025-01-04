
#include <iostream>
#include "WaitingList.h"
#include "Reservation.h"
#include "Customers.h"
using namespace std;




int main()
{
    Reservation reservation;
    int available_tickets = 2;

    cout << "\nWelcome to our Book tickets system\n\n" 
        "[1] ticket reservation\n"
        "[2] view your reservation\n"
        "[3] Inquire about the number of available tickets\n"
        "[4] cancellation of reservation\n"
        "[5] your waiting list \n"
        "[6] Exit \n";


    bool isExit = false;
    int option{ 0 };

    WaitingList list;

    while (!isExit)
    { 
        cin >> option;   
        switch (option)
        {
        case 1:
        {
            cout << "enter customer name\n";
            char choice;
            int id{ 0 };
            do {
                Customers user;
                cin.ignore();
                getline(cin, user.name);
                user.customer_number = ++id;

                    
                if (id <= available_tickets)
                {
                    reservation.insertFirst(user);

                }
                else {
                    list.enqueue(user);
                }
              

                cout << "Do you want to add another customer? (y/n): ";
                cin >> choice;
                    
            } while (choice == 'y' || choice == 'Y');

            cout << "\nYour reserver tickets for " << reservation.size() << " customers \n";
            reservation.display();

            cout << "\nYour queue list\n";
            list.display();


        }
            break;
        case 2:
            cout << "\nyour waiting list  " << reservation.size() << " customers \n";
            reservation.display();
            break;
        case 3:
            cout << "the number of available tickets are "<<available_tickets << endl;
            break;

        case 6:
            cout << "thanks for your time" << endl;
            isExit = true;
                break;
        }


    }





    



}

