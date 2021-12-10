#include <stdio.h>

#define SIZE 100

char* getUserInput()
{
  char user_input[SIZE];
  printf("Bitte Text eingeben:\n");
  fgets(user_input, SIZE, stdin);

  return user_input;
}

int checkIfValid(char user_input[SIZE])
{
  int sentence_check = 1;
  for(int i = 0; user_input[i] != '\0'; ++i)
  {
    if(user_input[i] != '!')
    {
      sentence_check = 1;
      break;
    }
  return sentence_check;
  }
}

int main()
{
  char* user_input = getUserInput();
  int a = checkIfValid(user_input);
  if (a == 1)
  {
    printf("Kein Satz gefunden!");
  }
  else
    printf("j\n");
  printf("%s", user_input);
  return 0;
}