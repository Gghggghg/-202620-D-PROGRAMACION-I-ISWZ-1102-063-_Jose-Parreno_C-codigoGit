#include <stdio.h>
int main(void)
{
      int m1[2][3] = {{1,2,3},{4,5,6}};
      int m2[2][3] = {{4,5,12},{23,-5,6}};
      int m3[2][3];
        
            for (int i = 0; i < 2; i++) 
            {
                for (int j = 0; j < 3; j++) 
                {
                    m3[i][j] = m1[i][j] + m2[i][j];
                }
            }
        
            /* imprimir m3 */
            for (int i = 0; i < 2; i++) 
            {
                for (int j = 0; j < 3; j++) 
                {
                    printf("%d ", m3[i][j]);
                }
                printf("\n");
            }
    return 0;
}
