#include <stdio.h>
#include <stdlib.h>

//argc - ���-�� ���������� ��������� ������
//argv - ������ ����� � ����������� ��������� ������
int main(int argc,char* argv[])
{

   if (argc<3)//���� ���������� ������ ����  �������
    {
    printf("Ne pravilno vvedeny argumenty\n");
    return 1;
   }
   //��������� ������ �������� ��������� ������ � ��� float(� ������������,� ��������� ������� )
   float temp=atof(argv[1]);
   printf("%.2f\n",temp);
   if (argv[2][0]=='C')//������ �������� � ������� ���������
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
