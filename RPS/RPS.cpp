#include <iostream>
#include <random>
#include <io.h>
#include <fcntl.h>

using namespace std;

void printRock(int line);
void printPaper(int line);
void printScissors(int line);

void printEnemyRock(int line);
void printEnemyPaper(int line);
void printEnemyScissors(int line);

void enemyChoice(int userChoice);
void displayHandler(int userChoice, int enemyChoice);

int main()
{
    int userChoice;


    cout << "Hello, welcome to my Rock, Paper, Scissors Game!" << endl;

    while (true) {
        cout << "Type 1 for Rock" << endl;
        cout << "Type 2 for Paper" << endl;
        cout << "Type 3 for Scissors" << endl;
        cout << "Type 4 to exit: ";

        cin >> userChoice;
        if(userChoice == 1)
        {
            cout << "You chose Rock!!" << endl;
            enemyChoice(1);
        }else if(userChoice == 2)
        {
            cout << "You chose Paper!!" << endl;
            enemyChoice(2);
        }else if(userChoice == 3)
        {
            cout << "You chose Scissors!!" << endl;
            enemyChoice(3);
        }else if(userChoice == 4)
        {
            return 0;
        }else cout << "not a valid user input. Try again." << endl;
    	cin.clear();
        cin.ignore(1000, '\n');
        
    }
}

void enemyChoice(int userChoice)
{
    srand(time(NULL));
    int enemyPick = (rand() % 3) + 1;
    if(enemyPick == 1)
    {
        displayHandler(userChoice, 1);
    }else if(enemyPick == 2)
    {
        displayHandler(userChoice, 2);
    }else
    {
        displayHandler(userChoice, 3);
    }
}
void displayHandler(int userChoice, int enemyChoice)
{
    switch(userChoice)
    {
    case 1:
	    switch (enemyChoice)
	    {
			case 1:
                for(int i = 1; i < 16; i++)
                {
                    printRock(i);
                    printEnemyRock(i);
                }
                break;
            case 2:
                for (int i = 1; i < 16; i++)
                {
                    printRock(i);
                    printEnemyPaper(i);
                }
                break;
            case 3:
                for (int i = 1; i < 16; i++)
                {
                    printRock(i);
                    printEnemyScissors(i);
                }
                break;
	    }
        break;
    case 2:
        switch (enemyChoice)
        {
        case 1:
            for (int i = 1; i < 16; i++)
            {
                printPaper(i);
                printEnemyRock(i);
            }
            break;
        case 2:
            for (int i = 1; i < 16; i++)
            {
                printPaper(i);
                printEnemyPaper(i);
            }
            break;
        case 3:
            for (int i = 1; i < 16; i++)
            {
                printPaper(i);
                printEnemyScissors(i);
            }
            break;
        }
        break;
    case 3:
        switch (enemyChoice)
        {
        case 1:
            for (int i = 1; i < 16; i++)
            {
                printScissors(i);
                printEnemyRock(i);
            }
            break;
        case 2:
            for (int i = 1; i < 16; i++)
            {
                printScissors(i);
                printEnemyPaper(i);
            }
            break;
        case 3:
            for (int i = 1; i < 16; i++)
            {
                printScissors(i);
                printEnemyScissors(i);
            }
            break;
        }
        break;
    }
    _setmode(_fileno(stdout), _O_TEXT);
    if (userChoice == enemyChoice) cout << "\n It's a tie!\n";
    else if (userChoice + 1 == enemyChoice || userChoice == enemyChoice + 2) cout << "\n Looks like you lost!\n";
    else cout << "\n You Win!!\n";
    
}

void printRock(int line)
{
    _setmode(_fileno(stdout), _O_U16TEXT);
    switch (line)
    {
    case 1:
        wcout << L"⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⢀⣀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀";
        break;
    case 2:
        wcout << L"⠀⠀⠀⠀⠀⠀⣀⣠⣤⣶⣾⣿⣿⣿⣿⣦⣄⡀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀ ";
        break;
    case 3:
        wcout << L"⠀⠀⠀⠀⣾⣿⡿⠟⠋⣹⣿⣿⣿⣿⣿⣿⣿⣿⣷⣦⣄⡀⠀⠀⠀⠀⠀⠀  ";
        break;
    case 4:
        wcout << L"⠀⠀⠀⢸⣿⣿⣿⠀⢸⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣷⡄⠀⠀⠀⠀⠀⠀";
        break;
    case 5:
        wcout << L"⠀⠀⢀⣿⡿⠿⣿⣇⢸⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣆⠀⠀⠀⠀⠀";
        break;
    case 6:
        wcout << L"⠀⠀⠈⠁⠀⠀⣿⣿⣾⣿⣿⠉⢿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣆⠀⠀⠀⠀";
        break;
    case 7:
        wcout << L"⠀⠀⠀⣠⣿⣦⣸⣿⣿⣿⣿⡀⠀⠹⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣆⠀⠀⠀";
        break;
    case 8:
        wcout << L"⠀⠀⠀⠈⠻⣿⣿⣿⣿⣿⣿⣿⣄⠀⠘⢿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣧⠀⠀";
        break;
    case 9:
        wcout << L"⠀⠀⠀⠀⠀⠈⠻⣿⣿⣿⣿⣿⣿⣷⣄⠀⠻⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⡇⠀⠀";
        break;
    case 10:
        wcout << L"⠀⠀⠀⠀⠀⠀⠀⠈⠻⣿⣿⡏⠹⣿⣿⣧⡀⠘⠛⠻⠿⣿⣿⣿⣿⣿⣿⠁⠀⠀";
        break;
    case 11:
        wcout << L"⠀⠀⠀⠀⠀⠈⠲⣄⡀⠈⠻⠃⠀⢻⣿⣿⣿⣶⣶⣶⣶⣶⣾⣿⣿⣿⡏⠀⠀⠀";
        break;
    case 12:
        wcout << L"⠀⠀⠀⠀⠀⠀⠀⠈⢿⣶⣄⡀⠀⠈⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⠁⠀⠀⠀";
        break;
    case 13:
        wcout << L"⠀⠀⠀⠀⠀⠀⠀⠀⠀⠙⢿⣿⡆⠀⠸⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⠀⠀⠀⠀";
        break;
    case 14:
        wcout << L"⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠙⠇⠀⠀⢹⣿⣿⣿⣿⣿⣿⠿⠿⠟⠃⠀⠀⠀⠀";
        break;
    case 15:
        wcout << L"⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠉⠉⠉⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀ ";
        break;
    default:
        wcout << L"⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀  ⠀⠀⠀     ";
        break;
    }
}
void printPaper(int line)
{
    _setmode(_fileno(stdout), _O_U16TEXT);
	switch(line)
	{
	case 1:
        wcout << L"⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⣀⡀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀";
        break;
	case 2:
        wcout << L"⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⢀⣼⣿⠇⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀";
        break;
	case 3:
        wcout << L"⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⢀⣤⣿⣿⠏⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀";
        break;
	case 4:
        wcout << L"⠀⠀⠀⠀⠀⠀⠀⠀⣀⣠⣤⣶⣿⣿⡿⠋⣀⣀⣀⣀⣀⣤⣤⣤⣶⣶⡄⠀⠀ ";
        break;
	case 5:
        wcout << L"⠀⠀⠀⠀⠀⠀⢀⣼⣿⣿⣿⣿⣿⡏⢀⣶⣿⣿⣿⣿⡿⠿⠿⠛⠛⠋⠁⠀⠀ ";
        break;
	case 6:
        wcout << L"⠀⠀⣾⣶⣶⣶⣿⣿⣿⣿⣿⣿⣿⡇⢸⣿⣿⣯⣁⣀⣀⣀⣀⣀⣀⣀⡀⠀⠀ ";
        break;
	case 7:
        wcout << L"⠀⠀⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⠁⣼⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⡿⠇⠀ ";
        break;
	case 8:
        wcout << L"⠀⠀⣿⣿⣿⣿⣿⣿⣿⣿⣿⢉⣁⣴⣿⣿⣿⣿⣉⣉⣉⠉⠁⠀⠀⠀⠀⠀⠀⠀";
        break;
	case 9:
        wcout << L"⠀⠀⠉⠉⠉⠉⠉⢿⣿⣿⣿⣿⣿⣿⣿⣿⣿⢿⣿⣿⣿⣿⣿⣿⣿⣶⡀⠀⠀ ";
        break;
	case 10:
        wcout << L"⠀⠀⠀⠀⠀⠀⠀⠀⠙⠛⠿⢿⣿⣿⣿⣿⣿⣤⣀⡀⠀⠀⠀⠈⠉⠉⠀⠀⠀⠀";
        break;
	case 11:
        wcout << L"⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠉⠙⠛⠿⢿⣿⣿⣷⣦⣄⠀⠀⠀⠀⠀⠀⠀";
        break;
	case 12:
        wcout << L"⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠉⠉⠀⠀⠀     ";
        break;
	default:
        wcout << L"⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀  ⠀⠀⠀     ";
        break;
	}
}
void printScissors(int line)
{
    _setmode(_fileno(stdout), _O_U16TEXT);
    switch (line)
    {
    case 1:
        wcout << L"⠀⠀⠀⠀⠀⠀⠀⠀⠀⢀⣠⣄⡀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀";
        break;
    case 2:
        wcout << L"⠀⠀⠀⠀⠀⠀⠀⠀⢰⡟⠉⠉⠙⣦⡀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀";
        break;
    case 3:
        wcout << L"⠀⠀⠀⠀⠀⠀⠀⠀⢸⡇⠀⠀⠀⠸⣧⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀";
        break;
    case 4:
        wcout << L"⠀⠀⠀⠀⠀⠀⠀⠀⠈⣿⡄⠀⠀⢠⣿⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀";
        break;
    case 5:
        wcout << L"⠀⢀⣤⡶⠶⢶⣤⣄⣀⠘⠛⠶⣴⠿⠃⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀";
        break;
    case 6:
        wcout << L"⠀⣾⡇⠀⠀⠀⠈⠙⢿⣿⣷⣶⣤⣄⣀⡀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀";
        break;
    case 7:
        wcout << L"⠀⠘⢷⣄⡀⠀⠀⢀⣸⡟⠉⠙⠻⣿⣿⣿⣷⣶⣤⣄⣀⠀⠀⠀⠀⠀⠀⠀⠀⠀";
        break;
    case 8:
        wcout << L"⠀⠀⠀⠉⠛⠛⠛⠛⠉⠀⠀⢸⣦⣄⡉⠛⠿⣿⣿⣿⣿⣿⣶⣤⣀⠀⠀⠀⠀⠀";
        break;
    case 9:
        wcout << L"⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⢿⣿⣿⣆⠀⠀⠙⠻⢿⣿⣿⣿⣿⣷⣄⠀⠀⠀";
        break;
    case 10:
        wcout << L"⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠈⣿⣿⣿⣦⠀⠀⠀⠀⠈⠙⠻⢿⣿⣿⣷⡀⠀";
        break;
    case 11:
        wcout << L"⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠸⣿⣿⣿⣧⡀⠀⠀⠀⠀⠀⠀⠉⠛⠿⣷⠀";
        break;
    case 12:
        wcout << L"⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠹⣿⣿⣿⣷⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀";
        break;
    case 13:
        wcout << L"⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠙⣿⣿⣿⣧⡀⠀⠀⠀⠀⠀⠀⠀⠀⠀";
        break;
    case 14:
        wcout << L"⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠈⠻⣿⣿⣷⡀⠀⠀⠀⠀⠀⠀⠀⠀";
        break;
    case 15:
        wcout << L"⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠉⠛⠓⠀⠀      ";
        break;
    default:
        wcout << L"⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀  ⠀⠀⠀     ";
        break;
    }
}
void printEnemyRock(int line)
{
    wcout << L"⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀";

    switch (line)
    {
    case 1:
        wcout << L"⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⣀⢀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀" << endl;
        break;
    case 2:
        wcout << L"⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⡀⣄⣦⣿⣿⣿⣿⣾⣶⣤⣠⣀⠀⠀⠀⠀⠀⠀" << endl;
        break;
    case 3:
        wcout << L"⠀⠀⠀⠀⠀⠀⠀⠀⡀⣄⣦⣷⣿⣿⣿⣿⣿⣿⣿⣿⣹⠋⠟⡿⣿⣾⠀⠀⠀⠀" << endl;
        break;
    case 4:
        wcout << L"⠀⠀⠀⠀⠀⠀⡄⣷⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⢸⠀⣿⣿⣿⢸⠀⠀⠀" << endl;
        break;
    case 5:
        wcout << L"⠀⠀⠀⠀⠀⣆⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⢸⣇⣿⠿⡿⣿⢀⠀⠀" << endl;
        break;
    case 6:
        wcout << L"⠀⠀⠀⠀⣆⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⢿⠉⣿⣿⣾⣿⣿⠀⠀⠁⠈⠀⠀" << endl;
        break;
    case 7:
        wcout << L"⠀⠀⠀⣆⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⠹⠀⡀⣿⣿⣿⣿⣸⣦⣿⣠⠀⠀⠀" << endl;
        break;
    case 8:
        wcout << L"⠀⠀⣧⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⢿⠘⠀⣄⣿⣿⣿⣿⣿⣿⣿⠻⠈⠀⠀⠀" << endl;
        break;
    case 9:
        wcout << L"⠀⠀⡇⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⠻⠀⣄⣷⣿⣿⣿⣿⣿⣿⠻⠈⠀⠀⠀⠀⠀" << endl;
        break;
    case 10:
        wcout << L"⠀⠀⠁⣿⣿⣿⣿⣿⣿⠿⠻⠛⠘⡀⣧⣿⣿⠹⡏⣿⣿⠻⠈⠀⠀⠀⠀⠀⠀⠀" << endl;
        break;
    case 11:
        wcout << L"⠀⠀⠀⡏⣿⣿⣿⣾⣶⣶⣶⣶⣶⣿⣿⣿⢻⠀⠃⠻⠈⡀⣄⠲⠈⠀⠀⠀⠀⠀" << endl;
        break;
    case 12:
        wcout << L"⠀⠀⠀⠁⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⠈⠀⡀⣄⣶⢿⠈⠀⠀⠀⠀⠀⠀⠀" << endl;
        break;
    case 13:
        wcout << L"⠀⠀⠀⠀⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⠸⠀⡆⣿⢿⠙⠀⠀⠀⠀⠀⠀⠀⠀⠀" << endl;
        break;
    case 14:
        wcout << L"⠀⠀⠀⠀⠃⠟⠿⠿⣿⣿⣿⣿⣿⣿⢹⠀⠀⠇⠙⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀" << endl;
        break;
    case 15:
        wcout << L"⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠉⠉⠉⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀   " << endl;
        break;
    default:
        wcout << L"⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀  ⠀⠀⠀     " << endl;
        break;
    }
}
void printEnemyPaper(int line)
{
    wcout << L"⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀";
    switch (line)
    {
    case 1:
        wcout << L"⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⡀⣀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀" << endl;
        break;
    case 2:
        wcout << L"⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠇⣿⣼⢀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀" << endl;
        break;
    case 3:
        wcout << L"⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠏⣿⣿⣤⢀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀" << endl;
        break;
    case 4:
        wcout << L"⠀⠀⠀⡄⣶⣶⣤⣤⣤⣀⣀⣀⣀⣀⠋⡿⣿⣿⣶⣤⣠⣀⠀⠀⠀⠀⠀⠀⠀⠀" << endl;
        break;
    case 5:
        wcout << L"⠀⠀⠀⠁⠋⠛⠛⠿⠿⡿⣿⣿⣿⣿⣶⢀⡏⣿⣿⣿⣿⣿⣼⢀⠀⠀⠀⠀⠀⠀" << endl;
        break;
    case 6:
        wcout << L"⠀⠀⠀⡀⣀⣀⣀⣀⣀⣀⣀⣁⣯⣿⣿⢸⡇⣿⣿⣿⣿⣿⣿⣿⣶⣶⣶⣾⠀⠀" << endl;
        break;
    case 7:
        wcout << L"⠀⠀⠇⡿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣼⠁⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⠀⠀" << endl;
        break;
    case 8:
        wcout << L"⠀⠀⠀⠀⠀⠀⠀⠁⠉⣉⣉⣉⣿⣿⣿⣿⣴⣁⢉⣿⣿⣿⣿⣿⣿⣿⣿⣿⠀⠀" << endl;
        break;
    case 9:
        wcout << L"⠀⠀⠀⡀⣶⣿⣿⣿⣿⣿⣿⣿⢿⣿⣿⣿⣿⣿⣿⣿⣿⣿⢿⠉⠉⠉⠉⠉⠀⠀" << endl;
        break;
    case 10:
        wcout << L"⠀⠀⠀⠀⠉⠉⠈⠀⠀⠀⡀⣀⣤⣿⣿⣿⣿⣿⢿⠿⠛⠙⠀⠀⠀⠀⠀⠀⠀⠀" << endl;
        break;
    case 11:
        wcout << L"⠀⠀⠀⠀⠀⠀⠀⣄⣦⣷⣿⣿⢿⠿⠛⠙⠉⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀" << endl;
        break;
    case 12:
        wcout << L"⠀⠀      ⠉⠉⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀ " << endl;
        break;
    default:
        wcout << L"⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀  ⠀⠀⠀     " << endl;
        break;
    }
}
void printEnemyScissors(int line)
{
    wcout << L"⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀";
    switch (line)
    {
    case 1:
        wcout << L"⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⡀⣄⣠⢀⠀⠀⠀⠀⠀⠀⠀⠀⠀" << endl;
        break;
    case 2:
        wcout << L"⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⡀⣦⠙⠉⠉⡟⢰⠀⠀⠀⠀⠀⠀⠀⠀" << endl;
        break;
    case 3:
        wcout << L"⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⣧⠸⠀⠀⠀⡇⢸⠀⠀⠀⠀⠀⠀⠀⠀" << endl;
        break;
    case 4:
        wcout << L"⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⣿⢠⠀⠀⡄⣿⠈⠀⠀⠀⠀⠀⠀⠀⠀" << endl;
        break;
    case 5:
        wcout << L"⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠃⠿⣴⠶⠛⠘⣀⣄⣤⢶⠶⡶⣤⢀⠀" << endl;
        break;
    case 6:
        wcout << L"⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⡀⣀⣄⣤⣶⣷⣿⢿⠙⠈⠀⠀⠀⡇⣾⠀" << endl;
        break;
    case 7:
        wcout << L"⠀⠀⠀⠀⠀⠀⠀⠀⠀⣀⣄⣤⣶⣷⣿⣿⣿⠻⠙⠉⡟⣸⢀⠀⠀⡀⣄⢷⠘⠀" << endl;
        break;
    case 8:
        wcout << L"⠀⠀⠀⠀⠀⣀⣤⣶⣿⣿⣿⣿⣿⠿⠛⡉⣄⣦⢸⠀⠀⠉⠛⠛⠛⠛⠉⠀⠀⠀" << endl;
        break;
    case 9:
        wcout << L"⠀⠀⠀⣄⣷⣿⣿⣿⣿⢿⠻⠙⠀⠀⣆⣿⣿⢿⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀" << endl;
        break;
    case 10:
        wcout << L"⠀⡀⣷⣿⣿⢿⠻⠙⠈⠀⠀⠀⠀⣦⣿⣿⣿⠈⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀" << endl;
        break;
    case 11:
        wcout << L"⠀⣷⠿⠛⠉⠀⠀⠀⠀⠀⠀⡀⣧⣿⣿⣿⠸⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀" << endl;
        break;
    case 12:
        wcout << L"⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⣷⣿⣿⣿⠹⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀" << endl;
        break;
    case 13:
        wcout << L"⠀⠀⠀⠀⠀⠀⠀⠀⠀⡀⣧⣿⣿⣿⠙⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀" << endl;
        break;
    case 14:
        wcout << L"⠀⠀⠀⠀⠀⠀⠀⠀⡀⣷⣿⣿⠻⠈⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀" << endl;
        break;
    case 15:
        wcout << L"⠀⠀       ⠓⠛⠉⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀" << endl;
        break;
    default:
        wcout << L"⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀  ⠀⠀⠀     " << endl;
        break;
    }
}


