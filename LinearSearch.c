#include <stdio.h>
#include <time.h>
int main(){
int n;

printf("Enter the number of elements");
scanf("%d",&n);
int arr[n];
printf("Enter elements");
for(int j=0;j<n;j++){
scanf("%d",&arr[j]);}
   clock_t start, end;
    double time_taken;
start=clock();
for(int i=0;i<n;i++){
for(int j=1;j<n-1;j++){
if(arr[j]>arr[j+1]) 
{
int temp=arr[j+1];
arr[j+1]=arr[j];
arr[j]=temp;
}
}
}
end=clock();
 time_taken = ((double)(end - start)) / CLOCKS_PER_SEC;

    printf("Time taken = %f seconds\n", time_taken);

    return 0;}
