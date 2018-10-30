#include <stdio.h>

/*void main()
{
    int cont,soma=0;

    for(cont=0;cont<=100;cont=cont+2)
        soma=cont+soma;

    printf("Soma dos números pares de 0 a 100: %d",soma);
}*/

/*void main()
{
    int i,soma=0,n=0;

    printf("Digite um número inteiro qualquer: ");
    scanf("%d",&n);

    for(i=1;i<=n;i++)
    {
        if(i%2==0)
            soma=soma-i;
        else
            soma=soma+i;
    }

    /*for(i=1;i<=n;i++)
        soma=soma+i+1-i++;*/

    /*printf("Soma: %d",soma);
}*/

void main()
{
    int n,cont,fatorial,total=0;

    printf("Digite um número inteiro qualquer: ");
    scanf("%d",&n);
    fatorial=n;

    for(cont=1;cont<n;cont++)
        fatorial=fatorial*(n-cont);

    printf("Fatorial: %d",fatorial);
}


