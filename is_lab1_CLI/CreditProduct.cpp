#include "CreditProduct.h"

string CreditProduct::GetName()
{
    return name;
}

void CreditProduct::SetName(string value)
{
    name = value;
}

int CreditProduct::GetAmount()
{
    return amount;
}

void CreditProduct::SetAmount(string value)
{
    amount = stoi(value);
}

float CreditProduct::GetPercent()
{
    return percent;
}

void CreditProduct::SetPercent(string value)
{
    percent = stof(value);
}

int CreditProduct::GetTerm()
{
    return term;
}

void CreditProduct::SetTerm(string value)
{
    term = stoi(value);
}

string CreditProduct::GetPurpose()
{
    return purpose;
}

void CreditProduct::SetPurpose(string value)
{
    purpose = value;
}

float CreditProduct::GetPayment()
{
    return payment;
}

void CreditProduct::SetPayment(string value)
{
    payment = stof(value);
}

float CreditProduct::GetOverpayment()
{
    return overpayment;
}

void CreditProduct::SetOverpayment(string value)
{
    overpayment = stof(value);
}

void CreditProduct::SetTrustMeasure(float input)
{
    TrustMeasure = input;
}

float CreditProduct::GetTrustMeasure()
{
    return TrustMeasure;
}

CreditProduct::CreditProduct()
{
}

CreditProduct::~CreditProduct()
{
}
