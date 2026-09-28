#include <iostream>
using namespace std;

class Time
{
    int hours, minutes, seconds;

public:
    Time()
    {
        hours = minutes = seconds = 0;
    }

    Time(int h, int m, int s)
    {
        hours = h;
        minutes = m;
        seconds = s;
    }

    void addTime(const Time &t1, const Time &t2)
    {
        seconds = t1.seconds + t2.seconds;
        minutes = t1.minutes + t2.minutes;
        hours = t1.hours + t2.hours;

        if (seconds >= 60)
        {
            minutes += seconds / 60;
            seconds %= 60;
        }

        if (minutes >= 60)
        {
            hours += minutes / 60;
            minutes %= 60;
        }

        hours %= 24;
    }

    void display() const
    {
        if (hours < 10) cout << "0";
        cout << hours << ":";

        if (minutes < 10) cout << "0";
        cout << minutes << ":";

        if (seconds < 10) cout << "0";
        cout << seconds << endl;
    }
};

int main()
{
    const Time t1(10, 45, 50);
    const Time t2(2, 30, 20);
    Time t3;

    cout << "First Time: ";
    t1.display();

    cout << "Second Time: ";
    t2.display();

    t3.addTime(t1, t2);

    cout << "Third Time: ";
    t3.display();

    return 0;
}
