#include <stdio.h>
#include <stdlib.h>

int rev(int x){
  int retValue = 0;
  int counter = x;
  while(x){
    retValue*=10;
    retValue+=x%10;
    x/=10;
  }
  /*printf("This worked");*/
  return retValue;
}

int prob4(){
  int a = 999;
  int b = 999;
  while(rev(a*b)!=a*b){
    if(a==b){
      a--;
      b=999;
    }else{
      b--;
    }
  }
  return a*b;
}

short isPythTrip(short a, short b){
  int c = 0;
  while(c*c<=a*a+b*b){
    if(c*c==a*a+b*b){
      return c;
    }else{
      c++;
    }
  }
  return 0;
}
int prob9(){
  short a = 0;
  short b = 0;
  while(a+b<1000){
    if(isPythTrip(a,b)){
      if(a+b+isPythTrip(a,b)==1000){
	/*printf("%d %d %d",a,b,isPythTrip(a,b));*/
	return a*b*isPythTrip(a,b);
      }
    }
    if(a==b){
      a++;
      b=0;
    }else{
      b++;
    }
  }
  return 0;
}
int main(){
  /*printf("Test\n");*/
  int x = prob4();
  printf("Problem 4:\n");
  printf("Largest Palindromic multiple of two three digit numbers: %d\n",x);
  x = prob9();
  printf("Problem 9:\n");
  printf("Product of Pythagorean triplet with sum of a, b, and c equal to 1000: %d\n",x);
}
