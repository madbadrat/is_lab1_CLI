#include "Search.h"

void Search(CreditProduct** Products, User* user, int count)
{
    for (int i = 0; i < count; i++)
    {
        // установка меры доверия для суммы кредита
        if ((Products[i]->GetAmount() > user->GetMaxWantedAmount() or Products[i]->GetAmount() < user->GetMinWantedAmount())
            && user->GetWantedAmount() != 0)
        {
            Products[i]->SetTrustMeasure(-100);
        }
        else
        {
            Products[i]->SetTrustMeasure(Products[i]->GetTrustMeasure() + user->GetAmountPriority());
        }

        // установка меры доверия для процента
        if (Products[i]->GetPercent() > user->GetWantedPercent() && user->GetWantedPercent() != 0)
        {
            Products[i]->SetTrustMeasure(-100);
        }
        else
        {
            Products[i]->SetTrustMeasure(Products[i]->GetTrustMeasure() + user->GetPercentPriority());
        }

        // установка меры доверия для срока
        if (Products[i]->GetTerm() > user->GetWantedTerm() && user->GetWantedTerm() != 0)
        {
            Products[i]->SetTrustMeasure(-100);
        }
        else
        {
            Products[i]->SetTrustMeasure(Products[i]->GetTrustMeasure() + user->GetTermPriority());
        }

        // установка меры доверия для цели
        if (Products[i]->GetPurpose() != user->GetCreditType())
        {
            Products[i]->SetTrustMeasure(-100);
        }
        else
        {
            Products[i]->SetTrustMeasure(Products[i]->GetTrustMeasure() + user->GetPurposePriority());
        }

        // установка меры доверия для платежа
        if (Products[i]->GetPayment() > user->GetWantedPayment() && user->GetWantedPayment() != 0)
        {
            Products[i]->SetTrustMeasure(-100);
        }
        else
        {
            Products[i]->SetTrustMeasure(Products[i]->GetTrustMeasure() + user->GetPaymentPriority());
        }

        // установка меры доверия для переплаты
        if (Products[i]->GetOverpayment() > user->GetWantedOverpayment() && user->GetWantedOverpayment() != 0)
        {
            Products[i]->SetTrustMeasure(-100);
        }
        else
        {
            Products[i]->SetTrustMeasure(Products[i]->GetTrustMeasure() + user->GetOverpaymentPriority());
        }
    }
}
