#pragma once

#include <string>
using namespace std;

class CreditProduct
{
private:
	int amount,
		term;
	float percent,
		payment,
		overpayment;
	float TrustMeasure = 0;
	string purpose,
		name;
public:
	string GetName();
	void SetName(string value);
	int GetAmount();
	void SetAmount(string value);
	float GetPercent();
	void SetPercent(string value);
	int GetTerm();
	void SetTerm(string value);
	string GetPurpose();
	void SetPurpose(string value);
	float GetPayment();
	void SetPayment(string value);
	float GetOverpayment();
	void SetOverpayment(string value);

	void SetTrustMeasure(float input);
	float GetTrustMeasure();

	CreditProduct();
	~CreditProduct();
};

