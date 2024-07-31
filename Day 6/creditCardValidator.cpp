/** Luhn Algorithm
 *
 * 1. Double every 2nd digit from right to left
 * IF: doubled number is 2 digits, split them
 *
 * 2. add all single from step 1
 *
 * 3. add all odd numbered digits from R to L
 *
 * 4. sum resulsts from step 2 and 3
 *
 * 5. if step 4 is diviisble 10, # is valid
 *
 * Example
 * 6011     0009     9013     9424
 * 6 1      0 0      9 1      9 2
 * 1 2 2    0 0     1 8 2     1 8 4
 * Sum = 29
 *
 * Odd Indexes
 * 6011     0009     9013     9424
 *  0 1      0 9      0 3      4 4
 * Sum = 21
 *
 * 29 + 21 = 50 / 10 = 5 [VALID]
 *
 */

#include <iostream>

int getDigit(const int number);
int sumOddDigits(const std::string &cardNumber);
int sumEvenDigits(const std::string &cardNumber);

int main()
{
    std::string cardNumber;
    int result = 0;

    std::cout << "Enter credit card #: \n";
    std::cin >> cardNumber;

    result = sumEvenDigits(cardNumber) + sumOddDigits(cardNumber);

    if (result % 10 == 0)
    {
        std::cout << "Valid\n";
    }
    else
    {
        std::cout << "Not Valid\n";
    }

    return 0;
}

// functions
int getDigit(const int number)
{
    // 18 % 10 = 8 && 18 / 10 = 1 % 10 = 1
    // 8 + 1 = 9
    return number % 10 + (number / 10 % 10);
}

int sumOddDigits(const std::string &cardNumber)
{
    int sum = 0;
    for (int i = cardNumber.size() - 1; i >= 0; i -= 2)
    {
        sum += cardNumber[i] - '0';
    }
    return sum;
}

int sumEvenDigits(const std::string &cardNumber)
{

    // 3443 like this
    //  ^ ^

    int sum = 0;
    for (int i = cardNumber.size() - 2; i >= 0; i -= 2)
    {
        int digit = (cardNumber[i] - '0') * 2;
        sum += getDigit(digit);
    }
    return sum;
}
