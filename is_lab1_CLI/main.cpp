#include "main.h"

int main()
{
    //setlocale(LC_ALL, "ru");
    cout << "Добро пожаловать в систему подбора кредита!" << endl;
    int count = CountLines(); // количество строк с данными в файле базы
    CreditProduct** Products = new CreditProduct * [count]; // создание массива указателей для базы
    User user;

    MakeBaseFromFile(Products, count); // заполнение базы из файла CSV
    FindWishes(&user); // узнать пожелания пользователя
    FindPriority(&user); // установить приоритеты пользователя

    ShowWishes(&user); // вывести на экран заданные пожелания

    Search(Products, &user, count); // выбор подходящих вариантов

    cout << "Вот предложения, которые могут Вам подойти: " << endl;

    for (int i = 0; i < count; i++)
    {
        if (Products[i]->GetTrustMeasure() >= 0) cout << Products[i]->GetName() << " " << Products[i]->GetTrustMeasure() << endl;
    }

    system("pause");
    return 0;
}
