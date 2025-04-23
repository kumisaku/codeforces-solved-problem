#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>



int main() 
{
    int a, b;
    scanf("%d\n%d", &a, &b);
  	for(int i = 0; i < 2; i++){
          char arr[10][9]={"one","two","three","four","five","six","seven","eight","nine"};
          if(a >= 0 && a <= 9 && b >= 0 && b <= 9){
              printf("%s\n%s", arr[a], arr[b]);
              else{
                printf("%s")
              }
          }
      }

    return 0;
}
