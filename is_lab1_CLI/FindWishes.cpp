#include "FindWishes.h"

void FindWishes(User* user)
{
    cout << "Давайте узнаем Ваши потребности" << endl;

    cout << "Укажите желаемую сумму кредита. Если Вам не важна сумма, введите 0" << endl;
    user->SetWantedAmount();

    cout << "Укажите желаемую процентную ставку. Если Вам не важна процентная ставка, введите 0" << endl;
    user->SetWantedPercent();

    cout << "Укажите желаемый срок кредитования в месяцах. Если Вам не важен срок кредитования, введите 0" << endl;
    user->SetWantedTerm();

    cout << "Выберите цель кредитования из нижеуказанных:" << endl;
    cout << "1. Покупка авто" << endl;
    cout << "2. Покупка недвижимости" << endl;
    cout << "3. Без цели" << endl;
    user->SetWantedPurpose();

    cout << "Укажите желаемый ежемесячный платеж. Если Вам не важен ежемесячный платеж, введите 0" << endl;
    user->SetWantedPayment();

    cout << "Укажите желаемую переплату. Если Вам не важна переплата, введите 0" << endl;
    user->SetWantedOverpayment();
}
