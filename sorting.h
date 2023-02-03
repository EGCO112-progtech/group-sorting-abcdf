// selection sort function module in C

void display(int a[],int n){

    int i;

    for(i=0;i<n;i++)
        printf("%5d",a[i]);
    printf("\n");
  
}


void swap(int *a,int *b){
 int temp;
  temp=*a;
  *a=*b;
  *b=temp;
  
}

void bubbleSort(int a[],int n)
{
  int i,j,b;
  int sorted;
  //how may pair to compare? n-1 pairs
  for(j=n-1,b=1;j>0;j--)
  {
    sorted=0;
    for(i=0;i<j;i++)
      {
        if(a[i]<a[i+1])
        {
          swap(&a[i],&a[i+1]);
          sorted=1;
        }
      display(a,n);
      }
    printf("\n");
    if(sorted==0) break;
   

  }
  
}

void selectionSort(int a[], int n) {
  int i, j, m, k;
  for (j = 0; j < n - 1; j++) {
    m = a[j];
    k = j;
    for (i = j + 1; i < n; i++) {
      if (m < a[i]) {
        m = a[i];
        k = i;
      }
    }
    swap(&a[j], &a[k]);
    display(a, n);
    printf("\n");
  }
}

void insertion(int a[], int n) {
  int j,i,tmp;
    for(j=1;j<n;j++){
      int value = a[j];
        for(i = j-1; i >= 0 ;i--){
          if(value<a[i])
            break;
          else 
            a[i+1]=a[i];
            display(a,n);
          }
          a[i+1] = value;
          display(a, n);
          printf("\n");
        
    }
}