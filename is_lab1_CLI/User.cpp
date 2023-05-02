#include "User.h"

void User::SetMinWantedAmount()
{
	min_wanted_amount.SetValue(wanted_amount - wanted_amount / 10);
}

void User::SetMaxWantedAmount()
{
	max_wanted_amount.SetValue(wanted_amount + wanted_amount / 10);
}

int User::GetWantedAmount()
{
	return wanted_amount;
}

void User::SetWantedAmount()
{
	cin >> wanted_amount;
	SetMinWantedAmount();
	SetMaxWantedAmount();
}

int User::GetMinWantedAmount()
{
	return min_wanted_amount.GetValue();
}

int User::GetMaxWantedAmount()
{
	return max_wanted_amount.GetValue();
}

float User::GetWantedPercent()
{
	return wanted_percent.GetValue();
}

void User::SetWantedPercent()
{
	float input;
	cin >> input;
	wanted_percent.SetValue(input);
}

int User::GetWantedTerm()
{
	return wanted_term.GetValue();
}

void User::SetWantedTerm()
{
	int input;
	cin >> input;
	wanted_term.SetValue(input);
}

string User::GetWantedPurpose()
{
	if (wanted_purpose.GetValue() == "автокредит") return "Покупка авто";
	else if (wanted_purpose.GetValue() == "ипотека") return "Покупка недвижимости";
	else return "Без цели";
}

string User::GetCreditType()
{
	return wanted_purpose.GetValue();
}

void User::SetWantedPurpose()
{
	int input;
	cin >> input;

	if (input == 1) wanted_purpose.SetValue("автокредит");
	else if (input == 2) wanted_purpose.SetValue("ипотека");
	else if (input == 3) wanted_purpose.SetValue("наличные");
}

float User::GetWantedPayment()
{
	return wanted_payment.GetValue();
}

void User::SetWantedPayment()
{
	float input;
	cin >> input;
	wanted_payment.SetValue(input);
}

float User::GetWantedOverpayment()
{
	return wanted_overpayment.GetValue();
}

void User::SetWantedOverpayment()
{
	float input;
	cin >> input;
	wanted_overpayment.SetValue(input);
}

void User::SetAmountPriority(float input)
{
	min_wanted_amount.SetPriority(input);
	max_wanted_amount.SetPriority(input);
}

float User::GetAmountPriority()
{
	return min_wanted_amount.GetPriority();
}

void User::SetPercentPriority(float input)
{
	wanted_percent.SetPriority(input);
}

float User::GetPercentPriority()
{
	return wanted_percent.GetPriority();
}

void User::SetTermPriority(float input)
{
	wanted_term.SetPriority(input);
}

float User::GetTermPriority()
{
	return wanted_term.GetPriority();
}

void User::SetPurposePriority(float input)
{
	wanted_purpose.SetPriority(input);
}

float User::GetPurposePriority()
{
	return wanted_purpose.GetPriority();
}

void User::SetPaymentPriority(float input)
{
	wanted_payment.SetPriority(input);
}

float User::GetPaymentPriority()
{
	return wanted_payment.GetPriority();
}

void User::SetOverpaymentPriority(float input)
{
	wanted_overpayment.SetPriority(input);
}

float User::GetOverpaymentPriority()
{
	return wanted_overpayment.GetPriority();
}

User::User()
{
}

User::~User()
{
}
