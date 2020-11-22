#include <iostream>
#include <string>
#include <algorithm>
#include <conio.h>
#include <ctime>
#include <array>
#include <sstream>

class YatzyInfo
{
public:
    static const int row = 2, col = 5, sRow = 18, sCol = 9;
    int status = 0, dieCount = 0, zero = 0;


    int dice1 = rand() % 6 + 1, dice2 = rand() % 6 + 1, dice3 = rand() % 6 + 1, dice4 = rand() % 6 + 1, dice5 = rand() % 6 + 1;

    int diceBoard[row][col]
    {
        {dice1, dice2, dice3, dice4, dice5},
        {status, status, status, status, status}
    };

    int scoreBoard[sRow][sCol]
    {
        {zero, zero, zero, zero, zero, zero, zero, zero, zero},
        {zero, zero, zero, zero, zero, zero, zero, zero, zero},
        {zero, zero, zero, zero, zero, zero, zero, zero, zero},
        {zero, zero, zero, zero, zero, zero, zero, zero, zero},
        {zero, zero, zero, zero, zero, zero, zero, zero, zero},
        {zero, zero, zero, zero, zero, zero, zero, zero, zero},
        {zero, zero, zero, zero, zero, zero, zero, zero, zero},
        {zero, zero, zero, zero, zero, zero, zero, zero, zero},
        {zero, zero, zero, zero, zero, zero, zero, zero, zero},
        {zero, zero, zero, zero, zero, zero, zero, zero, zero},
        {zero, zero, zero, zero, zero, zero, zero, zero, zero},
        {zero, zero, zero, zero, zero, zero, zero, zero, zero},
        {zero, zero, zero, zero, zero, zero, zero, zero, zero},
        {zero, zero, zero, zero, zero, zero, zero, zero, zero},
        {zero, zero, zero, zero, zero, zero, zero, zero, zero},
        {zero, zero, zero, zero, zero, zero, zero, zero, zero},
        {zero, zero, zero, zero, zero, zero, zero, zero, zero},
        {zero, zero, zero, zero, zero, zero, zero, zero, zero}
    };

    bool diceRoll = true;

public:
    void printBoard()
    {
        for (int i = 0; i < row; i++)
        {
            std::cout << "---------------\n";
            for (int j = 0; j < col; j++)
            {
                std::cout << "|" << diceBoard[i][j] << "|";
            }
            std::cout << "\n";
        }
        std::cout << "---------------\n";
    }

    void printSort()
    {   
        std::cout << "Your rolls: ";

        for (int i{ 0 }; i < col; i++)
        {
            std::cout << diceBoard[0][i] << " ";
        }
        std::cout << "\n\n";
    }

    void selectionSortInt2D()
    {
        for (int startNumber{ 0 }; startNumber < col - 1; startNumber++)
        {
            int smallNumber{ startNumber };

            for (int currentNumber{ startNumber + 1 }; currentNumber < col; currentNumber++)
            {
                if (diceBoard[0][currentNumber] < diceBoard[0][smallNumber])
                {
                    smallNumber = currentNumber;
                }
            }
            std::swap(diceBoard[0][startNumber], diceBoard[0][smallNumber]);
        }
    }

    void selectionSortStr(std::string str)
    {
        for (int startNumber{ 0 }; startNumber < col - 1; startNumber++)
        {
            int smallNumber{ startNumber };

            for (int currentNumber{ startNumber + 1 }; currentNumber < col; currentNumber++)
            {
                if (str[currentNumber] < str[smallNumber])
                {
                    smallNumber = currentNumber;
                }
            }
            std::swap(str[startNumber], str[smallNumber]);
        }
    }

    void printScore()
    {
        for (int i = 0; i < sRow; i++)
        {
            if (i < 6)
            {
                std::cout << "   " << i + 1 << "'s ";
            }

            if (i == 6)
            {
                std::cout << "\t--------------------------- Please press 1-6 for respective added die numbers. 7) pair, 8) 2 pairs,\n";
                std::cout << "Sum";
            }
            else if (i == 7)
            {
                std::cout << "Bonus";
            }
            else if (i == 8)
            {
                std::cout << i-7 << " pair";
            }
            else if (i == 9)
            {
                std::cout << i - 7 << " pairs";
            }
            else if (i < 12 && i > 9)
            {
                std::cout << i - 7 << " alike";
            }
            else if (i == 12)
            {
                std::cout << "Small s";
            }
            else if (i == 13)
            {
                std::cout << "Big s";
            }
            else if (i == 14)
            {
                std::cout << "House";
            }
            else if (i == 15)
            {
                std::cout << "Chance";
            }
            else if (i == 16)
            {
                std::cout << "Yatzy";
            }
            else if (i == 17)
            {
                std::cout << "\t--------------------------- 9) 3 alike, 0) 4 alike, q) small s, w) big s, e) house, r) chance, t) yatzy.\n";
                std::cout << "Total";
            }

            std::cout << "\t";

            for (int j = 0; j < sCol; j++)
            {
                std::cout << "|" << scoreBoard[i][j] << "|";
            }
            std::cout << "\n";
        }
    }
};

class YatzyInfo2
{
public:
    static const int row = 2, col = 5, sRow = 18, sCol = 9;
    int status = 0, dieCount = 0, zero = 0;


    int dice1 = rand() % 6 + 1, dice2 = rand() % 6 + 1, dice3 = rand() % 6 + 1, dice4 = rand() % 6 + 1, dice5 = rand() % 6 + 1;

    int diceBoard[row][col]
    {
        {dice1, dice2, dice3, dice4, dice5},
        {status, status, status, status, status}
    };

    int scoreBoard[sRow][sCol]
    {
        {zero, zero, zero, zero, zero, zero, zero, zero, zero},
        {zero, zero, zero, zero, zero, zero, zero, zero, zero},
        {zero, zero, zero, zero, zero, zero, zero, zero, zero},
        {zero, zero, zero, zero, zero, zero, zero, zero, zero},
        {zero, zero, zero, zero, zero, zero, zero, zero, zero},
        {zero, zero, zero, zero, zero, zero, zero, zero, zero},
        {zero, zero, zero, zero, zero, zero, zero, zero, zero},
        {zero, zero, zero, zero, zero, zero, zero, zero, zero},
        {zero, zero, zero, zero, zero, zero, zero, zero, zero},
        {zero, zero, zero, zero, zero, zero, zero, zero, zero},
        {zero, zero, zero, zero, zero, zero, zero, zero, zero},
        {zero, zero, zero, zero, zero, zero, zero, zero, zero},
        {zero, zero, zero, zero, zero, zero, zero, zero, zero},
        {zero, zero, zero, zero, zero, zero, zero, zero, zero},
        {zero, zero, zero, zero, zero, zero, zero, zero, zero},
        {zero, zero, zero, zero, zero, zero, zero, zero, zero},
        {zero, zero, zero, zero, zero, zero, zero, zero, zero},
        {zero, zero, zero, zero, zero, zero, zero, zero, zero}
    };

    bool diceRoll = true;

public:
    void printBoard()
    {
        for (int i = 0; i < row; i++)
        {
            std::cout << "---------------\n";
            for (int j = 0; j < col; j++)
            {
                std::cout << "|" << diceBoard[i][j] << "|";
            }
            std::cout << "\n";
        }
        std::cout << "---------------\n";
    }

    void printSort()
    {
        std::cout << "Your rolls: ";

        for (int i{ 0 }; i < col; i++)
        {
            std::cout << diceBoard[0][i] << " ";
        }
        std::cout << "\n\n";
    }

    void selectionSortInt2D()
    {
        for (int startNumber{ 0 }; startNumber < col - 1; startNumber++)
        {
            int smallNumber{ startNumber };

            for (int currentNumber{ startNumber + 1 }; currentNumber < col; currentNumber++)
            {
                if (diceBoard[0][currentNumber] < diceBoard[0][smallNumber])
                {
                    smallNumber = currentNumber;
                }
            }
            std::swap(diceBoard[0][startNumber], diceBoard[0][smallNumber]);
        }
    }

    void selectionSortStr(std::string str)
    {
        for (int startNumber{ 0 }; startNumber < col - 1; startNumber++)
        {
            int smallNumber{ startNumber };

            for (int currentNumber{ startNumber + 1 }; currentNumber < col; currentNumber++)
            {
                if (str[currentNumber] < str[smallNumber])
                {
                    smallNumber = currentNumber;
                }
            }
            std::swap(str[startNumber], str[smallNumber]);
        }
    }

    void printScore()
    {
        for (int i = 0; i < sRow; i++)
        {
            if (i < 6)
            {
                std::cout << "   " << i + 1 << "'s ";
            }

            if (i == 6)
            {
                std::cout << "\t--------------------------- Please press 1-6 for respective added die numbers. 7) pair, 8) 2 pairs,\n";
                std::cout << "Sum";
            }
            else if (i == 7)
            {
                std::cout << "Bonus";
            }
            else if (i == 8)
            {
                std::cout << i - 7 << " pair";
            }
            else if (i == 9)
            {
                std::cout << i - 7 << " pairs";
            }
            else if (i < 12 && i > 9)
            {
                std::cout << i - 7 << " alike";
            }
            else if (i == 12)
            {
                std::cout << "Small s";
            }
            else if (i == 13)
            {
                std::cout << "Big s";
            }
            else if (i == 14)
            {
                std::cout << "House";
            }
            else if (i == 15)
            {
                std::cout << "Chance";
            }
            else if (i == 16)
            {
                std::cout << "Yatzy";
            }
            else if (i == 17)
            {
                std::cout << "\t--------------------------- 9) 3 alike, 0) 4 alike, q) small s, w) big s, e) house, r) chance, t) yatzy.\n";
                std::cout << "Total";
            }

            std::cout << "\t";

            for (int j = 0; j < sCol; j++)
            {
                std::cout << "|" << scoreBoard[i][j] << "|";
            }
            std::cout << "\n";
        }
    }
};

class YatzyAction : YatzyInfo
{
public:
    std::string rollAmount;
    bool holdMenu = true, rowChoice = true, game = true, playerTurn = true;

    int rollCount = 0, dieSum = 0, one = 1, two = 2, three = 3, four = 4, diceLim = 6, a = 0, max = 0, almostMax = 0;
    int roundCount = 0, gameCount = 1, finalSum = 0;
public:
    void hold()
    {
        printBoard();

        std::cout << "1) Hold\n";
        std::cout << "2) Reroll\n\n";
        std::cout << "Please select 1 to hold your die, or 2 to reroll your selected dice.\n";

        if (rollCount == 2)
        {
            sum();
            rollCount = 0;
            holdMenu = false;
            playerTurn = false;
        }

        while (holdMenu == true)
        {

            switch (_getch())
            {
            case '1':
                sum();
                holdMenu = false;
                playerTurn = false;
                break;
            case '2':
                reRoll();
                holdMenu = false;
                rollCount++;
                break;
            }
        }
        holdMenu = true;
    }

    void reRoll()
    {
        printBoard();

        std::cout << "\nPlease type the number of the dice you would like to reroll.\n";
        for (int i = 0; i < col; i++)
        {
            switch (_getch())
            {
            case '1':
                diceBoard[1][0] = 1;
                break;
            case '2':
                diceBoard[1][1] = 1;
                break;
            case '3':
                diceBoard[1][2] = 1;
                break;
            case '4':
                diceBoard[1][3] = 1;
                break;
            case '5':
                diceBoard[1][4] = 1;
            }
            system("cls");
            printBoard();
        }

        for (int i = 0; i < col; i++)
        {
            if (diceBoard[1][i] == 1)
            {
                diceBoard[0][i] = rand() % 6 + 1;
            }
            else if (diceBoard[1][i] == 0)
            {
                dieCount++;
            }
            diceBoard[1][i] = 0;
        }

        std::cout << "\n";

        system("cls");

        printBoard();

        if (dieCount == col)
        {
            diceRoll = false;
        }
        else
        {
            dieCount = 0;
        }

        std::cout << "\nDie results: \n\n";
    }

    void sum()
    {
        system("cls");
        
        selectionSortInt2D();
        printSort();
        
        for (int i = 1; i < 7; i++)
        {
            dieSum = 0;
            for (int j = 0; j < col; j++)
            {
                if (diceBoard[0][j] == i)
                {
                    dieSum++;
                }
            }
            rollAmount += std::to_string(dieSum);
            rollAmount += ", ";
            std::cout << "You have: "<< dieSum << " " << i << "'s" << " ";
        }
        std::cout << "\n\n";

        rowSelect();
        setDie();
    }

    void rowSelect()
    {
        printScore();

        std::cout << "\nPlease select a row for your score." << std::endl;

        max = findMaxInString(rollAmount);
        almostMax = findAlmostMaxInString(rollAmount);

        rowChoice = true;

        while (rowChoice == true)
        {
            std::cout << "\nIf there is nowhere to place your die result, please press z to skip your round.";

            switch (_getch())
            {
            case '1':
                if (scoreBoard[0][a] == zero)
                {
                    scoreBoard[0][a] = (rollAmount[0] - 48) * 1;
                    rowChoice = false;
                }
                break;
            case '2':
                if (scoreBoard[1][a] == zero)
                {
                    scoreBoard[1][a] = (rollAmount[3] - 48) * 2;
                    rowChoice = false;
                }
                break;
            case '3':
                if (scoreBoard[2][a] == zero)
                {
                    scoreBoard[2][a] = (rollAmount[6] - 48) * 3;
                    rowChoice = false;
                }
                break;
            case '4':
                if (scoreBoard[3][a] == zero)
                {
                    scoreBoard[3][a] = (rollAmount[9] - 48) * 4;
                    rowChoice = false;
                }
                break;
            case '5':
                if (scoreBoard[4][a] == zero)
                {
                    scoreBoard[4][a] = (rollAmount[12] - 48) * 5;
                    rowChoice = false;
                }
                break;
            case '6':
                if (scoreBoard[5][a] == zero)
                {
                    scoreBoard[5][a] = (rollAmount[15] - 48) * 6;
                    rowChoice = false;
                }
                break;
            case '7':
                if (max >= 2 && scoreBoard[8][a] == zero)
                {
                    onePair();
                    rowChoice = false;
                }
                break;
            case '8':
                if (almostMax >= 2 && scoreBoard[9][a] == zero || max >= 4 && scoreBoard[9][a] == zero)
                {
                    twoPair();
                    rowChoice = false;
                }
                break;
            case '9':
                if (max >= 3 && scoreBoard[10][a] == zero)
                {
                    threeAlike();
                    rowChoice = false;
                }
                break;
            case '0':
                if (max >= 4 && scoreBoard[11][a] == zero)
                {
                    fourAlike();
                    rowChoice = false;
                }
                break;
            case 'q':
                if (rollAmount[0] >= '1' && rollAmount[3] >= '1' && rollAmount[6] >= '1' && rollAmount[9] >= '1' && scoreBoard[12][a] == zero
                    || rollAmount[3] >= '1' && rollAmount[6] >= '1' && rollAmount[9] >= '1' && rollAmount[12] >= '1' && scoreBoard[12][a] == zero
                    || rollAmount[6] >= '1' && rollAmount[9] >= '1' && rollAmount[12] >= '1' && rollAmount[15] >= '1' && scoreBoard[12][a] == zero)
                {
                    smallS();
                    rowChoice = false;
                }
                break;
            case 'w':
                if (rollAmount[0] == '1' && rollAmount[3] == '1' && rollAmount[6] == '1' && rollAmount[9] == '1' 
                    && rollAmount[12] == '1' && scoreBoard[13][a] == zero ||
                    rollAmount[3] == '1' && rollAmount[6] == '1' && rollAmount[9] == '1' && rollAmount[12] == '1'
                    && rollAmount[15] == '1' && scoreBoard[13][a] == zero)
                {
                    bigS();
                    rowChoice = false;
                }
                break;
            case 'e':
                if (max >= 3 && almostMax >=2 && scoreBoard[14][a] == zero)
                {
                    house();
                    rowChoice = false;
                }
                break;
            case 'r':
                if(scoreBoard[15][a] == zero)
                {
                    chance();
                    rowChoice = false;
                }
                break;
            case 't':
                if (max == 5 && scoreBoard[16][a] == zero)
                {
                    yatzyPoint();
                    rowChoice = false;
                }
                break;
            case 'z':
                rowChoice = false;
                break;
            case 'p':
                roundCount = 15;
                rowChoice = false;
                break;
            }

            scoreSum();
            bonus();
            total();
            
            system("cls");
            printSort();

            for (int i = 1; i < 7; i++)
            {
                dieSum = 0;
                for (int j = 0; j < col; j++)
                {
                    if (diceBoard[0][j] == i)
                    {
                        dieSum++;
                    }
                }
                rollAmount += std::to_string(dieSum);
                rollAmount += ", ";
                std::cout << "You have: " << dieSum << " " << i << "'s" << " ";
            }
            std::cout << "\n\n";

            printScore();
        }
        rollAmount = "";

        std::cout << std::endl;

        finalSum = totalSum();
    }

    int scoreSum()
    {
        scoreBoard[6][a] = scoreBoard[0][a] + scoreBoard[1][a] + scoreBoard[2][a] + scoreBoard[3][a] + scoreBoard[4][a] + scoreBoard[5][a];
        return(scoreBoard[6][a]);
    }

    void bonus()
    {
        if (scoreBoard[6][a] >= 63)
        {
            scoreBoard[7][a] = 35;
        }
    }

    void onePair()
    {
        scoreBoard[8][a] += ((rollAmount[0] - 48) * 1) + ((rollAmount[3] - 48) * 2);
        scoreBoard[8][a] += ((rollAmount[6] - 48) * 3) + ((rollAmount[9] - 48) * 4);
        scoreBoard[8][a] += ((rollAmount[12] - 48) * 5) + ((rollAmount[15] - 48) * 6);
    }

    void twoPair()
    {
        scoreBoard[9][a] += ((rollAmount[0] - 48) * 1) + ((rollAmount[3] - 48) * 2);
        scoreBoard[9][a] += ((rollAmount[6] - 48) * 3) + ((rollAmount[9] - 48) * 4);
        scoreBoard[9][a] += ((rollAmount[12] - 48) * 5) + ((rollAmount[15] - 48) * 6);
    }

    void threeAlike()
    {
        scoreBoard[10][a] += ((rollAmount[0] - 48) * 1) + ((rollAmount[3] - 48) * 2);
        scoreBoard[10][a] += ((rollAmount[6] - 48) * 3) + ((rollAmount[9] - 48) * 4);
        scoreBoard[10][a] += ((rollAmount[12] - 48) * 5) + ((rollAmount[15] - 48) * 6);
    }

    void fourAlike()
    {
        scoreBoard[11][a] += ((rollAmount[0] - 48) * 1) + ((rollAmount[3] - 48) * 2);
        scoreBoard[11][a] += ((rollAmount[6] - 48) * 3) + ((rollAmount[9] - 48) * 4);
        scoreBoard[11][a] += ((rollAmount[12] - 48) * 5) + ((rollAmount[15] - 48) * 6);
    }

    void smallS()
    {
        scoreBoard[12][a] = 30;
    }

    void bigS()
    {
        scoreBoard[13][a] = 40;
    }

    void house()
    {
        scoreBoard[14][a] = 25;
    }

    void chance()
    {
        scoreBoard[15][a] += ((rollAmount[0] - 48) * 1) + ((rollAmount[3] - 48) * 2);
        scoreBoard[15][a] += ((rollAmount[6] - 48) * 3) + ((rollAmount[9] - 48) * 4);
        scoreBoard[15][a] += ((rollAmount[12] - 48) * 5) + ((rollAmount[15] - 48) * 6);
    }

    void yatzyPoint()
    {
        scoreBoard[16][a] = 50;
    }

    void total()
    {
        int topSum = scoreSum();
        int botSum = 0;
        
        for (int i = 7; i < sRow-1; i++)
        {
            botSum += scoreBoard[i][a];
        }

        scoreBoard[17][a] = topSum + botSum;
        botSum = 0;
    }

    int findMaxInString(std::string str)
    {
        int num = 0, res = 0, max = 0;

        for (int i = 0; i < str.length(); i++)
        {
            if (str[i] >= '0' && str[i] <= '9')
                num = num * 10 + (str[i] - '0');
            else
            {
                res = std::max(res, num);

                num = 0;
            }
        }
        return std::max(res, num);
    }

    int findAlmostMaxInString(std::string str)
    {
        std::string str2;

        for (int i = 0; i < str.length(); i += 3)
        {
            str2 += str[i];
        }
        int num = 0;

        sort(str2.begin(), str2.end());

        if (str2[4] >= 2 && str2[5] >= 2)
        {
            num = str2[4] - 48;
        }
        return(num);
    }

    void setDie()
    {
        for (int i = 0; i < col; i++)
        {
            diceBoard[0][i] = rand() % 6 + 1;
        }
    }

    void rounds()
    {
        roundCount++;

        if (roundCount == 15)
        {
            roundCount = 1;

            a++;
            gameCount++;

            if (gameCount == sCol + 1)
            {
                game = false;
                a = 0;
                gameCount = 1;
            }
            else
            {
                std::cout << "Round: " << roundCount + 14 << "\n";
                std::cout << "Game : " << gameCount-1 << "\n";
            }
        }
        else
        {
            std::cout << "Round: " << roundCount << "\n";
        }
    }

    int totalSum()
    {
        int totalSum = 0;
        for (int i = 0; i < sCol; i++)
        {
             totalSum += scoreBoard[17][i];
        }
        std::cout << "Player 1's total sum is " << totalSum << "\n\n";

        return(totalSum);

        totalSum = 0;
    }
};

class YatzyAction2 : YatzyInfo2
{
public:
    std::string rollAmount;
    bool holdMenu = true, rowChoice = true, game = true, playerTurn = true;;

    int rollCount = 0, dieSum = 0, one = 1, two = 2, three = 3, four = 4, diceLim = 6, a = 0, max = 0, almostMax = 0;
    int roundCount = 0, gameCount = 1, finalSum = 0;
public:
    void hold()
    {
        printBoard();

        std::cout << "1) Hold\n";
        std::cout << "2) Reroll\n\n";
        std::cout << "Please select 1 to hold your die, or 2 to reroll your selected dice.\n";

        if (rollCount == 2)
        {
            sum();
            rollCount = 0;
            holdMenu = false;
            playerTurn = false;
        }

        while (holdMenu == true)
        {

            switch (_getch())
            {
            case '1':
                sum();
                holdMenu = false;
                playerTurn = false;
                break;
            case '2':
                reRoll();
                holdMenu = false;
                rollCount++;
                break;
            }
        }
        holdMenu = true;
    }

    void reRoll()
    {
        printBoard();

        std::cout << "\nPlease type the number of the dice you would like to reroll.\n";
        for (int i = 0; i < col; i++)
        {
            switch (_getch())
            {
            case '1':
                diceBoard[1][0] = 1;
                break;
            case '2':
                diceBoard[1][1] = 1;
                break;
            case '3':
                diceBoard[1][2] = 1;
                break;
            case '4':
                diceBoard[1][3] = 1;
                break;
            case '5':
                diceBoard[1][4] = 1;
            }
            system("cls");
            printBoard();
        }

        for (int i = 0; i < col; i++)
        {
            if (diceBoard[1][i] == 1)
            {
                diceBoard[0][i] = rand() % 6 + 1;
            }
            else if (diceBoard[1][i] == 0)
            {
                dieCount++;
            }
            diceBoard[1][i] = 0;
        }

        std::cout << "\n";

        system("cls");

        printBoard();

        if (dieCount == col)
        {
            diceRoll = false;
        }
        else
        {
            dieCount = 0;
        }

        std::cout << "\nDie results: \n\n";
    }

    void sum()
    {
        system("cls");

        selectionSortInt2D();
        printSort();

        for (int i = 1; i < 7; i++)
        {
            dieSum = 0;
            for (int j = 0; j < col; j++)
            {
                if (diceBoard[0][j] == i)
                {
                    dieSum++;
                }
            }
            rollAmount += std::to_string(dieSum);
            rollAmount += ", ";
            std::cout << "You have: " << dieSum << " " << i << "'s" << " ";
        }
        std::cout << "\n\n";

        rowSelect();
        setDie();
    }

    void rowSelect()
    {
        printScore();

        std::cout << "\nPlease select a row for your score." << std::endl;

        max = findMaxInString(rollAmount);
        almostMax = findAlmostMaxInString(rollAmount);

        rowChoice = true;

        while (rowChoice == true)
        {
            std::cout << "\nIf there is nowhere to place your die result, please press z to skip your round.";

            switch (_getch())
            {
            case '1':
                if (scoreBoard[0][a] == zero)
                {
                    scoreBoard[0][a] = (rollAmount[0] - 48) * 1;
                    rowChoice = false;
                }
                break;
            case '2':
                if (scoreBoard[1][a] == zero)
                {
                    scoreBoard[1][a] = (rollAmount[3] - 48) * 2;
                    rowChoice = false;
                }
                break;
            case '3':
                if (scoreBoard[2][a] == zero)
                {
                    scoreBoard[2][a] = (rollAmount[6] - 48) * 3;
                    rowChoice = false;
                }
                break;
            case '4':
                if (scoreBoard[3][a] == zero)
                {
                    scoreBoard[3][a] = (rollAmount[9] - 48) * 4;
                    rowChoice = false;
                }
                break;
            case '5':
                if (scoreBoard[4][a] == zero)
                {
                    scoreBoard[4][a] = (rollAmount[12] - 48) * 5;
                    rowChoice = false;
                }
                break;
            case '6':
                if (scoreBoard[5][a] == zero)
                {
                    scoreBoard[5][a] = (rollAmount[15] - 48) * 6;
                    rowChoice = false;
                }
                break;
            case '7':
                if (max >= 2 && scoreBoard[8][a] == zero)
                {
                    onePair();
                    rowChoice = false;
                }
                break;
            case '8':
                if (almostMax >= 2 && scoreBoard[9][a] == zero || max >= 4 && scoreBoard[9][a] == zero)
                {
                    twoPair();
                    rowChoice = false;
                }
                break;
            case '9':
                if (max >= 3 && scoreBoard[10][a] == zero)
                {
                    threeAlike();
                    rowChoice = false;
                }
                break;
            case '0':
                if (max >= 4 && scoreBoard[11][a] == zero)
                {
                    fourAlike();
                    rowChoice = false;
                }
                break;
            case 'q':
                if (rollAmount[0] >= '1' && rollAmount[3] >= '1' && rollAmount[6] >= '1' && rollAmount[9] >= '1' && scoreBoard[12][a] == zero
                    || rollAmount[3] >= '1' && rollAmount[6] >= '1' && rollAmount[9] >= '1' && rollAmount[12] >= '1' && scoreBoard[12][a] == zero
                    || rollAmount[6] >= '1' && rollAmount[9] >= '1' && rollAmount[12] >= '1' && rollAmount[15] >= '1' && scoreBoard[12][a] == zero)
                {
                    smallS();
                    rowChoice = false;
                }
                break;
            case 'w':
                if (rollAmount[0] == '1' && rollAmount[3] == '1' && rollAmount[6] == '1' && rollAmount[9] == '1'
                    && rollAmount[12] == '1' && scoreBoard[13][a] == zero ||
                    rollAmount[3] == '1' && rollAmount[6] == '1' && rollAmount[9] == '1' && rollAmount[12] == '1'
                    && rollAmount[15] == '1' && scoreBoard[13][a] == zero)
                {
                    bigS();
                    rowChoice = false;
                }
                break;
            case 'e':
                if (max >= 3 && almostMax >= 2 && scoreBoard[14][a] == zero)
                {
                    house();
                    rowChoice = false;
                }
                break;
            case 'r':
                if (scoreBoard[15][a] == zero)
                {
                    chance();
                    rowChoice = false;
                }
                break;
            case 't':
                if (max == 5 && scoreBoard[16][a] == zero)
                {
                    yatzyPoint();
                    rowChoice = false;
                }
                break;
            case 'z':
                rowChoice = false;
                break;
            case 'p':
                roundCount = 15;
                rowChoice = false;
                break;
            }

            scoreSum();
            bonus();
            total();

            system("cls");
            printSort();

            for (int i = 1; i < 7; i++)
            {
                dieSum = 0;
                for (int j = 0; j < col; j++)
                {
                    if (diceBoard[0][j] == i)
                    {
                        dieSum++;
                    }
                }
                rollAmount += std::to_string(dieSum);
                rollAmount += ", ";
                std::cout << "You have: " << dieSum << " " << i << "'s" << " ";
            }
            std::cout << "\n\n";

            printScore();
        }
        rollAmount = "";

        std::cout << std::endl;

        finalSum = totalSum();
    }

    int scoreSum()
    {
        scoreBoard[6][a] = scoreBoard[0][a] + scoreBoard[1][a] + scoreBoard[2][a] + scoreBoard[3][a] + scoreBoard[4][a] + scoreBoard[5][a];
        return(scoreBoard[6][a]);
    }

    void bonus()
    {
        if (scoreBoard[6][a] >= 63)
        {
            scoreBoard[7][a] = 35;
        }
    }

    void onePair()
    {
        scoreBoard[8][a] += ((rollAmount[0] - 48) * 1) + ((rollAmount[3] - 48) * 2);
        scoreBoard[8][a] += ((rollAmount[6] - 48) * 3) + ((rollAmount[9] - 48) * 4);
        scoreBoard[8][a] += ((rollAmount[12] - 48) * 5) + ((rollAmount[15] - 48) * 6);
    }

    void twoPair()
    {
        scoreBoard[9][a] += ((rollAmount[0] - 48) * 1) + ((rollAmount[3] - 48) * 2);
        scoreBoard[9][a] += ((rollAmount[6] - 48) * 3) + ((rollAmount[9] - 48) * 4);
        scoreBoard[9][a] += ((rollAmount[12] - 48) * 5) + ((rollAmount[15] - 48) * 6);
    }

    void threeAlike()
    {
        scoreBoard[10][a] += ((rollAmount[0] - 48) * 1) + ((rollAmount[3] - 48) * 2);
        scoreBoard[10][a] += ((rollAmount[6] - 48) * 3) + ((rollAmount[9] - 48) * 4);
        scoreBoard[10][a] += ((rollAmount[12] - 48) * 5) + ((rollAmount[15] - 48) * 6);
    }

    void fourAlike()
    {
        scoreBoard[11][a] += ((rollAmount[0] - 48) * 1) + ((rollAmount[3] - 48) * 2);
        scoreBoard[11][a] += ((rollAmount[6] - 48) * 3) + ((rollAmount[9] - 48) * 4);
        scoreBoard[11][a] += ((rollAmount[12] - 48) * 5) + ((rollAmount[15] - 48) * 6);
    }

    void smallS()
    {
        scoreBoard[12][a] = 30;
    }

    void bigS()
    {
        scoreBoard[13][a] = 40;
    }

    void house()
    {
        scoreBoard[14][a] = 25;
    }

    void chance()
    {
        scoreBoard[15][a] += ((rollAmount[0] - 48) * 1) + ((rollAmount[3] - 48) * 2);
        scoreBoard[15][a] += ((rollAmount[6] - 48) * 3) + ((rollAmount[9] - 48) * 4);
        scoreBoard[15][a] += ((rollAmount[12] - 48) * 5) + ((rollAmount[15] - 48) * 6);
    }

    void yatzyPoint()
    {
        scoreBoard[16][a] = 50;
    }

    void total()
    {
        int topSum = scoreSum();
        int botSum = 0;

        for (int i = 7; i < sRow - 1; i++)
        {
            botSum += scoreBoard[i][a];
        }

        scoreBoard[17][a] = topSum + botSum;
        botSum = 0;
    }

    int findMaxInString(std::string str)
    {
        int num = 0, res = 0, max = 0;

        for (int i = 0; i < str.length(); i++)
        {
            if (str[i] >= '0' && str[i] <= '9')
                num = num * 10 + (str[i] - '0');
            else
            {
                res = std::max(res, num);

                num = 0;
            }
        }
        return std::max(res, num);
    }

    int findAlmostMaxInString(std::string str)
    {
        std::string str2;

        for (int i = 0; i < str.length(); i += 3)
        {
            str2 += str[i];
        }
        int num = 0;

        sort(str2.begin(), str2.end());

        if (str2[4] >= 2 && str2[5] >= 2)
        {
            num = str2[4] - 48;
        }
        return(num);
    }

    void setDie()
    {
        for (int i = 0; i < col; i++)
        {
            diceBoard[0][i] = rand() % 6 + 1;
        }
    }

    void rounds()
    {
        roundCount++;

        if (roundCount == 15)
        {
            roundCount = 1;

            a++;
            gameCount++;

            if (gameCount == sCol + 1)
            {
                std::cout << "Thank you for the games!\n\n";

                game = false;
                a = 0;
                gameCount = 1;
            }
            else
            {
                std::cout << "Round: " << roundCount << "\n";
                std::cout << "Game : " << gameCount << "\n";
            }
        }
        else
        {
            std::cout << "Round: " << roundCount+1 << "\n";
        }
    }

    int totalSum()
    {
        int totalSum = 0;
        for (int i = 0; i < sCol; i++)
        {
            totalSum += scoreBoard[17][i];
        }
        std::cout << "Player 2's total sum is " << totalSum << "\n\n";
        
        return(totalSum);

        totalSum = 0;
    }
};

class Yatzy
{
public:
    YatzyInfo i1;
    YatzyInfo2 i2;
    YatzyAction a1;
    YatzyAction2 a2;
public:
    void yatzy()
    {
        while (a2.game == true)
        {
            std::cout << "\nPlayer 1's turn.\n";

            while (a1.playerTurn == true)
            {
                a1.hold();
            }
            a1.playerTurn = true;
            a1.rounds();

            std::cout << "\nPlayer 2's turn.\n";

            while (a2.playerTurn == true)
            {
                a2.hold();
            }
            a2.playerTurn = true;
            a2.rounds();
        }
        a2.game = true;

        endGame();
    }
    
    void endGame()
    {
        std::cout << "Player 1 has a total sum of: " << a1.finalSum << "\n";
        std::cout << "Player 2 has a total sum of: " << a2.finalSum << "\n";


        if(a1.finalSum > a2.finalSum)
        {
            std::cout << "\nPlayer 1 takes the match with the highest total sum. Congratulations!\n\n";
        }
        else if (a2.finalSum > a1.finalSum)
        {
            std::cout << "\nPlayer 2 takes the match with the highest total sum. Congratulations!\n\n";
        }
        else
        {
            std::cout << "\nIncreadible! The match is tied. Feel free to play again.\n\n";
        }
    }
};

class Menu : Yatzy
{
public:
    bool menu = true;
public:
    void printMenu()
    {
        while (menu == true)
        {
            std::cout << "--------Welcome to Yatzy--------\n\n";
            std::cout << "1) Play Yatzy\n";
            std::cout << "2) Game mode\n";
            std::cout << "3) Rules\n";
            std::cout << "4) Exit\n\n";
            std::cout << "Please select 1 to play Yatzy, 2 to select game amount to play, 3 to view rules or 4 to exit.\n\n";

            switch (_getch())
            {
            case '1':
                yatzy();
                break;
            case '2':
                gameChoice();
                system("cls");
                std::cout << "Game mode selected. May thou rolls be grand.\n\n";
                break;
            case '3':
                rules();
                break;
            case '4':
                exit(1);
                break;
            }
        }
    }

    void gameChoice()
    {
        bool option = true;

        while (option == true)
        {
            system("cls");

            std::cout << "Please select the amount of games you would like to play;\n\n";
            std::cout << "1) 1 game.\n";
            std::cout << "2) 3 games.\n";
            std::cout << "3) 6 games.\n";
            std::cout << "4) 9 games.\n";

            switch (_getch())
            {
            case '1':
                a1.a = i1.sCol - 1;
                a2.a = i2.sCol - 1;
                
                a1.gameCount = i1.sCol;
                a2.gameCount = i2.sCol;

                option = false;
                break;
            case '2':
                a1.a = i1.sCol - 3;
                a2.a = i2.sCol - 3;

                a1.gameCount = i1.sCol - 2;
                a2.gameCount = i2.sCol - 2;

                option = false;
                break;
            case '3':
                a1.a = i1.sCol - 6;
                a2.a = i2.sCol - 6;

                a1.gameCount = i1.sCol - 5;
                a2.gameCount = i2.sCol - 5;

                option = false;
                break;
            case '4':
                a1.a = 0;
                a2.a = 0;

                a1.gameCount = 0;
                a2.gameCount = 0;
                option = false;
                break;
            }
        }
        option = true;
    }

    void rules()
    {
        system("cls");

        std::cout << "----------------------------------------------------Rules----------------------------------------------------\n\n";
        std::cout << "A player rolls 5 die. The player can then choose to keep the die, or roll selected die.\n";
        std::cout << "The player may roll selected die 2 times before inserting the diescore into a chosen row in the scoreboard.\n";
        std::cout << "\n---------------------------------------------------Scores----------------------------------------------------\n\n";
        std::cout << "Top scores from 1 to 6 add the combined score of one type of die. Ex: if one has 3 sixes and chooses 6,\n";
        std::cout << " the respective score will be set to 18.\n";
        std::cout << "Sum displays the accumalated top scores. A bonus of 35 points, is awarded if this score is more or equal to 63.\n";
        std::cout << "1 pair, may be chosen if one has 2 equal die. The accumulative of the die are scored.\n";
        std::cout << "2 pairs, may be chosen if one has 2 equal die 2 times. The accumulative of the die are scored.\n";
        std::cout << "3 alike, may be chosen if one has 3 equal die. The accumulative of the die are scored.\n";
        std::cout << "4 alike, may be chosen if one has 4 equal die. The accumulative of the die are scored.\n";
        std::cout << "Small s = Small straight, may be chosen if one has 4 sequential die. Ex: 1, 2, 3, 4. 30 points are awarded.\n";
        std::cout << "Big s = Big straight, may be chosen if one has 5 sequential die. Ex: 1, 2, 3, 4, 5. 40 points are awarded.\n";
        std::cout << "House, may be chosen if one has 3 equal die and a pair. 25 points are scored.\n";
        std::cout << "Chance, may be chosen at any time. The accumulative of the die are scored.\n";
        std::cout << "Yatzy, may be chosen if one has 5 equal die. 50 points are scored.\n\n";
        std::cout << "A scorerow may only be chosen once per game.\n";
        std::cout << "A player's round is skipped if the player selects a top score row, and is missing the die/dice.\n";
        std::cout << "Ex: a player has no 4's and selects row number 4 in the scoreboard. The player's round is skipped.\n";
        std::cout << "If the player has nowhere to insert a score, the player's round must be skipped by pressing z.\n\n";

        system("pause");
        system("cls");
    }
};

int main()
{
    std::srand(static_cast<unsigned int>(std::time(nullptr))); //seed set seed value to system clock

    Menu m;

    m.printMenu();
}

