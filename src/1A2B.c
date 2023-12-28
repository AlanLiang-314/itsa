#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>

void strToNum(int num[], char s[])
{
  for (int i = 0; s[i] != '\0'; i++)
  {
    if (isdigit(s[i]))
    {
      num[i] = s[i] - '0';
    }
    else if (islower(s[i]))
    {
      num[i] = s[i] - 'a' + 10;
    }
    else
    {
      printf("non valid char: %c\n", s[i]);
      exit(1);
    }
  }
}

void check(int guess[], int answer[])
{
  int type_A = 0, type_B = 0;
  int countGuess[10] = {0}, countAnswer[10] = {0};
  for (int i = 0; i < 4; i++)
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
  for (int i = 0; i < 10; i++)
  {
    type_B += (countAnswer[i] && countGuess[i]);
  }
  printf("%dA%dB\n", type_A, type_B);
}


int main() {
  char input[10];
  int guess[4], answer[4];
  scanf("%s", &input);
  strToNum(guess, input);
  while (scanf("%s", &input))
  {
    strToNum(answer, input);
    if(!(answer[0] && answer[1] && answer[2] && answer[3])) break;
    check(guess, answer);
  }  
}