#include <iostream>

using namespace std;

int main()
{
    int balance = 10000; // Default balance
    int pin = 0000; // Default pin
    int attempts = 0; // Keeps track of the number of attempts
    
    while (true) // Main program loop
    {
        int choice;
        cout << "Welcome to the Mobile Banking System" << endl;
        cout << "1. Authenticate" << endl;
        cout << "2. Reset/Change Pin" << endl;
        cout << "3. Check Balance" << endl;
        cout << "4. Send Money" << endl;
        cout << "5. Exit" << endl;
        cout << "Enter your choice: ";
        cin >> choice;
        
        switch (choice)
        {
            case 1:
                int input_pin;
                cout << "Enter your PIN: ";
                cin >> input_pin;
                
                if (input_pin == pin)
                {
                    cout << "Authentication successful" << endl;
                }
                else
                {
                    cout << "Invalid PIN" << endl;
                    attempts++;
                    if (attempts >= 3)
                    {
                        cout << "You have exceeded the maximum number of attempts. Exiting program." << endl;
                        return 0;
                    }
                }
                
                break;
                
            case 2:
                int new_pin;
                cout << "Enter your new PIN: ";
                cin >> new_pin;
                
                pin = new_pin;
                cout << "PIN changed successfully" << endl;
                
                break;
                
            case 3:
                cout << "Your balance is: " << balance << endl;
                
                break;
                
            case 4:
                int amount;
                cout << "Enter the amount to send: ";
                cin >> amount;
                
                if (amount <= balance)
                {
                    balance -= amount;
                    cout << "Transaction successful" << endl;
                    cout << "New balance: " << balance << endl;
                }
                else
                {
                    cout << "Insufficient funds" << endl;
                }
                
                break;
                
            case 5:
                cout << "Exiting program." << endl;
                return 0;
                
            default:
                cout << "Invalid choice" << endl;
                break;
        }
    }
    
    return 0;
}
