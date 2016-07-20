#include <iostream>
#include <stdlib.h>
#include <time.h>

using namespace std;

void rollDie()
{
    int x = (rand() % 6) + 1;
    cout << x << endl;
}

int main()
{
    cout << "Rolling two six-sided die: " << endl;

    srand(time(NULL));

    for (int i = 0; i < 2; i++)
    {
        rollDie();
    }

    string response;
    do {
        cout << "Roll again? ";
        cin >> response;
        if (response == "y" || response == "yes")
        {
            for (int i = 0; i < 2; i++)
            {
                rollDie();
            }
        }
    } while (response != "no" && response != "n");

    return 0;
}
