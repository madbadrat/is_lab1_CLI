#include "MakeBaseFromFile.h"

void MakeBaseFromFile(CreditProduct** Products, int count)
{
    ifstream file(filename);
    string line;
    char delimiter = ',';
    getline(file, line);

    for (int i = 0; i < count; i++)
    {
        getline(file, line);
        stringstream stream(line);
        string name, amount, percent, term, purpose, payment, overpayment;

        getline(stream, name, delimiter);
        getline(stream, amount, delimiter);
        getline(stream, percent, delimiter);
        getline(stream, term, delimiter);
        getline(stream, purpose, delimiter);
        getline(stream, payment, delimiter);
        getline(stream, overpayment, delimiter);

        CreditProduct* temp_product = new CreditProduct;
        temp_product->SetName(name);
        temp_product->SetAmount(amount);
        temp_product->SetPercent(percent);
        temp_product->SetTerm(term);
        temp_product->SetPurpose(purpose);
        temp_product->SetPayment(payment);
        temp_product->SetOverpayment(overpayment);

        Products[i] = temp_product;
    }

    file.close();
}
