#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>

void    col_up(int *table_game, int *perimeter);
void    col_down(int *table_game, int *perimeter);
void    row_left(int *table_game, int *perimeter);
void    row_right(int *table_game, int *perimeter);
void    line_verification(int *table_game);
void    column_verification(int *table_game);
int     ft_next_round(int *table_game);
void  two_three (int *table_game, int *perimeter);

int ft_1st_round(int *table_game, int *perimeter)
{
    col_up(table_game, perimeter);
    col_down(table_game, perimeter);
    row_left(table_game, perimeter);
    row_right(table_game, perimeter);
    line_verification(table_game);
    column_verification(table_game);
   two_three (table_game, perimeter);

    return (1);
}

int ft_next_round(int *table_game)
{
    line_verification(table_game);
    column_verification(table_game);
    return (1);
}



void    ft_mapping_to_int(int *perimeter, char *argv)
{
    int i;
    int j;

    i = 0;
    j = 0;
    while(argv[i] != '\0')
    {
        if (argv[i] >= 49 && argv[i] <= 53 )
        {
            perimeter[j] = argv[i] - 48;
            j++;
            i++;
        }
        else
        {
            i++;
        }
    }
    perimeter[i] = '\0';
}

int size_of_tab(char *tab)
{
    int i;

    i = 0;
    while(tab[i] != '\0')
    {
        i++;
    }
    return(i);
}
