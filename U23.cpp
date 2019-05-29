#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>


int main(void)
{
   FILE *k;  
   int i=0;
   char r[50];
	printf("用唯讀模式讀取data.txt\n");
	printf("-------------------------------------------------\n");
	printf("讀取內容為：\n"); 
   k=fopen("data.txt", "r");
   if (k==NULL)

   {  
      printf("檔案開啟失敗!!\n");
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
