#include <stdio.h>
#include <locale.h>

int main (){
    setlocale (LC_ALL,"");
    int idade;
    printf ("Informe sua idade atual:\n");
    scanf ("%d",&idade);
    if (idade<16)
    {
        printf ("Você não pode votar");
    }
    else if (idade <= 17 || idade>70)
    {
        printf ("Seu voto é opicional");
    }
    else{
        printf ("Seu voto é obrigatório");
    }
    return 0;
} 
