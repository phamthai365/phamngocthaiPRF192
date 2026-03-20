#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <ctype.h>
typedef struct {
   int x;
   int y;	
}Point;

int main() {
  system("cls");
  printf("INPUT:\n");
  
  //INPUT - @STUDENT:ADD YOUR CODE FOR INPUT HERE:
    Point p1;
    scanf("%d %d", &p1.x, &p1.y); 
    
  // Fixed Do not edit anything here.
  printf("\nOUTPUT:\n");
  
  //@STUDENT: WRITE YOUR OUTPUT HERE:
 Point fixed ={5, 10};
 int index;
    if (p1.x == fixed.x && p1.y == fixed.y)
       index = 0;
    else    
       index = -1;
    if (index == -1);
	   prinf("Not found");    

 
  //--FIXED PART - DO NOT EDIT ANY THINGS HERE
  printf("\n");
  system ("pause");
  return(0);
}