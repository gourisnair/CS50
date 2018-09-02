#include<stdio.h>
int main()
{
  char type;
  //A or a stands for Amex, M or m stands for Master card and V or v stands for Visa
  printf("Enter card type: ");
  /*do {
    scanf("%c", &type);
  }
  while(type != 'a' || type != 'A' || type != 'm' || type != 'M' || type != 'V' || type != 'v');*/
  scanf("%c", &type);

  int l, i;
  long long int sume = 0, sumo = 0, sum = 0, temp = 0, temp1 = 0, temp2 = 0;


//For cards of type Amex
  if(type == 'a' || type == 'A') {
    l = 15;
    long long int cn[l];
    for(i = 0; i < l; i++) {
      scanf("%lld", &cn[i]);
    }

    if((cn[0] == 3 && cn[1] == 4) || (cn[0] == 3 && cn[1] == 7)) {
        for(i = 1; i < l - 1; i = i + 2) {
          //printf("%d", temp);
          temp = cn[i] * 2;
          if(temp > 9) {
            temp1 = temp / 10;
            temp2 = temp % 10;
            temp = temp1 + temp2;
            sumo += temp;
          } else {
            sumo += temp;
          }

        }
        for(i = 0; i < l; i = i + 2) {
          sum += cn[i];
        }

        if((sumo + sum) % 10 == 0) {
          printf("The credit card number is valid");
        } else {
          printf("The credit card number is invalid");
        }

      }


}


//For cards of type Master card
  if(type == 'm' || type == 'M') {
    l = 16;
    long long int cn[l];
    for(i = 0; i < l; i++) {
      scanf("%lld", &cn[i]);
    }
    if((cn[0] == 5) && (cn[1] == 1 || cn[1] == 2 || cn[1] == 3 || cn[1] == 4 || cn[1] == 5)) {
        for(i = 0; i < l; i = i + 2) {
          temp = cn[i] * 2;
          //printf("ok");
          if(temp > 9) {
            temp1 = temp / 10;
            temp2 = temp % 10;
            temp = temp1 + temp2;
            sume += temp;
          } else {
            sume += temp;
          }
        }
        for(i = 1; i < l - 1; i = i + 2) {
          sum += cn[i];
        }

        if((sume + sum) % 10 == 0) {
          printf("The credit card number is valid");
        } else {
          printf("The credit card number is invalid");
        }
      }
  }



  //For cards of type Visa
    if(type == 'v' || type == 'V') {
      printf("Enter length: ");
      do {
        scanf("%d", &l);
      }
      while (l != 13 && l != 16);

      long long int cn[l];
      for(i = 0; i <= l; i++) {
        scanf("%lld", &cn[i]);
      }
      if(cn[0] == 4) {
        if(l % 2 == 0) {
          for(i = 0; i < l; i = i + 2) {
            temp = cn[i] * 2;
            if(temp > 9) {
              temp1 = temp / 10;
              temp2 = temp % 10;
              temp = temp1 + temp2;
              sumo += temp;
            } else {
              sumo += temp;
            }
          }

          for(i = 1; i < l - 1; i = i + 2) {
            sum += cn[i];
          }

          if((sume + sum) % 10 == 0) {
            printf("The credit card number is valid");
          } else {
            printf("The credit card number is invalid");
          }

        } else {
          for(i = 1; i < l; i = i + 2) {
            temp = cn[i] * 2;
            if(temp > 9) {
              temp1 = temp / 10;
              temp2 = temp % 10;
              temp = temp1 + temp2;
              sumo += temp;
            } else {
              sumo += temp;
            }
          }

          for(i = 0; i <= l; i = i + 2) {
            sum += cn[i];
          }

          if((sumo + sum) % 10 == 0) {
            printf("The credit card number is valid");
          } else {
            printf("The credit card number is invalid");
          }

        }

      }
  }
}
