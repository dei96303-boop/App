#include<stdio.h>
#include<math.h>
int fac(int k);
float permu(int n, int b);
float com(int n, int b);
float pw(int n, int b);
float pwi(int n, int b);
float dc(int n);
float cd(int n);

int main()
{
    int y, n, b;
    float z, zi;
    char x;
    do
    {
        printf(" 1. Factorial calculation\n 2. Permutations calculation\n 3. Combination calculation\n 4. Pwer calculation\n 5. Root Calcuulation\n");
        printf(" 6. Square root\n 7. Cube root\n 8.sin\n 9. cos\n 10. tan\n 11. cosec\n 12. sec\n 13. cot\n 14. ln\n 15.log\n 16. Inverse Trigonometry\n 17. Radian to Degree\n 18. Degree to Radian\n");
        printf(" 19. Normal Calculator\n");
        printf("Choice: ");
        scanf("%d", &y);
        switch(y)
        {
        case 1:
            printf("Enter a limit: ");
            scanf("%d", &n);
            printf("Result of factorial: %d\n", fac(n));
            break;
        case 2:
            printf("Enter n: ");
            scanf("%d", &n);
            printf("Enter r (base): ");
            scanf("%d", &b);
            while(b>n)
            {
                printf("Invalid input!! re-enter :\n");
                scanf("%d", &b);
            }
            printf("Result of permutation is: %f\n", permu(n, b));
            break;
        case 3:
            printf("Enter n: ");
            scanf("%d", &n);
            printf("Enter r (base): ");
            scanf("%d", &b);
            while(b>n)
            {
                printf("Invalid input!! re-enter :\n");
                scanf("%d", &b);
            }
            printf("Result of combination is: %f\n", com(n, b));
            break;
        case 4:
            printf("Enter n: ");
            scanf("%d", &n);
            printf("Enter power: ");
            scanf("%d", &b);
            printf("Result :%f", pw(n, b));
            break;
        case 5:
            printf("Enter number : ");
            scanf("%d", &n);
            printf("Enter root : ");
            scanf("%d", &b);
            printf("Result :%f", pwi(n, b));
            break;
        case 6:
            printf("Enter number : ");
            scanf("%d", &n);
            printf("Result:%f", sqrt(n));
            break;
        case 7:
            printf("Enter number : ");
            scanf("%d", &n);
            printf("Result:%f", cbrt(n));
            break;
        case 8:
            printf("Enter number : ");
            scanf("%d", &n);
            printf("Result:%f", sin(n));
            break;
        case 9:
            printf("Enter number : ");
            scanf("%d", &n);
            printf("Result:%f", cos(n));
            break;
        case 10:
            printf("Enter number : ");
            scanf("%d", &n);
            printf("Result:%f", tan(n));
            break;
        case 11:
            printf("Enter number : ");
            scanf("%d", &n);
            printf("Result:%f", 1/sin(n));
            break;

        case 12:
            printf("Enter number : ");
            scanf("%d", &n);
            printf("Result:%f", 1/cos(n));
            break;
        case 13:
            printf("Enter number : ");
            scanf("%d", &n);
            printf("Result:%f", 1/tan(n));
            break;
        case 14:
            printf("Enter number : ");
            scanf("%d", &n);
            printf("Result:%f", log(n));
            break;
        case 15:
            printf("Enter number : ");
            scanf("%d", &n);
            printf("Result:%f", log10(n));
            break;
        case 16:
            char c;
            printf("a. sin\n b. cos\n c. tan\n");
            printf("choise : ");
            scanf(" %c", &c);
            switch(c)
            {
            case 'a':
                printf("\nEnter number : ");
                scanf("%d", &n);
                printf("Result:%f", asin(n));
                break;
            case 'b':
                printf("\nEnter number : ");
                scanf("%d", &n);
                printf("Result:%f", acos(n));
                break;
            case 'c':
                printf("\nEnter number : ");
                scanf("%d", &n);
                printf("Result:%f", atan(n));
                break;
            default:
                printf("Invalid!");    
            }
            break;

        case 17:
            printf("Enter radian : ");
            scanf("%d", &n);
            printf("Result:%f", dc(n));
            break;
        case 18:
            printf("Enter radian : ");
            scanf("%d", &n);
            printf("Result:%f", cd(n));
            break;
        case 19:
            printf("Enter number 1:");  
            scanf("%f", &z);
            printf("Enter number 1:");  
            scanf("%f", &zi);
            scanf(" %c", &c);
            switch (c)
            {
                case '+':
                    printf("Result :%f" , z+zi);
                    break;
                case '-':
                    printf("Result :%f" , z-zi);
                    break;
                case '*':
                    printf("Result :%f" , z*zi);
                    break; 
                case '/':
                    printf("Result :%f" , z/zi);
                    break;         
            }

        default:
            printf("Invalid Option!\n");
            break;
        }
        printf("Are you use calculator if yes type y or Y\n");
        scanf(" %c", &x);
    }
    
    while (x=='y'||x=='Y');
    
    return 0;
}
int fac(int k)
{
    int i, p = 1;
    for(i = 1; i <= k; i++)
    {
        p *= i;
    }
    return p;
}
float permu(int n, int b)
{
    float t = fac(n) / fac(n - b);
    return t;
}
float com(int n, int b)
{
    float t = fac(n) / (fac(b) * fac(n-b));
    return t;
}
float pw(int n, int b)
{
    float p=1;
    for (int i=0; i<b; i++)
    {
        p *= n;
    }
    return p;
}
float pwi(int n, int b)
{
    float p;
    p=pow(n, 1.0/b);
    return p;
}
float dc(int n)
{
    return  n*(180.0*7.0/22.0);

}
float cd(int n)
{
    return n*(22.0/(7.0*180.0));
}
    
