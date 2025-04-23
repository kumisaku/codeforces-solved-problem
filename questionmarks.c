#include <stdio.h>
#include <string.h>

int main(){
    int t;
    scanf("%d", &t);
    for (int z = 0; z < t; z++)
    {
        int n;
        char s[100];
        int total_s = strlen(s);
        scanf("%d", &n);
        scanf("%s", s);
        for (int i = 0; i < total_s; i++)
        {
            if (s[i] == '?')
            {
                s[i] == 0;
            }
            
        }
        
    }
    
    return 0;
}