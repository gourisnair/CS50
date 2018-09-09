//Program to familiarise #inlcude<ctype.h>

#include<stdio.h>
#include<string.h>
#include<ctype.h>
int main()
{
  //To capitalise an input string
  char s[10];
  scanf("%s", &s);
  for(int i = 0; i < strlen(s); i++) {
    s[i] = toupper(s[i]);
  }
  printf("%s\n", s);


  //To convert the input string to lower case
  char a[10];
  scanf("%s", &a);
  for(int i = 0; i < strlen(a); i++) {
    a[i] = tolower(a[i]);
  }
  printf("%s\n", a);

  //To check islower() condition
  char b[10];
  scanf("%s", &b);
  for(int i = 0; i < strlen(b); i++) {
    if(islower(b[i])) {
      b[i] = toupper(b[i]);
    }
  }
  printf("%s\n", b);

  //To check isupper() condition
  char c[10];
  scanf("%s", &c);
  for(int i = 0; i < strlen(b); i++) {
    if(isupper(c[i])) {
      c[i] = tolower(c[i]);
    }
  }
  printf("%s", c);
}
