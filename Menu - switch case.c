#include <stdio.h>
#include <locale.h>

int main (){
    setlocale (LC_ALL,"");
    int opção;
    float n1,n2,n3,n4,média;
    
    printf ("Selecione a matéria (1-4):\n");
    printf ("1 - Português\n");
    printf ("2 - Matemática\n");
    printf ("3 - Biologia\n");
    printf ("4 - História\n");
    scanf ("%d",&opção);
    
    switch (opção){
        case 1:
        printf ("Você escolheu Português!\n");
        printf ("Digite as quatro notas:\n");
        scanf ("%f %f %f %f",&n1, &n2, &n3, &n4);
        break;
        
        case 2:
        printf ("Você escolheu Matemática!\n");
        printf ("Digite as quatro notas:\n");
        scanf ("%f %f %f %f",&n1, &n2, &n3, &n4);
        break;
        
        case 3:
        printf ("Você escolheu Biologia!\n");
        printf ("Digite as quatro notas:\n");
        scanf ("%f %f %f %f",&n1, &n2, &n3, &n4);
        break;
        
        case 4:
        printf ("Você escolheu História!\n");
        printf ("Digite as quatro notas:\n");
        scanf ("%f %f %f %f",&n1, &n2, &n3, &n4);
        break;
        
        default:
        printf ("Opção Inválida! Programa Encerrado");
        return 1;
    }
    
    média = ((n1+n2+n3+n4) / 4.0);
    
    printf ("Média final: %.2f\n",média);
    
    if (média >= 9.0)
    {
        printf ("Conceito A\n");
        printf ("Status: Aprovado(a)");
    }
    else if (média >= 7.5)
    {
        printf ("Conceito B\n");
        printf ("Status: Aprovado(a)");
    }
    else if (média >=6.0)
    {
        printf ("Conceito C\n");
        printf ("Status: Aprovado(a)");
    }
    else if (média >= 4.0)
    {
        printf ("Conceito D\n");
        printf ("Status: Reprovado(a)");
    }
    else
    {
        printf ("Conceito E\n");
        printf ("Reprovado(a) =(");
    }
    return 0;
}


