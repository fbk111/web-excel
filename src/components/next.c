include<#stdio.h>

    void get_next(char[] t, int next[])
{
    i = 1;
    j = 0;
    next[0] = 1;
    while (i < strlen(next))
    {
        if (j == 0 || next[i] == next[j])
        {
            ++j;
            ++i;
            next[i] = j;
        }
        else
        {
            j = next[i];
        }
    }
}
