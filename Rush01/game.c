void    col_up(int *table_game, int *perimeter)
{
    int i;
    
    i = 0;
    while (i < 4)
    {
        if (perimeter[0 + i] == 4)
        {
            table_game[0 + i] = 1;
            table_game[4 + i] = 2;
            table_game[8 + i] = 3;
            table_game[12 + i] = 4;
        }
        if (perimeter[i] == 1)
            table_game[i]= 4;
        if (perimeter[i] == 2 && perimeter[i + 4] == 3)
            table_game[4 + i] = 4;
        if (perimeter[i] == 2 && perimeter[i + 4] == 1)
            table_game[i] = 3;
        i++;
    }
}

void col_down(int *table_game, int *perimeter)
{
    int i;
    
    i = 0;
    while (i < 4)
    {
        if (perimeter[4 + i] == 4)
        {
            table_game[0 + i] = 4;
            table_game[4 + i] = 3;
            table_game[8 + i] = 2;
            table_game[12 + i] = 1;
        }
        if (perimeter[4 + i] == 1)
        {
            table_game[12 + i] = 4;
        }
        if (perimeter[4 + i] == 2 && perimeter[i] == 3)
            table_game[8 + i] = 4;
        if (perimeter[4 + i] == 2 && perimeter[i] == 1)
            table_game[12 + i] = 3;
        i++;
    }
}

void    row_left(int *table_game, int *perimeter)
{
    int i;
    
    i = 0;
    while (i < 4)
    {
        if (perimeter[8 + i] == 4)
        {
            table_game[0 + 4 * i] = 1;
            table_game[1 + 4 * i] = 2;
            table_game[2 + 4 * i] = 3;
            table_game[3 + 4 * i] = 4;
        }
        if (perimeter[8 + i] == 1)
        {
            table_game[4 * i] = 4;
        }
        if (perimeter[8 + i] == 2 && perimeter[12 + i] == 3)
            table_game[1 + 4 * i] = 4;
        if (perimeter[8 + i] == 2 && perimeter[12 + i] == 1)
            table_game[0 + 4 * i] = 3;
        i++;
    }
}

void    row_right(int *table_game, int *perimeter)
{
    int i;
    
    i = 0;
    while (i < 4)
    {
        if (perimeter[12 + i] == 4)
        {
            table_game[3 + 4 * i] = 1;
            table_game[2 + 4 * i] = 2;
            table_game[1 + 4 * i] = 3;
            table_game[0 + 4 * i] = 4;
        }
        if (perimeter[12 + i] == 1)
        {
            table_game[3 + 4 * i] = 4;
        }
        if (perimeter[12 + i] == 2 && perimeter[8 + i] == 3)
            table_game[2 + 4 * i] = 4;
        if (perimeter[12 + i] == 2 && perimeter[8 + i] == 1)
            table_game[3 + 4 * i] = 3;
        i++;
    }
}

void    line_verification(int *table_game)
{
    int i;
    int k;
    
    i = 0;
    k = 0;
    while (i < 4)
    {
        if ((table_game[4 * i] == 0) && table_game[1 + 4 * i] != 0 &&
            table_game[2 + 4 * i] != 0 && table_game[3 + 4 * i] != 0)
        {
            k = table_game[1 + 4 * i] + table_game[2 + 4 * i] + table_game[3 + 4 * i];
            table_game[4 * i] = 10 - k;
        }
        i++;
    }
    i = 0;
    while (i < 4)
    {
        if ((table_game[1 + 4 * i] == 0) && table_game[4 * i] != 0 &&
            table_game[2 + 4 * i] != 0 && table_game[3 + 4 * i] != 0)
        {
            k = table_game[4 * i] + table_game[2 + 4 * i] + table_game[3 + 4 * i];
            table_game[1 + 4 * i] = 10 - k;
        }
        i++;
    }
    i = 0;
    while (i < 4)
    {
        if ((table_game[2 + 4 * i] == 0) && table_game[1 + 4 * i] != 0 &&
            table_game[4 * i] != 0 && table_game[3 + 4 * i] != 0)
        {
            k = table_game[4 * i] + table_game[1 + 4 * i] + table_game[3 + 4 * i];
            table_game[2 + 4 * i] = 10 - k;
        }
        i++;
    }
    i = 0;
    while (i < 4)
    {
        if ((table_game[3 + 4 * i] == 0) && table_game[1 + 4 * i] != 0 &&
            table_game[2 + 4 * i] != 0 && table_game[4 * i] != 0)
        {
            k = table_game[1 + 4 * i] + table_game[2 + 4 * i] + table_game[4 * i];
            table_game[3 + 4 * i] = 10 - k;
        }
        i++;
    }
}

void    column_verification(int *table_game)
{
    int i;
    int k;

    i = 0;
    while (i < 4)
    {
        if ((table_game[i] == 0) && table_game[4 + i] != 0 &&
            table_game[8 + i] != 0 && table_game[12 + i] != 0)
        {
            k = table_game[4 + i] + table_game[8 + i] + table_game[12 + i];
            table_game[i] = 10 - k;
        }
        i++;
        
    }
    i = 0;
    while (i < 4)
    {
        if ((table_game[4 + i] == 0) && table_game[i] != 0 &&
            table_game[8 + i] != 0 && table_game[12 + i] != 0)
        {
            k = table_game[i] + table_game[8 + i] + table_game[12 + i];
            table_game[4 + i] = 10 - k;
        }
        i++;
    }
    i = 0;
    while (i < 4)
    {
        if ((table_game[8 + i] == 0) && table_game[i] != 0 &&
            table_game[4 + i] != 0 && table_game[12 + i] != 0)
        {
            k = table_game[i] + table_game[4 + i] + table_game[12 + i];
            table_game[8 + i] = 10 - k;
        }
        i++;
    }
    i = 0;
    while (i < 4)
    {
        if ((table_game[12 + i] == 0) && table_game[i] != 0 &&
            table_game[4 + i] != 0 && table_game[8 + i] != 0)
        {
            k = table_game[i] + table_game[4 + i] + table_game[8 + i];
            table_game[12 + i] = 10 - k;
        }
        i++;
        
    }
}

void  two_three (int *table_game, int *perimeter)
{
    int i;
    
    i = 0;
    while (i < 4)
    {
        if (table_game[0 + i * 4] == 1 && table_game[1 + i * 4] == 4 && perimeter[12 + i] == 3)
        {
            table_game[2 + 4 * i] = 3;
            table_game[3 + 4 * i] = 2;
        }
        i++;
    }
    
    while (i < 4)
    {
        if (table_game[0 + i] == 1 && table_game[4 + i] == 4 && perimeter[4] == 3)
        {
            table_game[8 + i] = 2;
            table_game[12 + i] = 3;
        }
        i++;
    }
    i = 0;
    while (i < 4)
    {
        if (table_game[12 + i] == 1 && table_game[8 + i] == 4 && perimeter[0] == 3)
        {
            table_game[4 + i] = 3;
            table_game[0 + i] = 2;
        }
        i++;
    }
    i = 0;
    
    while (i < 4)
    {
        if (table_game[3 + 4 * i] == 1 && table_game[2 + 4 * i] == 4 && perimeter[8] == 3)
        {
            table_game[1 + 4 * i] = 3;
            table_game[0 + 4 * i] = 2;
        }
        i++;
        
    }

}
