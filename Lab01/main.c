#include <stdio.h>
#include <stdlib.h>

//argc - кол-во аргументов командной строки
//argv - массив строк с аргументами командной строки
int main(int argc,char* argv[])
{

   if (argc<3)//если аргументов меньше трех  выходим
    {
    printf("Ne pravilno vvedeny argumenty\n");
    return 1;
   }
   //Переводим первый аргумент командной строки в тип float(в вещественный,с плавующей запятой )
   float temp=atof(argv[1]);
   printf("%.2f\n",temp);
   if (argv[2][0]=='C')//первый символов в третьем аргументе
   {
       float K=temp+273.15;
       float F=temp*9/5+32;
       printf("%.2f F\n",F);
       printf("%.2f K\n",K);
   }
   if (argv[2][0]=='K')
   {
       float C=temp-273.15;
       float F=9*(temp-273.15)/5+32;
       printf("%.2f C\n",C);
       printf("%.2f F\n",F);
   }
   if (argv[2][0]=='F')
   {
       float C=5*(temp-32)/9;
       float K=5*(temp-32)/9+273.15;
       printf("%.2f C\n",C);
       printf("%.2f K\n",K);
   }
    return 0;
}
