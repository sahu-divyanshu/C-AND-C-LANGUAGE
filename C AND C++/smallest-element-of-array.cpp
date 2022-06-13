#include<stdio.h>
int returnMin(int arr[],int n)
{
    int min=arr[0];
    for(int i=0;i<n;i++){
        if (arr[i]<min)
            min=arr[i];
    }
    return min;
}
int main(){
    int a[]={45,7,34,6,89};
    int min=returnMin(a,5);
    printf("the lowest array element:%d",min);
    return 0;
}

