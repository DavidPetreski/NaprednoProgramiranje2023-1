#include <iostream>
#include <cstdlib>
#include <ctime>
#include <vector>
#include <string>

using namespace std;

int main()
{
    // Иницијализација на шпилот со карти
    vector<string> deck;
    string suits[] = {"Срце", "Дијамант", "Лист", "Детелина"};
    string ranks[] = {"2", "3", "4", "5", "6", "7", "8", "9", "10", "J", "Q", "K", "A"};

    // Додавање на картите во шпилот
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 13; j++) {
            deck.push_back(ranks[j] + " " + suits[i]);
        }
    }

    // Додавање на џокери во шпилот
    deck.push_back("Џокер");
    deck.push_back("Џокер");

    // Пишување на сите карти во шпилот
    cout << "Шпилот со карти е: " << endl;
    for (int i = 0; i < deck.size(); i++) {
        cout << deck[i] << endl;
    }

    // Мешање на шпилот
    srand(time(0)); // Добивање на случаен број
    for (int i = 0; i < deck.size(); i++) {
        int j = rand() % deck.size();
        swap(deck[i], deck[j]);
    }

    // Пишување на измешаните карти
    cout << "\n" "Измешаниот шпил со карти е:"  << endl;
    for (int i = 0; i < deck.size(); i++) {
        cout << deck[i] << endl;
    }

    return 0;
}
