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
//  printf("Selection complete!");   
	
} 



void insertion(int a[],int n){

//  printf("insertion complete!"); 
}

void swap(int *a,int *b){
 int temp;
  temp=*a;
  *a=*b;
  *b=temp;
  
}

void bubbleSort(int a[],int n){

int i,j;
int sorted;
// How may pair to compare?
for(j=1;j<=n-1;j++){
 
  display(a,n);
 }
//  printf("Bubble complete!"); 
}




