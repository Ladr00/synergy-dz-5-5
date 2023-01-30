#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main()
{
  int mas [100] [100];
  int inv [100] [100];
  int n, m;

  printf("n=");
  scanf("%i", &n);

  printf("m=");
  scanf("%i", &m);

  printf("Vvesti massiv chisel:\n");

  for(int i  =0; i < n; i++)
  {
    for(int j = 0; j < m; j++)
    {
        scanf ("%i", &mas [i] [j]);
    }
  }

   printf("\n\n\n\n");
   
   printf("Vvod:\n");
   for (int i = 0; i < n; i++)
  {
    for (int j = 0; j < m; j++)
    {
        printf ("%3i", mas [i] [j]);
    }
    printf("\n\n");
  }

 
for(int j = 0; j < m; j++)
{
  for(int i = 0; i < n; i++)
  {
   inv [i] [j] = mas [j] [i];
  }
}

printf("\n\n\n\n");


printf("Vivod:\n");
for(int i = 0; i < n; i++)
{
  for(int j = 0; j < m; j++)
  {
    printf("%3i", inv [i] [j]);
  }
  printf("\n\n");
}
}
