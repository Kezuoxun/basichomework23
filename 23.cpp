#include <stdio.h>

#include <stdlib.h>

#include <ctype.h>

int main(void)

{

   FILE *pFile;

   int c51;         

   int sum=0;

   char poem[50];


	printf("用唯讀模式讀取data.txt\n");

	printf("讀取內容為：\n"); 

   pFile=fopen("data.txt", "r");

   if (pFile==NULL)

   {  

      printf("3A713248 柯佐勳 \n");

      exit(1); 

   }

    rewind(pFile);

    while ((fgets(poem, 50, pFile)) != NULL)

       printf("%s", poem);

       printf("\n");

    fclose(pFile);

    system("pause");

    return 0;

}
