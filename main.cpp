#include "list.h"
#include "io.h"
#include "list.h"
#include <iostream>
#include <windows.h>


using namespace std;
using namespace dl;
using namespace io;

int main()
{
    int position;
    int click;
    Data dt;
    DoubleList dlist;
    while(1)
    {
        cout << "Push data (press 1)\n";
        cout << "Pop data (press 2)\n";
        cout << "View data (press 3)\n";
        cout << "Clean data (press 4)\n";
        cout << "Is list empty? (press 5)\n";
        cout << "Exit (press 0)";
        cin >> click;
        if( click == 1)
        {
            system("cls");
            dt = dataInput(dt);
            position = positionInput(position);
            dlist.push(dt, position);
        }
        if( click == 2)
        {
            system("cls");
            dt = dataInput(dt);
            position = positionInput(position);
            dlist.pop(position);
        }
        if( click == 3)
        {
            system("cls");
            dlist.view();
        }
        if( click == 4)
        {
            system("cls");
            dlist.clean();
        }
        if( click == 5)
        {
            system("cls");
            dlist.isEmpty();
        }
        if( click == 0)
        {
            system("cls");
            exit(0);
        }
    }
    return 0;
}
