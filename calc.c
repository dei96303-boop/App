#include <stdio.h>
#include <math.h>

// ফাংশন প্রোটোটাইপ
int fac(int k);
float permu(int n, int b);
float com(int n, int b);
float pw(int n, int b);
float pwi(int n, int b);
float dc(int n);
float cd(int n);

int main() {
    int y, n, b;
    float z, zi;
    char x, c;
    
    do {
        printf("\n--- Advanced Calculator ---\n");
        printf(" 1. Factorial\n 2. Permutations\n 3. Combination\n 4. Power\n 5. N-th Root\n");
        printf(" 6. Square root\n 7. Cube root\n 8. Sin\n 9. Cos\n 10. Tan\n");
        printf(" 11. Cosec\n 12. Sec\n 13. Cot\n 14. Ln\n 15. Log10\n");
        printf(" 16. Inverse Trig\n 17. Radian to Degree\n 18. Degree to Radian\n");
        printf(" 19. Basic Calculator (+, -, *, /)\n");
        printf("Choice: ");
        
        if (scanf("%d", &y) != 1) break;

        switch(y) {
            case 1:
                printf("Enter a number: ");
                scanf("%d", &n);
                printf("Result: %d\n", fac(n));
                break;
            case 2:
                printf("Enter n and r: ");
                scanf("%d %d", &n, &b);
                if(b > n) printf("Invalid input!\n");
                else printf("Result: %f\n", permu(n, b));
                break;
            case 3:
                printf("Enter n and r: ");
                scanf("%d %d", &n, &b);
                if(b > n) printf("Invalid input!\n");
                else printf("Result: %f\n", com(n, b));
                break;
            case 4:
                printf("Enter base and power: ");
                scanf("%d %d", &n, &b);
                printf("Result: %f\n", pw(n, b));
                break;
            case 5:
                printf("Enter number and root: ");
                scanf("%d %d", &n, &b);
                printf("Result: %f\n", pwi(n, b));
                break;
            case 6:
                printf("Enter number: "); scanf("%d", &n);
                printf("Result: %f\n", sqrt(n)); break;
            case 7:
                printf("Enter number: "); scanf("%d", &n);
                printf("Result: %f\n", cbrt(n)); break;
            case 8:
                printf("Enter number: "); scanf("%d", &n);
                printf("Result: %f\n", sin(n)); break;
            case 9:
                printf("Enter number: "); scanf("%d", &n);
                printf("Result: %f\n", cos(n)); break;
            case 10:
                printf("Enter number: "); scanf("%d", &n);
                printf("Result: %f\n", tan(n)); break;
            case 11:
                printf("Enter number: "); scanf("%d", &n);
                printf("Result: %f\n", 1.0/sin(n)); break;
            case 12:
                printf("Enter number: "); scanf("%d", &n);
                printf("Result: %f\n", 1.0/cos(n)); break;
            case 13:
                printf("Enter number: "); scanf("%d", &n);
                printf("Result: %f\n", 1.0/tan(n)); break;
            case 14:
                printf("Enter number: "); scanf("%d", &n);
                printf("Result: %f\n", log(n)); break;
            case 15:
                printf("Enter number: "); scanf("%d", &n);
                printf("Result: %f\n", log10(n)); break;
            case 16:
                printf("a. asin, b. acos, c. atan: ");
                scanf(" %c", &c);
                printf("Enter number: "); scanf("%d", &n);
                if(c=='a') printf("Result: %f\n", asin(n));
                else if(c=='b') printf("Result: %f\n", acos(n));
                else if(c=='c') printf("Result: %f\n", atan(n));
                break;
            case 17:
                printf("Enter radian: "); scanf("%d", &n);
                printf("Result: %f\n", dc(n)); break;
            case 18:
                printf("Enter degree: "); scanf("%d", &n);
                printf("Result: %f\n", cd(n)); break;
            case 19:
                printf("Enter num1, operator (+,-,*,/), num2: ");
                scanf("%f %c %f", &z, &c, &zi);
                if(c=='+') printf("Result: %f\n", z+zi);
                else if(c=='-') printf("Result: %f\n", z-zi);
                else if(c=='*') printf("Result: %f\n", z*zi);
                else if(c=='/') printf("Result: %f\n", z/zi);
                break;
            default:
                printf("Invalid Option!\n");
        }
        printf("\nDo you want to continue? (y/n): ");
        scanf(" %c", &x);
    } while (x == 'y' || x == 'Y');

    return 0;
}

// ফাংশন ডেফিনিশন
int fac(int k) {
    int i, p = 1;
    for(i = 1; i <= k; i++) p *= i;
    return p;
}
float permu(int n, int b) {
    return (float)fac(n) / fac(n - b);
}
float com(int n, int b) {
    return (float)fac(n) / (fac(b) * fac(n - b));
}
float pw(int n, int b) {
    return pow(n, b);
}
float pwi(int n, int b) {
    return pow(n, 1.0/b);
}
float dc(int n) {
    return n * (180.0 * 7.0 / 22.0);
}
float cd(int n) {
    return n * (22.0 / (7.0 * 180.0));
}

