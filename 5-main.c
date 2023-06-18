#include <stdio.h>
int main(void)
{
    int i;
    char *alpha = "abcdefghijklmnopqrstuvwxyz"; // La chaine de caractere C'est un tableau.*
    // Vu qu'il est tableau, tu peux acceder chaque caractere, utilisant index.
    // par example si tu veux acceder 'c' dans alpha tu peux l'appller par alpha[2]
    for (i=0; alpha[i]; i++)
    {  

    if (i == 0)
          printf("%c is %dst Alphabet\n", alpha[i], i + 1);

    else if (i == 1)
          printf("%c is %dnd Alphabet\n", alpha[i], i + 1);

    else if (i == 2)
          printf("%c is %drd Alphabet\n", alpha[i], i + 1);   

    else
          printf("%c is %dth Alphabet\n", alpha[i], i + 1);          
    }
    return 0;
}