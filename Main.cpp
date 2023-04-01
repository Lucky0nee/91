#include <iostream>
#include <map>

int main() {
    system("chcp 1251>nul");
    std::map<std::string, std::string> mp;

    mp["Перекладач"] = "Translator";
    mp["Яблуко"] = "Apple";
    mp["Слово"] = "Word";
    mp["Собака"] = "Dog";
    mp["Сонце"] = "Sun";

    for (std::pair<std::string, std::string> str : mp) {
        std::cout << str.first << ":" << str.second << "\n";
    }

    std::string str;
    std::cout << "\n" << "Enter word to translate: ";
    std::cin >> str;

    if (mp.count(str) > 0) {
        std::cout << "Translated word: ";
        std::cout << mp[str];
        std::cout << "\n";
    }
    else
    {
        std::cout << "There is no such word in the dictionary";
    }

    return 0;
}

/*
Створіть об’єкт типу карта. В нього запишіть пари, де українському
слову у відповідність поставлено англійське слово. Попросити
користувача ввести українське слово, ваша програма має вивести
англійський відповідник.
*/
