#include <stdio.h>

int countDigits(int);
int addDigits(int);

int main(int argc, char** argv)
{
    if (argc != 2) return 1;

    int num;
    sscanf(argv[1], "%d", &num);

    int persistence = 0;
    do
    {
        num = addDigits(num);
        persistence++;
    } while (countDigits(num) > 1);

    printf("%d\n", persistence);
}

int addDigits(int n)
{
    int total = 0;
    int count = countDigits(n);

    for (int i = 0; i < count; i++)
    {
        total += n % 10; 
        n /= 10;
    }

    return total;
}

int countDigits(int n)
{
    int count = 1;

    while (n / 10 > 0)
    {
        count++;
        n /= 10;
    }

    return count;
}
