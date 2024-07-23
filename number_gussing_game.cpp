#include <iostream>
#include <ctime>
using namespace std;
int main()
{
    while (true)
    {
        srand(time(0));
        int numberToGuess = rand() % 100 + 1;
        cout << "Welcome to Number Gussing Game!" << endl;
        cout << "Guess the number between 1 and 100." << endl;

        int numberOfTries = 0;
        while (true)
        {
            int userGuess;
            cout << "guess the number ";
            cin >> userGuess;
            numberOfTries++;
            if (userGuess < numberToGuess)
            {
                cout << "the number is too low! try again" << endl;
            }
            else if (userGuess == numberToGuess)
            {
                cout << "Congratulations! You found the number in " << numberOfTries << " tries" << endl;
                break;
            }
            else
            {
                cout << "the number is too high! try again " << endl;
            }
        }
        int a;
        cout << "if you want to play again then enter 1 otherwise 0 ";
        cin >> a;
        if (a == 0)
        {
            break;
        }
    }
    return 0;
}