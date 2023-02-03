// selection sort function module in C

void display(int a[],int n){

    int i;

    for(i=0;i<n;i++)
        printf("%5d",a[i]);
    printf("\n");
  
}

void selectionSort(int data[], int length) 
{ 
	int i, j, m, mi; 
	
     display(data,length);
     
	
} 



void insertion(int a[],int n){


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




