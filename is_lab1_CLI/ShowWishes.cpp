#include "ShowWishes.h"

void ShowWishes(User* user)
{
    cout << "Ваши пожелания: " << endl << endl;
    cout << "Сумма кредита: " << user->GetWantedAmount() << " с порядком важности " << user->GetAmountPriority() * 10 << endl;
    cout << "Процентная ставка: " << user->GetWantedPercent() << " с порядком важности " << user->GetPercentPriority() * 10 << endl;
    cout << "Срок кредитования: " << user->GetWantedTerm() << " с порядком важности " << user->GetTermPriority() * 10 << endl;
    cout << "Цель кредитования: " << user->GetWantedPurpose() << " с порядком важности " << user->GetPurposePriority() * 10 << endl;
    cout << "Ежемесячный платеж: " << user->GetWantedPayment() << " с порядком важности " << user->GetPaymentPriority() * 10 << endl;
    cout << "Переплата: " << user->GetWantedOverpayment() << " c порядком важности " << user->GetOverpaymentPriority() * 10 << endl;
}
