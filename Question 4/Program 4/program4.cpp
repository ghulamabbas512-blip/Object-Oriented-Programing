#include <iostream>
using namespace std;

class Angle
{
    int degrees;
    float minutes;
    char direction;

    bool valid(char d)
    {
        return d=='N' || d=='S' || d=='E' || d=='W';
    }

public:
    Angle()
    {
        degrees=0;
        minutes=0;
        direction='N';
    }

    Angle(int d, float m, char dir)
    {
        if(d>=0 && d<=180 && m>=0 && m<60 && valid(dir))
        {
            degrees=d;
            minutes=m;
            direction=dir;
        }
        else
        {
            degrees=0;
            minutes=0;
            direction='N';
        }
    }

    void input()
    {
        do
        {
            cout<<"Enter degrees (0-180): ";
            cin>>degrees;
        }while(degrees<0 || degrees>180);

        do
        {
            cout<<"Enter minutes (0-59.99): ";
            cin>>minutes;
        }while(minutes<0 || minutes>=60);

        do
        {
            cout<<"Enter direction (N/S/E/W): ";
            cin>>direction;
        }while(!valid(direction));
    }

    void display()
    {
        cout<<degrees<<" degrees "<<minutes<<"' "<<direction<<endl;
    }
};

int main()
{
    Angle latitude, longitude;

    cout<<"Enter Latitude:\n";
    latitude.input();

    cout<<"\nEnter Longitude:\n";
    longitude.input();

    cout<<"\nStored Coordinates:\n";
    cout<<"Latitude: ";
    latitude.display();

    cout<<"Longitude: ";
    longitude.display();

    return 0;
}
