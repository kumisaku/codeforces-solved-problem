#include <stdio.h>

int main(){
    int t;
    scanf("%d", &t);
    for (int z = 0; z < t; z++)
    {
        int n, sum = 0;
        scanf("%d", &n);
        while (n)
        {
            sum += n % 10;
            n = n/10;
            
        }
        printf("%d\n", sum);
    }
    
}