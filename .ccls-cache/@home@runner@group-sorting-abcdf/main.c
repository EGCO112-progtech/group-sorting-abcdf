#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "sorting.h"

int main(int argc, char **argv){ //argc=argument count, argv=argument variable
  int i,j=0,N=argc-1,*a=(int*)malloc(sizeof(int)*N);
  for(i=0;i<N;i++)
  {
    a[i]=atoi(argv[i+2]);
  }
  display(a,N);
  char *type=(char*)malloc(sizeof(char)*strlen(argv[1]));
  if (strcmp(type,"bubble")==0) bubbleSort(a,N);
  else if (strcmp(type,"selection")==0) selectionSort(a,N);
  else if (strcmp(type,"insertion")==0) insertion(a,N);
  display(a,N);
  return 0;
}


