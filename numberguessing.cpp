#include <iostream>
#include <ctime>
using namespace std;
int main()
{
    srand((unsigned int)time(NULL));
    int number = rand() % 100;
    int guess = 0;
    do
    {
        cout << "Enter Guess (1-100): ";
        cin >> guess;

        if (guess > number)
            cout << "Guess Lower!" << endl;
        else if (guess < number)
            cout << "Guess Higher!" << endl;
        else
            cout << "YOU WON!" << endl;
    } while (guess != number);
    return 0;
}