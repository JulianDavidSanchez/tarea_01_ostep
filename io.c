#include <stdio.h>

int main(int argc, char *argv[])
{
  char cad[1000];
  FILE * f;
  f = fopen(argv[1], "r");
  if (f ==NULL)
    printf("Error, archivo no encontrado.");
  else
  {
    int c;
    int h = 0;
    char mat[1000];
   while(1){
     c = fgetc(f);
     if (feof(f)){
      break;
     }
    printf("%c", c);
    mat[h] = c;
    h++;
   }
   int p;
   for(p=(h-1); p>=0; p--){
    printf("%c",mat[p]);
   }
   printf("\n");
   fclose(f);
  }
  return 0;
}

