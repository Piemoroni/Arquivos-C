#include <stdio.h>
#include <locale.h>

int main (){
    setlocale (LC_ALL,"");
    int a1,a2,a3;
    printf ("Informe o primeiro ângulo:\n");
    scanf ("%d",&a1);
    printf ("Informe o segundo ângulo:\n");
    scanf ("%d",&a2);
    printf ("Informe o terceiro ângulo:\n");
    scanf ("%d",&a3);
    if (a1 == a2 && a2== a3 )
    {
        printf ("É um triângulo equilátero");
    }
    else if (a1 != a2 && a2 != a3)
    {
        printf ("É um triângulo escaleno");
    }
    else{
        printf ("É um triângulo isóceles");
    }
    return 0;
} 
