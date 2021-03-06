#include <iostream>
#include <string>
#include <iomanip>
#include <fstream>
#include <Windows.h>
#include <cstdlib>
#include <cstdio>

using namespace std;

#include "accounts.h"
#include "date.h"
#include "events.h"
#include "apply_society.h"
#include "society.h"
#include "admin_menu.h"
#include "visitor_menu.h"
#include "member_menu.h"
#include "register&login.h"

int main()
{
    string choice;
    while (1)
    {
        system("cls");
        cout << "Welcome to Nuces Society Management System";
        cout << "\nPress\n"
             << "   1. Log In or Register\n"
             << "   2. Continue as Guest\n"
             //  << "   3. Continue as Admin\n"
             << "   0. Exit\n"
             << "Your Input: ";
        cin >> choice;
        if (choice == "0")
        {
            exit(EXIT_SUCCESS);
        }
        else if (choice == "1")
        {
            system("cls");
            login_menu();
        }
        else if (choice == "2")
        {
            cout << "Welcome Visitor!";
            visitor_menu();
        }
        else if (choice == "3")
        {
            cout << "Welcome Admin!";
            admin_menu();
        }
    }
    return 0;
}