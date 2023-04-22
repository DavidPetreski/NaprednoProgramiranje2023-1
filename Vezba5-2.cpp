#include <iostream>
#include <cstring>

using namespace std;

int main()
{
    char song[] = "You Give Love A Bad Name by Bon Jovi";
    char* ptr = song;

    cout << "Pesna: " << song << endl;
    cout << "Prviot karakter: " << *ptr << endl;
    cout << "Adresa na vtoriot karakter: " << (void*)ptr << endl;

    int shift = strlen("You Give Love A Bad Name by ");

    ptr += shift;

    cout << "\nSodrzina po premesten pocetok: " << ptr << endl;
    cout << "Prviot karakter posle premestuvanjeto: " << *ptr << endl;
    cout << "Adresata na prviot karakter posle premestuvanjeto: " << (void*)ptr << endl;
    

    return 0;
}
