#include "io.h"
#include <iostream>
using namespace std;
using namespace io;

Data dataInput(Data dt)
{
    cout << "Enter the data:\n";
    cin >> dt;
    return dt;
}
int positionInput(int position)
{
    cout << "Enter position:\n";
    cin >> position;
    return position;
}

