#include <iostream>
#include <windows.h>
#include <time.h>
using namespace std;
class game
{
    char mark_male, mark_female;
    int num_of_board[3][3];
    char board[3][3];

public:
    game()
    {
        char char1;
        cout << "\t****welcome to challenge game**** \n\n";
        cout << "1-Male" << endl;
        cout << "2-Female" << endl;
        cout << "Player no.1 please choose (x or o):";
        cin >> char1;
        if (char1 == 'x')
        {
            mark_male = char1;
            mark_female = 'o'; // this will be by default ( o )

            cout << "player (Male): " << mark_male << endl;
            cout << "player (Female): " << mark_female << endl;
        }
        else if (char1 == 'o')
        {
            mark_male = char1;
            mark_female = 'x'; // this will be by default ( x )
            cout << "--------------\n";
            cout << "player (Male): " << mark_male << endl;
            cout << "--------------\n";
            cout << "player (Female): " << mark_female << endl;
        }
    }
    void matrixdraw()
    {
        int num[3][3] = {1, 2, 3, 4, 5, 6, 7, 8, 9};

        for (int i = 0; i < 3; i++)
            for (int j = 0; j < 3; j++)
                num_of_board[i][j] = num[i][j];

        cout << "---------------\n";
        for (int i = 0; i < 3; i++)
        {
            for (int j = 0; j < 3; j++)
                cout << "| " << num[i][j] << " |";
            cout << "\n---------------\n";
        }
    }
    void play_game()
    {
        char game1[3][3] = {' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '};
        int number_male, number_female;
        int c = 0;
        for (int i = 0; i < 3; i++)
            for (int j = 0; j < 3; j++)
                board[i][j] = game1[i][j];

        cout << "------------------------------\n";
        cout << "please put in number (1 to 9):\n";
        cout << "------------------------------\n";
        for (int i = 0; i < 9; i++)
        {

            if (i % 2 == 0)
            {

                /********* out put matrix ***********/
                cout << "\n---------------\n";
                for (int i = 0; i < 3; i++)
                {
                    for (int j = 0; j < 3; j++)
                        cout << "| " << board[i][j] << " |";
                    cout << "\n---------------\n";
                }
                /************ play *************/
                cout << "------------------------------\n";
                cout << "please put in number (1 to 9):\n";
                cout << "------------------------------\n";
                cout << "player 1 (male) input number :";
                cin >> number_male;

                for (int i = 0; i < 3; i++)
                    for (int j = 0; j < 3; j++)
                    {
                        if (number_male == num_of_board[i][j])
                        {
                            board[i][j] = mark_male;
                        }
                    }

                system("cls"); // for cleaning or change board

            } // end if
            else
            {
                /********* out put matrix ***********/
                cout << "\n---------------\n";
                for (int i = 0; i < 3; i++)
                {
                    for (int j = 0; j < 3; j++)
                        cout << "| " << board[i][j] << " |";
                    cout << "\n---------------\n";
                }

                /************ play *************/
                cout << "------------------------------\n";
                cout << "please put in number (1 to 9):\n";
                cout << "------------------------------\n";
                cout << "player 2 (female) input number :";
                cin >> number_female;

                for (int i = 0; i < 3; i++)
                    for (int j = 0; j < 3; j++)
                    {

                        if (number_female == num_of_board[i][j])
                        {
                            board[i][j] = mark_female;
                        }
                    }

                system("cls"); // for  change board

            } // end else
        }
    }

    char checkwinner()
    {
        char winner;
        for (int i = 0; i < 3; i++) // row
        {
            if ((board[i][0] == board[i][1]) && (board[i][0] == board[i][2]) && (board[i][1] == board[i][2]))
                winner = board[i][0];
        }
        for (int i = 0; i < 3; i++) // col
        {
            if ((board[2][i] == board[1][i]) && (board[2][i] == board[0][i]) && (board[1][i] == board[0][i]))
                winner = board[i][0];
        }
        if ((board[0][0] == board[1][1]) && (board[0][0] == board[2][2]) && (board[1][1] == board[2][2]))
            winner = board[0][0];
        if ((board[0][2] == board[1][1]) && (board[2][0] == board[1][1]) && (board[2][0] == board[0][2]))
            winner = board[2][0];

        return winner;
    }

    void firstchallenge()
    {
        cout << "\n TELL ME  : ";                          // that mean if the Husband win the wife will tell him and the contrary
        HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE); // that for take color
        SetConsoleTextAttribute(hConsole, 12);
        cout << "I LOVE YOU \n";
    }

    void secondchallenge()
    {
        cout << "\nDRAW TO ME THIS LOVE HARD : \n\n";
        HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
        SetConsoleTextAttribute(hConsole, 13);
        for (int i = 0; i < 15; i++)
            cout << " ";
        cout << "*         *" << endl;

        for (int i = 0; i < 12; i++)
            cout << " ";
        cout << "*    *     *    *" << endl;

        for (int i = 0; i < 11; i++)
            cout << " ";
        cout << "*      *   *      *" << endl;

        for (int i = 0; i < 11; i++)
            cout << " ";
        cout << "*       * *       *" << endl;

        for (int i = 0; i < 11; i++)
            cout << " ";
        cout << "*        *        *" << endl;

        for (int i = 0; i < 11; i++)
            cout << " ";
        cout << "*                 *" << endl;

        for (int i = 0; i < 12; i++)
            cout << " ";
        cout << "*               *" << endl;

        for (int i = 0; i < 13; i++)
            cout << " ";
        cout << "*             *" << endl;

        for (int i = 0; i < 14; i++)
            cout << " ";
        cout << "*           *" << endl;

        for (int i = 0; i < 15; i++)
            cout << " ";
        cout << "*         *" << endl;

        for (int i = 0; i < 17; i++)
            cout << " ";
        cout << "*     *" << endl;

        for (int i = 0; i < 19; i++)
            cout << " ";
        cout << "* *" << endl;

        for (int i = 0; i < 20; i++)
            cout << " ";
        cout << "*";
    }

    void thirdchallenge(bool c)
    {
        cout << "\n The challenge is : ";
        HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
        SetConsoleTextAttribute(hConsole, 11);
        if (c == true)
        {
            cout << " $$ BRING TO HIM GIFT $$" << endl; // the wife will give to him gift
        }
        else if (c == false)
        {
            cout << " $$ BRING TO HER GIFT $$ " << endl; // the wife will give to him gift
        }
    }

    void fourthchallenge(bool c)
    {
        cout << "\n The challenge is : ";
        HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
        SetConsoleTextAttribute(hConsole, 6);
        if (c == true)
        {
            cout << " $$ TAKE HIM TO FRANCE $$" << endl; // the wife will give to him gift
        }
        else if (c == false)
        {
            cout << " $$ TAKE HER TO UAE  $$ " << endl; // the wife will give to him gift
        }
    }

    void finalchallenge()
    {

        cout << " */*/*/*/*/*/ YOU HAVE NOT DO CHALLENGE ;) */*/*/*/*/*/ " << endl;
    }
};
int main()
{

    bool check;
    char n;
    game s;
    s.matrixdraw();
    s.play_game();

    if (s.checkwinner() == 'x')
    {
        check = true;
        cout << "*** << the winner male :p >> ***" << endl;
    }
    else if (s.checkwinner() == 'o')
    {
        check = false;
        cout << "*** << the winner male :D >> ***" << endl;
    }
    else
    {
        ;
        cout << "*** << no one is win :-) >> ***" << endl;
    }

    srand(time(NULL));      // initialize the random from time
    int index = rand() % 4; // generates a random number between 0 and 4
    if (index == 1)
    { // first challenge
        cout << endl
             << endl;
        s.firstchallenge();
    }
    else if (index == 2)
    {
        cout << endl
             << endl; // second challenge
        s.secondchallenge();
    }
    else if (index == 3)
    {
        cout << endl
             << endl; // third challenge
        s.thirdchallenge(check);
    }
    else if (index == 4)
    {
        cout << endl
             << endl; // fourth challenge
        s.fourthchallenge(check);
    }
    else
    {
        s.finalchallenge();
    }
};
