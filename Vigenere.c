#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<ctype.h>
int main()
{
  char s[100], key[100];
  printf("Enter text\n");
  scanf("%[^\n]s", &s);
  printf("Enter key\n");
  scanf("%s", &key);
  int indexs, indexk, ciph, n, j = 0;
  n = strlen(key);
  //printf("%d %d", n, strlen(s));
  //printf("%c", s[1]);

  for(int i = 0; i < strlen(s); i++) {

      if(isalpha(s[i])) {

        if(isupper(s[i])) {

          indexs = ((int)(s[i])) - 65;
          indexk = ((int)key[j%n] - 97);
          ciph = (indexs + indexk) % 26;
          printf("%c", (char)(ciph + 65));
          j++;
        }
         else {

          if(islower(s[i])) {

            indexs = ((int)(s[i])) - 97;
            indexk = ((int)key[j%n] - 97);
            ciph = (indexs + indexk) % 26;
            printf("%c", (char)(ciph + 97));
            j++;
          }
        }
      }
       else {

         if(s[i] == " ") {
           printf(" ");
         }
         else {

          printf("%c", (int)s[i]);
         }
       }
  }
}
