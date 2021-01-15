#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

#define UNASSIGNED 0
#define N 4

void    ft_1st_round(int *table_game, int *perimeter);
void    ft_mapping_to_int(int *perimeter, char *argv);
int     size_of_tab(char *tab);
int    find_unassigned_location(int table_game[N][N], int row, int col);
int    is_safe(int table_game[N][N], int row, int col, int i);
void    ft_mapping_to_int(int *perimeter, char *argv);
int size_of_tab(char *tab);
int solve_sudoku(int table_game[N][N]);
int ft_next_round(int *table_game);


void    col_up(int *table_game, int *perimeter);
void    col_down(int *table_game, int *perimeter);
void    row_left(int *table_game, int *perimeter);
void    row_right(int *table_game, int *perimeter);

void  ft_to_matrice(int table_game[16], int two_dimensions[4][4])
{
    int i;
    int j;
    int z;
    
    i = 0;
    j = 0;
    z = 0;
    while (i < 16)
    {
        *((int *)(two_dimensions + z) + j) = (table_game[i]);
        if ( i == 3 || i == 7 || i == 11)
        {
            z = 0;
        }
        i++;
        j++;
    }
}

int        main(int argc, char **argv)
{
    int size_of_argv1 = size_of_tab(argv[1]) / 2 + 1;
    int *perimeter;
    int i;
    int table_game[16] = {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0};
    
    perimeter = (int*)malloc(sizeof(*perimeter) * size_of_argv1);
    
    size_of_argv1 = size_of_tab(argv[1]);
    ft_mapping_to_int(perimeter,argv[1]);
    
    if (argc != 2)
    {
        write(1, "Error", 6);
        return (0);
    }
    
    //lancement du jeu
    ft_1st_round(table_game, perimeter);
    ft_next_round(table_game);
    ft_next_round(table_game);
    ft_next_round(table_game);
    
    i = 0;
    while (i < 4)
    {
        table_game[i] = table_game[i] + '0';
        write(1, &table_game[i], 1);
        write(1, " ", 1);
        i++;
    }
    write(1, "\n", 1);
    while (i < 8)
    {
        table_game[i] = table_game[i] + '0';
        write(1, &table_game[i], 1);
        write(1, " ", 1);
        i++;
    }
    write(1, "\n", 1);
    while (i < 12)
    {
        table_game[i] = table_game[i] + '0';
        write(1, &table_game[i], 1);
        write(1, " ", 1);
        i++;
    }
    write(1, "\n", 1);
    while (i < 16)
    {
        table_game[i] = table_game[i] + '0';
        write(1, &table_game[i], 1);
        write(1, " ", 1);
        i++;
    }
    write(1, "\n", 1);
    
    return (0);
    
}

