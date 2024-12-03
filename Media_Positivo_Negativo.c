#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <locale.h>
#include <iostream>
#include <cstdlib>
#include <conio.h>


int main ()
{

int k;
int num,media;

printf("Digite a quantidade de números: ");
scanf("%d",&k);

//caso o valor digitado seje 0
while(k==0)
{
printf("\n O valor %d é neutro,entao ele não é negativo nem positivo,mas é par,se deseja ter um valor ímpar digite outro valor!!\n",k);
return 0;
}

// se for negativo ou positivo
if(k<0) 
{
for(num=-k;num<=0;num++)
{
printf("%d\n",num);
}
printf("\n %d É negativo",k);
printf("\n -%d É a média\n",media=num/2);
printf("\n menor número %d\n",num=k);
printf("\n maior número positivo %d",num=+k);
printf("\n maior número %d\n",num=0);
}
else
{
for(num=0;num<=k;num++)
{
printf("%d\n",num);
}
printf("\n %d É positivo",k);
printf("\n %d É a média\n",media=num/2);
printf("\n menor número %d",num=-k);
printf("\n menor número positivo %d",num=0);
printf("\n maior número %d",num=k);
}

//ímpar ou par
if(k%2==0)
{
printf("\n %d É par",k);
}
else
{
printf("\n %d É impar",k);
}

return 0;

//observação: os valores negativos não são imprimidos pois a variável usada é do tipo inteira, caso necessite deles é só alterar para float %f

}
