#include <iostream>
#include <ctime>

void drawBoard(char *spaces);
void playerMove(char *spaces, char player);
void computerMove(char *spaces, char computer);
bool checkWinner(char *spaces, char player, char computer);
bool checkTie(char *spaces);

int main()
{

    char spaces[9] = {' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '};
    char player = 'X';
    char computer = 'O';
    bool running = true;

        drawBoard(spaces);

    while (running)
    {
        playerMove(spaces, player);
        drawBoard(spaces);

        computerMove(spaces, computer);
        drawBoard(spaces);
    }

    return 0;
}

// functions
void drawBoard(char *spaces)
{
std:
    std::cout << '\n';
    std::cout << "     |     |     " << '\n';
    std::cout << " " << spaces[0] << "   |  " << spaces[1] << " |  " << spaces[2] << '\n';
    std::cout << "_____|_____|_____" << '\n';

    std::cout << "     |     |     " << '\n';
    std::cout << " " << spaces[3] << "   |  " << spaces[4] << " |  " << spaces[5] << '\n';
    std::cout << "_____|_____|_____" << '\n';

    std::cout << "     |     |     " << '\n';
    std::cout << " " << spaces[6] << "   |  " << spaces[7] << " |  " << spaces[8] << '\n';
    std::cout << "_____|_____|_____" << '\n';
}

void playerMove(char *spaces, char player)
{
    int number;

    do
    {

        std::cout << "Enter a spot place a marker (1-9)";
        std::cin >> number;

        number--;

        if (spaces[number] == ' ')
        {
            spaces[number] = player;
        }

        // nums 0 to 8 pls
    } while (!number > 0 || !number < 8);
}
void computerMove(char *spaces, char computer)
{
}

bool checkWinner(char *spaces, char player, char computer)
{
    return 0;
}

bool checkTie(char *spaces)
{
    return 0;
}