#include <stdio.h>
#include<time.h>
void swap(int*a,int*b){
    int temp;
    temp=*a;
    *a=*b;
    *b=temp;
}
int partition (int arr[], int low, int high)
{
    int pivot = arr[high];  // selecting last element as pivot
    int i = (low - 1);  // index of smaller element
 
    for (int j = low; j <= high- 1; j++)
    {
        // If the current element is smaller than or equal to pivot
        if (arr[j] <= pivot)
        {
            i++;    // increment index of smaller element
            swap(&arr[i], &arr[j]);
        }
    }
    swap(&arr[i + 1], &arr[high]);
    return (i + 1);
}
void quicksort(int a[], int p, int r)    
{
    if(p < r)
    {
        int q;
        q = partition(a, p, r);
        quicksort(a, p, q-1);
        quicksort(a, q+1, r);
    }
}

int main() {
  int arr[5];
  int start=10;
  int end=5000;
  for(int i=0;i<5;i++){
      arr[i]=(rand()%(end-start)+1)+start;
  }
  for(int i=0;i<5;i++){
      printf("%d ",arr[i]);
  }
  printf("\n");
  quicksort(arr,0,4);
  for(int i=0;i<5;i++){
      printf("%d ",arr[i]);
  }
    
    return 0;
}
