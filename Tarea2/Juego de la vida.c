//
//  main.c
//  Juego de la vida
//
//  Created by Abril Daira Montiel Sánchez on 08/09/21.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    // insert code here...
    printf("Juego de la vida\n");
    
    int i, j;
    char tablero[5][5];
    printf("\nCelulas Iniciales\n");
    
    for(i=0; i<5; i++)
    {
    for(j=0; j<5; j++)
    {
    if ((i==1 && j==2) | (i==2 && j==1) | (i==2 && j==2) | (i==2 && j==3))
    {
    tablero[i][j] = 'V';
    }
    else if (i==0 | i==4)
    {
    tablero[i][j] = 'M';
    }
    else if ((i==1 && j==0) | (i==1 && j==1) | (i==1 && j==3) | (i==1 && j==4))
    {
    tablero[i][j] = 'M';
    }
    else if ((i==2 && j==0) | (i==2 && j==4))
    {
    tablero[i][j] = 'M';
    }
    else if (i==3 | i==4)
    {
    tablero[i][j] = 'M';
    }
    else if (i==4 | i==4)
    {
    tablero[i][j] = 'M';
    }
    }
    }
    for(i=0; i<5; i++)
    {
    printf("\n");
    for(j=0; j<5; j++)
    {
    printf("%c\t", tablero[i][j]);
    }
    }
    printf("\n\nPrimera generacion\n");
    printf("\n\n");
}
