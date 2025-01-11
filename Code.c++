#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;

int w, l, d;
enum enchoices
{
    stone = 1,
    paper = 2,
    scissors = 3
};

int Rules(int user, int pc)
{
    if (user == 1 && pc == 1)
    {
        cout << "No winner\n";
        system("color 6F");
        d++;
        return d;
    }
    else if (user == 1 && pc == 2)
    {
        cout << "[Computer]\n";
        system("color 4F");
        l++;
        return l;
    }
    else if (user == 1 && pc == 3)
    {
        cout << "[Player1]\n";
        system("color 2F");
        w++;
        return w;
    }
    else if (user == 2 && pc == 1)
    {
        cout << "[Player1]\n";
        system("color 2F");
        w++;
        return w;
    }
    else if (user == 2 && pc == 2)
    {
        cout << "No winner\n";
        system("color 6F");
        d++;
        return d;
    }
    else if (user == 2 && pc == 3)
    {
        cout << "[Computer]\n";
        system("color 4F");
        l++;
        return l;
    }
    else if (user == 3 && pc == 1)
    {
        cout << "[Computer]\n";
        system("color 4F");
        l++;
        return l;
    }
    else if (user == 3 && pc == 2)
    {
        cout << "[Player1]\n";
        system("color 2F");
        w++;
        return w;
    }
    else if (user == 3 && pc == 3)
    {
        cout << "No winner\n";
        system("color 6F");
        d++;
        return d;
    }
    return 0;
}

int number_of_rounds()
{
    int number;
    do
    {
        cout << "How many Rounds (1 to 10)? \n";
        cin >> number;
    } while (number < 1 || number > 10);
    return number;
}

int User_choice()
{
    int choose;
    do
    {
        cout << "\nYour Choice: [1]: Stone, [2]: Paper, [3]: Scissors? ";
        cin >> choose;
    } while (choose < 1 || choose > 3);
    return choose;
}

int Random_choice(int from, int to)
{
    int random_number = rand() % (to - from + 1) + from;
    return random_number;
}

void take_the_user_choice(int choice)
{
    switch (choice)
    {
    case 1:
        cout << "Stone\n";
        break;
    case 2:
        cout << "Paper\n";
        break;
    case 3:
        cout << "Scissors\n";
        break;
    }
}

int pc_choice()
{
    switch (Random_choice(1, 3))
    {
    case 1:
        cout << "Stone\n";
        return 1;
    case 2:
        cout << "Paper\n";
        return 2;
    case 3:
        cout << "Scissors\n";
        return 3;
    }
    return 0;
}

void show__the_result(int &number_of_rounds)
{
    cout << "\t\t______________________________________________________________________________\n\n";
    cout << "\t\t\t\t        +++  G a m e  O v e r  +++\n\n";
    cout << "\t\t______________________________________________________________________________\n\n";
    cout << "\t\t_________________________[ Game Results ]______________________________________ \n\n";
    cout << "Game rounds                    : " << number_of_rounds << endl;
    cout << "Player1 won times              : " << w << endl;
    cout << "Computer won times             : " << l << endl;
    cout << "Draw times                     : " << d << endl;
    cout << "Final Winner                   : ";
    if (w > l)
    {
        cout << "Player1\n\n";
    }
    else if (l > w)
    {
        cout << "Computer\n\n";
    }
    else
    {
        cout << "No winner\n\n";
    }
}

void show_the_head_of_the_game(int repetition)
{
    for (int i = 1; i <= repetition; i++)
    {
        cout << "\nRound [" << i << "] begins:\n ";
        int user_choice = User_choice();
        cout << "\n________________Round [ " << i << " ]_________________\n\n";
        cout << "Player1 Choice : ";
        take_the_user_choice(user_choice);

        cout << "Computer Choice: ";
        int pc = pc_choice();
        cout << "Round winner is: ";
        Rules(user_choice, pc);
    }
}

bool Do_you_want_again()
{
    char reply;
    cout << "Do you want to play again y/n: ";
    cin >> reply;
    if (reply == 'y' || reply == 'Y')
    {
        w = 0, l = 0, d = 0;
        return true;
    }
    else
    {
        cout << "\n\n\n\t\t\t      Have a nice Day!!\n\n";
    }
    return false;
}
void ResetScreen()
{
    system("cls");
    system("color 0F");
}

void theGame()
{
    do
    {
        ResetScreen();
        int times = number_of_rounds();
        show_the_head_of_the_game(times);
        show__the_result(times);
    } while (Do_you_want_again());
}

int main()
{
    srand((unsigned)time(NULL));
    theGame();
}
