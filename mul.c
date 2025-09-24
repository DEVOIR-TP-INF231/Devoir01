#include <stdio.h>

int multiply(int a, int b) {
    if(a <= 0 || b <= 0) {
        printf("Numbers must be positive!\n");
        return -1;
    }
    
    int result = 0;
    for(int i = 0; i < b; i++) {
        result += a;
    }
    return result;
}

int main() {
    int a, b;
    
    printf("Enter two positive integers (separate intergers with space): ");
    scanf("%d %d", &a, &b);
    
    if(a <= 0 || b <= 0) {
        printf("Error: Both numbers must be positive!\n");
        return 1;
    }
    
    int result = multiply(a, b);
    
    if(result != -1) {
        printf("%d × %d = %d\n", a, b, result);
    }
    
    return 0;
}
