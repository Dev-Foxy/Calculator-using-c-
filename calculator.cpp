#include <iostream>

using namespace std;

void addition(int a, int b)
{
    cout << a << "+" << b << "=" << a + b << endl;
}

void subtraction(int a, int b)
{
    cout << a << "-" << b << "=" << a - b << endl;
}

void multipication(int a, int b)
{
    cout << a << "*" << b << "=" << a * b << endl;
}

void divition(int a, int b)
{
    cout << a << "/" << b << "=" << float(a) / float(b) << endl;
}

int main()
{
    int a, b, choice;

    while (true)
    {
        cout << "CALCULATOR" << endl;
        cout << "Choose your option (1-5)" << endl;
        cout << "1. Addition" << endl;
        cout << "2. Subtraction" << endl;
        cout << "3. Multipication" << endl;
        cout << "4. Divition" << endl;
        cout << "5. Quit" << endl;

        cin >> choice;

        if (choice == 1)
        {
            cout << "Addition" << endl;
            cout << "Enter 1st no: ";
            cin >> a;
            cout << "Enter 2nd no: ";
            cin >> b;
            addition(a, b);
        }
        else if (choice == 2)
        {
            cout << "Subtraction" << endl;
            cout << "Enter 1st no: ";
            cin >> a;
            cout << "Enter 2nd no: ";
            cin >> b;
            subtraction(a, b);
        }
        else if (choice == 3)
        {
            cout << "Multipication" << endl;
            cout << "Enter 1st no: ";
            cin >> a;
            cout << "Enter 2nd no: ";
            cin >> b;
            multipication(a, b);
        }
        else if (choice == 4)
        {
            cout << "Divition" << endl;
            cout << "Enter 1st no: ";
            cin >> a;
            cout << "Enter 2nd no: ";
            cin >> b;
            divition(a, b);
        }
        else if (choice == 5)
        {
            break;
        }
        else
        {
            cout << "Invalid choice" << endl;
        }
    }

    return 0;
}