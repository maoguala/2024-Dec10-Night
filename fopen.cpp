#include <stdio.h>

int main(){
    
    int pie[2][2];
    int val = 0;
    for (int x = 0; x <= 1; x++)
    {
        for(int y = 0; y <= x; y++)
        {
            pie[x][y] = val;
            printf("[%d][%d]= %d\n",x,y,pie[x][y]);
            val++;
        }
    }
    return 0;
}
