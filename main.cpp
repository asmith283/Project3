#include "Menu.h"

int main()
{
    Menu m;
    m.menuStart();
    while(!m.choice2())
    {
        m.choice2();
    }
    return 0;
}