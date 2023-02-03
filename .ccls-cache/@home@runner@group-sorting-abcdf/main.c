#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "sorting.h"
int main(int argc, char **argv){ //argc=argument count, argv=argument variable
  int i,j=0,N=argc-2,*a=(int*)malloc(sizeof(int)*N);
  for(i=0;i<N;i++)
  {
    a[i]=atoi(argv[i+2]);
  }
//  printf("%s",argv[1]);
  display(a,N);
  if (strcmp(argv[1],"bubble")==0) bubbleSort(a,N);
  else if (strcmp(argv[1],"selection")==0) selectionSort(a,N);
  else if (strcmp(argv[1],"insertion")==0) insertion(a,N);
  display(a,N);
  return 0;
}