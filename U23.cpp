#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>


int main(void)
{
   FILE *k;  
   int i=0;
   char r[50];
	printf("�ΰ�Ū�Ҧ�Ū��data.txt\n");
	printf("-------------------------------------------------\n");
	printf("Ū�����e���G\n"); 
   k=fopen("data.txt", "r");
   if (k==NULL)

   {  
      printf("�ɮ׶}�ҥ���!!\n");
      exit(1); 
   }
    rewind(k);
    while ((fgets(r, 50, k)) != NULL)

       printf("%s", r);

       printf("\n");

    fclose(k);
    system("pause");
    return 0;
}
