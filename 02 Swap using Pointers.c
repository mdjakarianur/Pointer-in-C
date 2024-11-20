
#include <stdio.h>

void swap();

int main() {
    int num1=5, num2=10;
    
    printf("%d %d\n", num1,num2);
    
    swap(&num1,&num2);
    
    printf("%d %d\n", num1,num2);

    return 0;
}

void swap(int *p1, int *p2){
    int temp = *p1;
    *p1 = *p2;
    *p2 = temp;
    
}
