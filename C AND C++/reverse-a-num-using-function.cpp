// reverse a number using function
#include<stdio.h>
int reverse(int);
int main () {
    int n;
    printf("enter a number\n");
    scanf("%d",&n);
    int rev = reverse(n);
    printf("the reverse number is %d",rev);

    return 0;
}
int reverse(int n) {

     int rev = 0, rem;
    while(n!=0) {
        
        rem = n%10; //gives last digit
        rev = rev*10 + rem; //grnerate a num from rev with rem as last digit
        n = n/10;
    }
    return rev;

}
