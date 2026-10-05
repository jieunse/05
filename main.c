#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    int answer=59;
    int trial=0;
    int x;
    
    
    do
    {
        printf("input a number: ");
        scanf("%d",&x);
        
        if(x>answer)
        printf("high!\n");
        
        else if(x<answer)
        printf("low!\n");
        
        trial ++;

        
        
    }
    while(x!=answer);
    
    printf("Congratulation! trial:%i\n", trial);
    
     
         
    

    

  system("PAUSE");	
  return 0;
}