#include <stdio.h>
#include <stdlib.h>

short rev(short x){
  short retValue = 0;
  short counter = x;
  while(x/10){
    retValue*=10;
    retValue+=x/10;
    x/=10;
  }
  printf("This worked");
  return retValue;
}


int main(){
  printf("Test\n");
  short revd;
  revd = rev(786789);
  printf("Reversed number: %h",revd);
}
