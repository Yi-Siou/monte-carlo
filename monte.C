#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main(){
  srand(time(NULL));
  int in_circle = 0;
  int iter =100000000;
  
  for(int i=0;i<iter;i++){
    //int x =rand(); // a random integer 0~inf
    int x = rand()%10000; //0~9999
    int y = rand()%10000;
    if (x*x+y*y<=100000000){
      in_circle++;
    }
  }
  
  double pi = 4*(double)in_circle/(double)iter;
  printf("%f", pi);
  
  return (0);
}
