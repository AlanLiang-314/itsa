// https://e-tutor.itsa.org.tw/e-Tutor/mod/programming/view.php?id=30784
// 題目27. 猜數字

#include <iostream>
#include <string>
#include <vector>

using namespace std;

void strToNum(vector<int>& num, const string& s)
{
    for (char c : s)
    {
        if (isdigit(c))
        {
            num.push_back(c - '0');
        }
        else if (islower(c))
        {
            num.push_back(c - 'a' + 10);
        }
        else
        {
            cout << "non valid char: " << c << '\n';
            exit(1);
        }
    }
}

void check(const vector<int>& guess, const vector<int>& answer)
{
    int type_A = 0, type_B = 0;
    std::vector<int> countGuess(10, 0), countAnswer(10, 0);
    for (size_t i = 0; i < 4; i++)
    {
        if (guess[i] == answer[i])
        {
            type_A++;
        }
        else
        {
            countGuess[guess[i]]++;
            countAnswer[answer[i]]++;
        }
    }
    for (size_t i = 0; i < 10; i++)
    {
        type_B += (countAnswer[i] && countGuess[i]);
    }
    cout << type_A << 'A' << type_B << "B\n";
}

int main() {
    string input;
    vector<int> guess, answer;
    cin >> input;
    strToNum(guess, input);
    while (cin >> input)
    {
        strToNum(answer, input);
        if (!(answer[0] && answer[1] && answer[2] && answer[3])) break;
        check(guess, answer);
    }  
}
