//selection sort 
//takes the 1st element in the unsorted array and swaps with the smallest element in the unsorted array

#include<stdio.h>
#define f(a,b,c) for(int a=b;a<c;a++)

int main(){
    int size,smallest,iteration=1;
    puts("Enter array size :\t");
    scanf("%d", &size);
    int arr[size];
    puts("Enter array elements :\n");
    f(i,0,size) scanf("%d",&arr[i]);
 
    //selection sort begins
 
    f(i,0,size-1){
        smallest = i;
        f(j,i+1,size){
            if (arr[smallest] > arr[j]) smallest = j;
        }

        //swap
        int temp = arr[smallest];
        arr[smallest] = arr[i];
        arr[i] = temp;
       
        printf("\nAfter %d iteration\n",iteration++);
        
        f(i,0,size) printf("%d ",arr[i]);
        printf("\n");
    }
}
