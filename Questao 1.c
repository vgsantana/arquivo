/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

void main()
{
    float n;
    printf("Digite um numero inteiro: ");
    scanf("%f", &n);
    
    if (n > 0){
        printf("%.2f é Positivo", n);
    } else if(n < 0){
        printf("%.2f é Negativo", n);
    } else {
        printf("%.2f é Igual a zero", n);
    }

}
