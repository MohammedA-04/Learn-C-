#include <iostream>

int main()
{

    std::string questions[] = {"1. What year was C++ created?: ", "2. Who invented c++?: ", "3. What is the predecessor of C++?: ", "4. is the earth flat?"};

    std::string options[][4] = {{"A. 1969", "B. 1975", "C. 1985", "D. 1989"}, {"A. Guido van rossu", "B. Bjarne Stroustrup", "C. C.Jogn Carmack", "D. Mark Zukberg"}, {"A. C", "B. C+", "C. C--", "D. B++"}, {"A. yes", "B. no", "C. sometimes", "D> what's earht"}};

    char answerKy[] = {'C', 'B', 'A', 'B'};

    int size = sizeof(questions) / sizeof(questions[0]);
    char guess;
    int score;

    for (int i = 0; i < size; i++)
    {

        std::cout << "******************************\n";
        std::cout << questions[i] << '\n';
        std::cout << "******************************\n";

        for (int j = 0; j < sizeof(options[i]) / sizeof(options[i][0]); j++)
        {
            std::cout << options[i][j] << '\n';
        }

        std::cin >> guess;
        guess = toupper(guess);

        if (guess == answerKy[i])
        {
            std::cout << "Correct\n";
            score++;
        }
        else
        {
            std::cout << "Wrong\n";
            std::cout << "Correct Answer: " << answerKy[i] << '\n';
        }
    }

    std::cout << "******************************\n";
    std::cout << "Results\n";
    std::cout << "******************************\n";
    std::cout << "SCORE GUESSES: " << score << '\n';
    std::cout << "# of QUESTIONS: " << size << '\n';
    std::cout << "SCORE: " << (score / (double)size) * 100 << '%' << '\n';
}