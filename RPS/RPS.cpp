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


    printf("%s", "Hello, welcome to my Rock, Paper, Scissors Game!\n");

    while (true) {
        printf("%s", "Type 1 for Rock\n");
        printf("%s", "Type 2 for Paper\n");
        printf("%s", "Type 3 for Scissors\n");
        printf("%s", "Type 4 to exit: ");

        cin >> userChoice;
        if(userChoice == 1)
        {
            printf("%s", "You chose Rock!!\n");
            enemyChoice(1);
        }else if(userChoice == 2)
        {
            printf("%s", "You chose Paper!!\n");
            enemyChoice(2);
        }else if(userChoice == 3)
        {
            printf("%s", "You chose Scissors!!\n");
            enemyChoice(3);
        }else if(userChoice == 4)
        {
            return 0;
        }else printf("%s", "not a valid user input. Try again.\n");
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
    if (userChoice == enemyChoice) printf("%s", "\nIt's a tie!\n");
    else if (userChoice + 1 == enemyChoice || userChoice == enemyChoice + 2) printf("%s", "\nLooks like you lost!\n");
    else printf("%s", "\nYou Win!!\n");
    
}

void printRock(int line)
{
    _setmode(_fileno(stdout), _O_U16TEXT);
    switch (line)
    {
    case 1:
        wprintf(L"⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⢀⣀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀");
        break;
    case 2:
        wprintf(L"⠀⠀⠀⠀⠀⠀⣀⣠⣤⣶⣾⣿⣿⣿⣿⣦⣄⡀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀ ");
        break;
    case 3:
        wprintf( L"⠀⠀⠀⠀⣾⣿⡿⠟⠋⣹⣿⣿⣿⣿⣿⣿⣿⣿⣷⣦⣄⡀⠀⠀⠀⠀⠀⠀  ");
        break;
    case 4:
        wprintf( L"⠀⠀⠀⢸⣿⣿⣿⠀⢸⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣷⡄⠀⠀⠀⠀⠀⠀");
        break;
    case 5:
        wprintf( L"⠀⠀⢀⣿⡿⠿⣿⣇⢸⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣆⠀⠀⠀⠀⠀");
        break;
    case 6:
        wprintf( L"⠀⠀⠈⠁⠀⠀⣿⣿⣾⣿⣿⠉⢿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣆⠀⠀⠀⠀");
        break;
    case 7:
        wprintf( L"⠀⠀⠀⣠⣿⣦⣸⣿⣿⣿⣿⡀⠀⠹⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣆⠀⠀⠀");
        break;
    case 8:
        wprintf( L"⠀⠀⠀⠈⠻⣿⣿⣿⣿⣿⣿⣿⣄⠀⠘⢿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣧⠀⠀");
        break;
    case 9:
        wprintf( L"⠀⠀⠀⠀⠀⠈⠻⣿⣿⣿⣿⣿⣿⣷⣄⠀⠻⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⡇⠀⠀");
        break;
    case 10:
        wprintf( L"⠀⠀⠀⠀⠀⠀⠀⠈⠻⣿⣿⡏⠹⣿⣿⣧⡀⠘⠛⠻⠿⣿⣿⣿⣿⣿⣿⠁⠀⠀");
        break;
    case 11:
        wprintf( L"⠀⠀⠀⠀⠀⠈⠲⣄⡀⠈⠻⠃⠀⢻⣿⣿⣿⣶⣶⣶⣶⣶⣾⣿⣿⣿⡏⠀⠀⠀");
        break;
    case 12:
        wprintf( L"⠀⠀⠀⠀⠀⠀⠀⠈⢿⣶⣄⡀⠀⠈⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⠁⠀⠀⠀");
        break;
    case 13:
        wprintf( L"⠀⠀⠀⠀⠀⠀⠀⠀⠀⠙⢿⣿⡆⠀⠸⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⠀⠀⠀⠀");
        break;
    case 14:
        wprintf( L"⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠙⠇⠀⠀⢹⣿⣿⣿⣿⣿⣿⠿⠿⠟⠃⠀⠀⠀⠀");
        break;
    case 15:
        wprintf( L"⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠉⠉⠉⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀ ");
        break;
    default:
        wprintf( L"⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀  ⠀⠀⠀     ");
        break;
    }
}
void printPaper(int line)
{
    _setmode(_fileno(stdout), _O_U16TEXT);
	switch(line)
	{
	case 1:
        wprintf( L"⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⣀⡀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀");
        break;
	case 2:
        wprintf( L"⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⢀⣼⣿⠇⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀");
        break;
	case 3:
        wprintf( L"⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⢀⣤⣿⣿⠏⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀");
        break;
	case 4:
        wprintf( L"⠀⠀⠀⠀⠀⠀⠀⠀⣀⣠⣤⣶⣿⣿⡿⠋⣀⣀⣀⣀⣀⣤⣤⣤⣶⣶⡄⠀⠀ ");
        break;
	case 5:
        wprintf( L"⠀⠀⠀⠀⠀⠀⢀⣼⣿⣿⣿⣿⣿⡏⢀⣶⣿⣿⣿⣿⡿⠿⠿⠛⠛⠋⠁⠀⠀ ");
        break;
	case 6:
        wprintf( L"⠀⠀⣾⣶⣶⣶⣿⣿⣿⣿⣿⣿⣿⡇⢸⣿⣿⣯⣁⣀⣀⣀⣀⣀⣀⣀⡀⠀⠀ ");
        break;
	case 7:
        wprintf( L"⠀⠀⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⠁⣼⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⡿⠇⠀ ");
        break;
	case 8:
        wprintf( L"⠀⠀⣿⣿⣿⣿⣿⣿⣿⣿⣿⢉⣁⣴⣿⣿⣿⣿⣉⣉⣉⠉⠁⠀⠀⠀⠀⠀⠀⠀");
        break;
	case 9:
        wprintf( L"⠀⠀⠉⠉⠉⠉⠉⢿⣿⣿⣿⣿⣿⣿⣿⣿⣿⢿⣿⣿⣿⣿⣿⣿⣿⣶⡀⠀⠀ ");
        break;
	case 10:
        wprintf( L"⠀⠀⠀⠀⠀⠀⠀⠀⠙⠛⠿⢿⣿⣿⣿⣿⣿⣤⣀⡀⠀⠀⠀⠈⠉⠉⠀⠀⠀⠀");
        break;
	case 11:
        wprintf( L"⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠉⠙⠛⠿⢿⣿⣿⣷⣦⣄⠀⠀⠀⠀⠀⠀⠀");
        break;
	case 12:
        wprintf( L"⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠉⠉⠀⠀⠀     ");
        break;
	default:
        wprintf( L"⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀  ⠀⠀⠀     ");
        break;
	}
}
void printScissors(int line)
{
    _setmode(_fileno(stdout), _O_U16TEXT);
    switch (line)
    {
    case 1:
        wprintf( L"⠀⠀⠀⠀⠀⠀⠀⠀⠀⢀⣠⣄⡀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀");
        break;
    case 2:
        wprintf( L"⠀⠀⠀⠀⠀⠀⠀⠀⢰⡟⠉⠉⠙⣦⡀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀");
        break;
    case 3:
        wprintf( L"⠀⠀⠀⠀⠀⠀⠀⠀⢸⡇⠀⠀⠀⠸⣧⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀");
        break;
    case 4:
        wprintf( L"⠀⠀⠀⠀⠀⠀⠀⠀⠈⣿⡄⠀⠀⢠⣿⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀");
        break;
    case 5:
        wprintf( L"⠀⢀⣤⡶⠶⢶⣤⣄⣀⠘⠛⠶⣴⠿⠃⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀");
        break;
    case 6:
        wprintf( L"⠀⣾⡇⠀⠀⠀⠈⠙⢿⣿⣷⣶⣤⣄⣀⡀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀");
        break;
    case 7:
        wprintf( L"⠀⠘⢷⣄⡀⠀⠀⢀⣸⡟⠉⠙⠻⣿⣿⣿⣷⣶⣤⣄⣀⠀⠀⠀⠀⠀⠀⠀⠀⠀");
        break;
    case 8:
        wprintf( L"⠀⠀⠀⠉⠛⠛⠛⠛⠉⠀⠀⢸⣦⣄⡉⠛⠿⣿⣿⣿⣿⣿⣶⣤⣀⠀⠀⠀⠀⠀");
        break;
    case 9:
        wprintf( L"⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⢿⣿⣿⣆⠀⠀⠙⠻⢿⣿⣿⣿⣿⣷⣄⠀⠀⠀");
        break;
    case 10:
        wprintf( L"⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠈⣿⣿⣿⣦⠀⠀⠀⠀⠈⠙⠻⢿⣿⣿⣷⡀⠀");
        break;
    case 11:
        wprintf( L"⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠸⣿⣿⣿⣧⡀⠀⠀⠀⠀⠀⠀⠉⠛⠿⣷⠀");
        break;
    case 12:
        wprintf( L"⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠹⣿⣿⣿⣷⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀");
        break;
    case 13:
        wprintf( L"⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠙⣿⣿⣿⣧⡀⠀⠀⠀⠀⠀⠀⠀⠀⠀");
        break;
    case 14:
        wprintf( L"⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠈⠻⣿⣿⣷⡀⠀⠀⠀⠀⠀⠀⠀⠀");
        break;
    case 15:
        wprintf( L"⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠉⠛⠓⠀⠀      ");
        break;
    default:
        wprintf( L"⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀  ⠀⠀⠀     ");
        break;
    }
}
void printEnemyRock(int line)
{
    wprintf( L"⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀");

    switch (line)
    {
    case 1:
        wprintf( L"⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⣀⢀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀\n");
        break;
    case 2:
        wprintf( L"⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⡀⣄⣦⣿⣿⣿⣿⣾⣶⣤⣠⣀⠀⠀⠀⠀⠀⠀\n");
        break;
    case 3:
        wprintf( L"⠀⠀⠀⠀⠀⠀⠀⠀⡀⣄⣦⣷⣿⣿⣿⣿⣿⣿⣿⣿⣹⠋⠟⡿⣿⣾⠀⠀⠀⠀\n");
        break;
    case 4:
        wprintf( L"⠀⠀⠀⠀⠀⠀⡄⣷⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⢸⠀⣿⣿⣿⢸⠀⠀⠀\n");
        break;
    case 5:
        wprintf( L"⠀⠀⠀⠀⠀⣆⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⢸⣇⣿⠿⡿⣿⢀⠀⠀\n");
        break;
    case 6:
        wprintf( L"⠀⠀⠀⠀⣆⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⢿⠉⣿⣿⣾⣿⣿⠀⠀⠁⠈⠀⠀\n");
        break;
    case 7:
        wprintf( L"⠀⠀⠀⣆⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⠹⠀⡀⣿⣿⣿⣿⣸⣦⣿⣠⠀⠀⠀\n");
        break;
    case 8:
        wprintf( L"⠀⠀⣧⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⢿⠘⠀⣄⣿⣿⣿⣿⣿⣿⣿⠻⠈⠀⠀⠀\n");
        break;
    case 9:
        wprintf( L"⠀⠀⡇⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⠻⠀⣄⣷⣿⣿⣿⣿⣿⣿⠻⠈⠀⠀⠀⠀⠀\n");
        break;
    case 10:
        wprintf( L"⠀⠀⠁⣿⣿⣿⣿⣿⣿⠿⠻⠛⠘⡀⣧⣿⣿⠹⡏⣿⣿⠻⠈⠀⠀⠀⠀⠀⠀⠀\n");
        break;
    case 11:
        wprintf( L"⠀⠀⠀⡏⣿⣿⣿⣾⣶⣶⣶⣶⣶⣿⣿⣿⢻⠀⠃⠻⠈⡀⣄⠲⠈⠀⠀⠀⠀⠀\n");
        break;
    case 12:
        wprintf( L"⠀⠀⠀⠁⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⠈⠀⡀⣄⣶⢿⠈⠀⠀⠀⠀⠀⠀⠀\n");
        break;
    case 13:
        wprintf( L"⠀⠀⠀⠀⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⠸⠀⡆⣿⢿⠙⠀⠀⠀⠀⠀⠀⠀⠀⠀\n");
        break;
    case 14:
        wprintf( L"⠀⠀⠀⠀⠃⠟⠿⠿⣿⣿⣿⣿⣿⣿⢹⠀⠀⠇⠙⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀\n");
        break;
    case 15:
        wprintf( L"⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠉⠉⠉⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀   \n");
        break;
    default:
        wprintf( L"⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀  ⠀⠀⠀     \n");
        break;
    }
}
void printEnemyPaper(int line)
{
    wprintf( L"⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀");
    switch (line)
    {
    case 1:
        wprintf( L"⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⡀⣀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀\n");
        break;
    case 2:
        wprintf( L"⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠇⣿⣼⢀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀\n");
        break;
    case 3:
        wprintf( L"⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠏⣿⣿⣤⢀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀\n");
        break;
    case 4:
        wprintf( L"⠀⠀⠀⡄⣶⣶⣤⣤⣤⣀⣀⣀⣀⣀⠋⡿⣿⣿⣶⣤⣠⣀⠀⠀⠀⠀⠀⠀⠀⠀\n");
        break;
    case 5:
        wprintf( L"⠀⠀⠀⠁⠋⠛⠛⠿⠿⡿⣿⣿⣿⣿⣶⢀⡏⣿⣿⣿⣿⣿⣼⢀⠀⠀⠀⠀⠀⠀\n");
        break;
    case 6:
        wprintf( L"⠀⠀⠀⡀⣀⣀⣀⣀⣀⣀⣀⣁⣯⣿⣿⢸⡇⣿⣿⣿⣿⣿⣿⣿⣶⣶⣶⣾⠀⠀\n");
        break;
    case 7:
        wprintf( L"⠀⠀⠇⡿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣼⠁⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⠀⠀\n");
        break;
    case 8:
        wprintf( L"⠀⠀⠀⠀⠀⠀⠀⠁⠉⣉⣉⣉⣿⣿⣿⣿⣴⣁⢉⣿⣿⣿⣿⣿⣿⣿⣿⣿⠀⠀\n");
        break;
    case 9:
        wprintf( L"⠀⠀⠀⡀⣶⣿⣿⣿⣿⣿⣿⣿⢿⣿⣿⣿⣿⣿⣿⣿⣿⣿⢿⠉⠉⠉⠉⠉⠀⠀\n");
        break;
    case 10:
        wprintf( L"⠀⠀⠀⠀⠉⠉⠈⠀⠀⠀⡀⣀⣤⣿⣿⣿⣿⣿⢿⠿⠛⠙⠀⠀⠀⠀⠀⠀⠀⠀\n");
        break;
    case 11:
        wprintf( L"⠀⠀⠀⠀⠀⠀⠀⣄⣦⣷⣿⣿⢿⠿⠛⠙⠉⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀\n");
        break;
    case 12:
        wprintf( L"⠀⠀      ⠉⠉⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀ \n");
        break;
    default:
        wprintf( L"⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀  ⠀⠀⠀     \n");
        break;
    }
}
void printEnemyScissors(int line)
{
    wprintf( L"⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀");
    switch (line)
    {
    case 1:
        wprintf( L"⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⡀⣄⣠⢀⠀⠀⠀⠀⠀⠀⠀⠀⠀\n");
        break;
    case 2:
        wprintf( L"⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⡀⣦⠙⠉⠉⡟⢰⠀⠀⠀⠀⠀⠀⠀⠀\n");
        break;
    case 3:
        wprintf( L"⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⣧⠸⠀⠀⠀⡇⢸⠀⠀⠀⠀⠀⠀⠀⠀\n");
        break;
    case 4:
        wprintf( L"⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⣿⢠⠀⠀⡄⣿⠈⠀⠀⠀⠀⠀⠀⠀⠀\n");
        break;
    case 5:
        wprintf( L"⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠃⠿⣴⠶⠛⠘⣀⣄⣤⢶⠶⡶⣤⢀⠀\n");
        break;
    case 6:
        wprintf( L"⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⡀⣀⣄⣤⣶⣷⣿⢿⠙⠈⠀⠀⠀⡇⣾⠀\n");
        break;
    case 7:
        wprintf( L"⠀⠀⠀⠀⠀⠀⠀⠀⠀⣀⣄⣤⣶⣷⣿⣿⣿⠻⠙⠉⡟⣸⢀⠀⠀⡀⣄⢷⠘⠀\n");
        break;
    case 8:
        wprintf( L"⠀⠀⠀⠀⠀⣀⣤⣶⣿⣿⣿⣿⣿⠿⠛⡉⣄⣦⢸⠀⠀⠉⠛⠛⠛⠛⠉⠀⠀⠀\n");
        break;
    case 9:
        wprintf( L"⠀⠀⠀⣄⣷⣿⣿⣿⣿⢿⠻⠙⠀⠀⣆⣿⣿⢿⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀\n");
        break;
    case 10:
        wprintf( L"⠀⡀⣷⣿⣿⢿⠻⠙⠈⠀⠀⠀⠀⣦⣿⣿⣿⠈⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀\n");
        break;
    case 11:
        wprintf( L"⠀⣷⠿⠛⠉⠀⠀⠀⠀⠀⠀⡀⣧⣿⣿⣿⠸⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀\n");
        break;
    case 12:
        wprintf( L"⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⣷⣿⣿⣿⠹⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀\n");
        break;
    case 13:
        wprintf( L"⠀⠀⠀⠀⠀⠀⠀⠀⠀⡀⣧⣿⣿⣿⠙⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀\n");
        break;
    case 14:
        wprintf( L"⠀⠀⠀⠀⠀⠀⠀⠀⡀⣷⣿⣿⠻⠈⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀\n");
        break;
    case 15:
        wprintf( L"⠀⠀       ⠓⠛⠉⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀\n");
        break;
    default:
        wprintf( L"⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀  ⠀⠀⠀     \n");
        break;
    }
}
