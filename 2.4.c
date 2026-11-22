#include <stdio.h>

char *squeeze( char s1[], char s2[]);

int main(void)
{
  char line[] = "abcdefg  1234567";
  char test[] = "abc 123";
  
  printf("Hello! o~o");
  printf("%s", squeeze(line, test));
  printf("hello again, me friend");
}

char *squeeze(char s1[], char s2[])
{
  for (int i = 0; s1[i] != '\0'; ++i)
  {
    for(int j = 0; s2[j] != '\0'; ++j)
    {
      if (s1[i] == s2[j])
        {
          for (int k = i; s1[k] != '\0'; ++k)
          {
            s1[k] = s1[k + 1];
          }
          i = 0;
          break;
        }
    }
  }
  return s1;
}
