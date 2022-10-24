#include "functions.h"

int randomize(const int max)
{
  srand(time(0));
  return rand() % max;
}

void writeMax()
{
  int input;
  FILE *fptr;

  fptr = fopen("data.txt", "w");

  if (fptr == NULL)
  {
    printf("Error! Can't write data.txt");
    exit(1);
  }

  printf("Enter the max number\n");
  scanf("%d", &input);

  fprintf(fptr, "%d", input);
  fclose(fptr);
}

int readMax()
{
  int max;
  FILE *fptr;

  if ((fptr = fopen("data.txt", "r")) == NULL)
  {
    printf("Error opening file.");
    exit(1);
  }

  fscanf(fptr, "%d", &max);
  fclose(fptr);

  return max;
}