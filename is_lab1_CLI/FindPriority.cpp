#include "FindPriority.h"

void FindPriority(User* user)
{
    string input;
    float priority = 0.6;
    cout << "Осталось установить приоритеты" << endl;
    cout << "Расположите нижеуказанные параметры от самого важного до наименее важного" << endl;

    cout << "1. Сумма кредита" << endl;
    cout << "2. Процентная ставка" << endl;
    cout << "3. Срок кредитования" << endl;
    cout << "4. Цель кредита" << endl;
    cout << "5. Ежемесячный платеж" << endl;
    cout << "6. Переплата" << endl;

    cin >> input;

    for (const auto& i : input)
    {
        if (i == '1') user->SetAmountPriority(priority);
        else if (i == '2') user->SetPercentPriority(priority);
        else if (i == '3') user->SetTermPriority(priority);
        else if (i == '4') user->SetPurposePriority(priority);
        else if (i == '5') user->SetPaymentPriority(priority);
        else if (i == '6') user->SetOverpaymentPriority(priority);
        priority = priority - 0.1;
    }
}
