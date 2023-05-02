#pragma once

#include <iostream>
#include <string>

#include "Wish.h"

using namespace std;

class User
{
private:
    int wanted_amount;
    Wish<int> min_wanted_amount,
        max_wanted_amount,
        wanted_term;
    Wish<float> wanted_percent,
        wanted_payment,
        wanted_overpayment;
    Wish<string> wanted_purpose;
    void SetMinWantedAmount();
    void SetMaxWantedAmount();
public:
    int GetWantedAmount();
    void SetWantedAmount();
    int GetMinWantedAmount();
    int GetMaxWantedAmount();
    float GetWantedPercent();
    void SetWantedPercent();
    int GetWantedTerm();
    void SetWantedTerm();
    string GetWantedPurpose();
    string GetCreditType();
    void SetWantedPurpose();
    float GetWantedPayment();
    void SetWantedPayment();
    float GetWantedOverpayment();
    void SetWantedOverpayment();

    void SetAmountPriority(float input);
    float GetAmountPriority();
    void SetPercentPriority(float input);
    float GetPercentPriority();
    void SetTermPriority(float input);
    float GetTermPriority();
    void SetPurposePriority(float input);
    float GetPurposePriority();
    void SetPaymentPriority(float input);
    float GetPaymentPriority();
    void SetOverpaymentPriority(float input);
    float GetOverpaymentPriority();

    User();
    ~User();
};

