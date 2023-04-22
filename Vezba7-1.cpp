#include<iostream>
#include<stdio.h>
#include<stdlib.h>
using namespace std;

class date
{
private:
    int day, month, year, hour, minute, second;
public:
    date(){}
    friend void operator>>(istream &in, date &d); //Overloading >> operator
    friend void operator<<(ostream &out, date &d); //Overloading << operator
    ~date(){}
};

void operator>>(istream &in, date &d)
{
    
    cout<<"\n Vnesi den: ";
    in>>d.day;
    cout<<"\n Vnesi mesec: ";
    in>>d.month;
    if (d.month < 1 || d.month > 12) {
        cout << "\n Invalid Month";
        exit(0);
    }
    cout<<"\n Vnesi godina: ";
    cin>>d.year;
    cout<<"\n Vnesi cas: ";
    in>>d.hour;
    cout<<"\n Vnesi minuti: ";
    in>>d.minute;
    cout<<"\n Vnesi sekundi: ";
    in>>d.second;
    cout<<"\n ------------------";
    
    // Check if the day is valid for the given month and year
    switch(d.month)
    {
        case 1: //January
        case 3: //March
        case 5: //May
        case 7: //July
        case 8: //August
        case 10: //October
        case 12: //December
            if(d.day > 31)
            {
                cout<<"\n Invalid Day ";
                exit(0);
            }
            break;
        case 4: //April
        case 6: //June
        case 9: //September
        case 11: //November
            if(d.day > 30)
            {
                cout<<"\n Invalid Day ";
                exit(0);
            }
            break;
        case 2: // February
            if((d.year%100!=0&&d.year%4==0)||(d.year%400==0))
            {
                if(d.day > 29)
                {
                    cout<<"\n Invalid Day ";
                    exit(0);
                }
            }
            else
            {
                if(d.day > 28)
                {
                    cout<<"\n Invalid Day ";
                    exit(0);
                }
            }
            break;
        }
}

void operator<<(ostream &out, date &d)
{
    out << "\n Date: ";
    out << d.day << "/";
    out << d.month << "/";
    out << d.year << " ";
    out << d.hour << ":" << d.minute << ":" << d.second;
}

int main()
{
    date d;
    cout<<"\n Enter Date \n";
    cout<<"\n ------------------";
    cin>>d;
    cout<<d;
    return 0;
}