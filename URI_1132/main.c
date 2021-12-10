#include<stdio.h>
#include <stdlib.h>

int main(){

 int X, Y, i, Soma;

 scanf("%d", &X);
 scanf("%d", &Y);
 Soma = 0;

 if (X < Y){
  for(i = X; i <= Y; i++){
   if(i%13!=0){
    Soma +=i;
   }
  }
 }else{
  for (i = Y; i <= X; i++){
   if(i%13!=0){
    Soma+=i;
   }
  }
 }
 printf("%d\n",Soma);

 return 0;
}
