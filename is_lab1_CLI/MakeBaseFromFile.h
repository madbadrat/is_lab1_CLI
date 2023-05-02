#pragma once

#include <fstream>
#include <sstream>

#include "CreditProduct.h"

#define filename "knowledge_base.csv"

void MakeBaseFromFile(CreditProduct** Products, int count);