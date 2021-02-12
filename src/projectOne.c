#include<stdio.h>
#include<ctype.h>

void main(){
  int bufferSize = 100;
  int maxInput = bufferSize - 1;
  char buffer[maxInput];
  printf("The program has begun\n");
  int characterASCII = 0;
  int index = 0;
  printf(">");
  while((characterASCII = getchar()) != '\n')
    if(index < bufferSize)
      buffer[index++] = characterASCII;
  buffer[index] = '\0';
  printf(buffer);
  printf("\n");
  
  
 
}
