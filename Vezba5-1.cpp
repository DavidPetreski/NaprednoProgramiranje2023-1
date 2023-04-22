#include <iostream>
#include <string>

using namespace std;

int main()
{
    string Ime = "Damjan";
    string Prezime = "Murgjeski";

    cout << Ime << endl;
    cout << Prezime << endl;

    Ime.replace(0, 4, "@:><");
    Prezime.replace(0, 4, "}^*#");

    cout << Ime << endl;
    cout << Prezime << endl;

    return 0;
}
