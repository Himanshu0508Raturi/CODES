#include <stdio.h>

int main() {
  FILE *fp;
  long size;

  fp = fopen("Data.txt", "r");
  if (fp == NULL) {
    perror("Error opening file");
    return -1;
  }

  fseek(fp, 0, 2);
  size = ftell(fp);
  fclose(fp);

  printf("The size of the file is %ld bytes\n", size);

  return 0;
}