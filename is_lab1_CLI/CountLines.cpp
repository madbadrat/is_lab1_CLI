#include "CountLines.h"
#include "main.h"

int CountLines()
{
    int count = 0;
    ifstream file(filename);
    string line;
    while (getline(file, line)) count++;
    file.close();

    return count - 1;
}
