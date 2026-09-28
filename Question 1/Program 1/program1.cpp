#include <iostream>
using namespace std;

class Circle
{
    float radius, x, y;

public:

    Circle()
    {
        radius = 0;
        x = 0;
        y = 0;
    }

    Circle(float xAxis, float yAxis, float r)
    {
        x = xAxis;
        y = yAxis;
        radius = r;
    }
 
    void setValues()
    {
        do
        {
            cout << "Enter the value of Radius = ";
            cin >> radius;

            if (radius < 0)
            {
                cout << "Please enter a positive value.\n";
            }

        } while (radius < 0);

        cout << "Enter the value of X axis = ";
        cin >> x;

        cout << "Enter the value of Y axis = ";
        cin >> y;
    }

    float area()
    {
        float result = 3.14159 * radius * radius;
        return (int)(result * 10 + 0.5) / 10.0;
    }

    float circumference()
    {
        float result = 2 * 3.14159 * radius;
        return (int)(result * 10 + 0.5) / 10.0;
    }

    void print()
    {
        cout << "\nCircle Information\n";
        cout << "------------------\n";
        cout << "X Axis          : " << x << endl;
        cout << "Y Axis          : " << y << endl;
        cout << "Radius          : " << radius << endl;
        cout << "Area            : " << area() << endl;
        cout << "Circumference   : " << circumference() << endl;
    }
};

int main()
{
    Circle c1;

    c1.setValues();
    c1.print();

    return 0;
}
