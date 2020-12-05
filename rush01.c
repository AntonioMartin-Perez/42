#include <unistd.h>
#include <stdio.h>

void        algoritmo(int col1up, int col2up, int col3up, int col4up, int col1down, int col2down, int col3down, int col4down, int row1left, int row2left, int row3left, int row4left, int row1right, int row2right, int row3right, int row4right)
{
    int i,j;  // contador filas -> i, j <- contador columnas
    int tab[4][4][4];
    int colup[4], coldown[4], rowleft[4],rowright[4];

    colup[0] = col1up;
    colup[1] = col2up;
    colup[2] = col3up;
    colup[3] = col4up;
    coldown[0] = col1down;
    coldown[1] = col2down;
    coldown[2] = col3down;
    coldown[3] = col4down;

    rowleft[0] = row1left;
    rowleft[1] = row2left;
    rowleft[2] = row3left;
    rowleft[3] = row4left;
    rowright[0] = row1right;
    rowright[1] = row2right;
    rowright[2] = row3right;
    rowright[3] = row4right;

    i = 1;
    j= 1;

    while (j <= 4)
    {
        while (i <= 4)
        {

            ////   Comienza el bosque de ifs ////
            if (rowleft == 4)           // Condición de los 4s
            {

            }

            // Condición que me dijo Santiago -> 3-2 enfrentados ubican el 4

            if( (i == 1 && rowleft[j] == 3) || (i == 4 && rowright[j] == 3) || (j == 1 && coldown[i] == 3) || (j == 4 && coldown[i] == 3))         // Condición de estar en el borde y view = 3
            {
                tab[i][j][0] = 1;
                tab[i][j][1] = 2;
                tab[i][j][2] = 0;
                tab[i][j][3] = 0;                
                printf("Entra en el bucle de los 3 en %d,%d. view = %d\n",i,j,colup[j]);
                // printf("Entra en el bucle %d\n",tab[3][1][2]);
            }
            if( (i == 1 && rowleft[j] == 2) || (i == 4 && rowright[j] == 2) || (j == 1 && coldown[i] == 2) || (j == 4 && coldown[i] == 2))         // Condición de estar en el borde y view = 2
            {
                tab[i][j][0] = 1;
                tab[i][j][1] = 2;
                tab[i][j][2] = 3;
                tab[i][j][3] = 0;                
                printf("Entra en el bucle de los 2 en %d,%d. view = %d\n",i,j,colup[j]);
                // printf("Entra en el bucle %d\n",tab[3][1][2]);
            }


            // Caso en el que no tengo información
            else
            {
                tab[i][j][0] = 1;
                tab[i][j][1] = 2;
                tab[i][j][2] = 3;
                tab[i][j][3] = 4;                
            }
            
            // write(1,"X",1);
            i++;
        }
        // write(1,"\n",1);
        i = 1;
        j++;
    }

    // printf("%d\n",tab[3][1][2]);

    
    ////////////////////    Algoritmo    /////////////////////


}


int 		main(void)
{
    algoritmo(4,3,2,1,1,2,2,2,4,3,2,1,1,2,2,2);
}