#include <iostream>
#include <conio.h>
using namespace std;

class ToolBooth
{
    unsigned int totalCars;
    double totalCash;

public:

    // Constructor
    ToolBooth()
    {
        totalCars = 0;
        totalCash = 0.0;
    }

    // For paying car
    void payingCar()
    {
        totalCars++;
        totalCash += 0.50;
    }

    // For non-paying car
    void nonPayingCar()
    {
        totalCars++;
    }

    // Display final result
    void display() const
    {
        cout << "\n========== Toll Booth Report ==========" << endl;
        cout << "Total Cars : " << totalCars << endl;
        cout << "Total Cash : $" << totalCash << endl;
        cout << "=======================================" << endl;
    }
};

int main()
{
    ToolBooth booth;
    char choice;

    cout << "========== Toll Booth System ==========" << endl;
    cout << "P - Paying Car" << endl;
    cout << "N - Non-Paying Car" << endl;
    cout << "ESC - Exit" << endl;
    cout << "=======================================" << endl;

    do
    {
        choice = getch();

        if (choice == 'P' || choice == 'p')
        {
            booth.payingCar();
            cout << "Paying car recorded." << endl;
        }
        else if (choice == 'N' || choice == 'n')
        {
            booth.nonPayingCar();
            cout << "Non-paying car recorded." << endl;
        }
        else if (choice != 27)
        {
            cout << "Invalid choice! Press P, N or ESC." << endl;
        }

    } while (choice != 27);

    booth.display();

    return 0;
}
