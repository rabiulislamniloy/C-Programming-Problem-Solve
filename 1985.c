#include <stdio.h>

int main() {
    int n, code, quantity;
    double total = 0.0;
    
    scanf("%d", &n);
    
    for (int i = 0; i < n; i++) {
        scanf("%d %d", &code, &quantity);
        
        switch(code) {
            case 1001:
                total += quantity * 1.50;
                break;
            case 1002:
                total += quantity * 2.50;
                break;
            case 1003:
                total += quantity * 3.50;
                break;
            case 1004:
                total += quantity * 4.50;
                break;
            case 1005:
                total += quantity * 5.50;
                break;
        }
    }    
    printf("%.2lf\n", total);
    
    return 0;
}
