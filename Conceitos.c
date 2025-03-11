#include <stdio.h>
#include <locale.h>

int main (){
    setlocale (LC_ALL,"");
    float n1, n2, n3,n4,média;
    printf ("Insira a nota da primeira diciplina:\n");
    scanf ("%f",&n1);
    printf ("Insira a nota da segunda diciplina:\n");
    scanf ("%f",&n2);
    printf ("Insira a nota da terceira diciplina:\n");
    scanf ("%f",&n3);
    printf ("Insira a nota da qurta diciplina:\n");
    scanf ("%f",&n4);
    média = ((n1+n2+n3+n4) / 4);
    if ( média >= 9.00 )
    {
        printf ("O aluno(a) está no conceito A, e está aprovado(a)");
    }
    else if ( média >= 7.50 )
    {
        printf ("O aluno(a) está no conceito B, e está aprovado(a)");
    }
    else if ( média >= 6.00 )
    {
        printf ("O aluno(a) está no conceito C, e está aprovado(a)");
    }
    else if ( média >= 4.00 )
    {
        printf ("O aluno(a) está no conceito D, e está reprovado(a)");
    }
    else {
        printf ("O aluno(a) está no conceito E, e está reprovado(a)");
    }
}