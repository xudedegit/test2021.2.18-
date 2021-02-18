#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
void print_jinzita(int n)
{
    int temp;
    temp = n;
    for (int i = 0; i < n; i++)
    {

        for (int j = 0; j < temp - 1; j++)
        {
            printf(" ");
        }
        temp--;
        for (int j = 0; j < 2 * i + 1; j++)
        {
            printf("*");
        }
        printf("\n");
    }
    int temp1 = 1;
    for (int i = n - 1; i > 0; i--)
    {
        for (int j = 0; j < temp1; j++)
        {
            printf(" ");
        }
        temp1++;
        for (int j = 0; j < 2 * i -1; j++)
        {
            printf("*");
        }
        printf("\n");
    }


}
int main()
{
    int n;
    scanf("%d", &n);
    print_jinzita(n);

    return 0;
}