#include <stdio.h>

main()
{
    int n = 0;
    int mas[100];

    while ((n < 1) || (n > 100))
    {
        printf("Ведите олличество элементов массива от 1 до 100 включительно ");
        scanf("%i",&n);
    }
    
    printf("Вводите значения массива последоватенльно через Enter \n");

    for(int i=0;i<n;i++)
    {
        scanf("%i",&mas[i]);
    }

    int min, max, sum;    
    min = max = mas[0];
    sum = 0;
    
    for(int i = 0; i < n; i++)
    {
        if (min > mas[i])
        {
            min = mas[i];
        }
        if (max < mas[i])
        {
            max = mas[i];
        }
        sum += mas[i];
    }    

    float avg = (float)sum / (float)n;
    printf("min=%i\nmax=%i\nsum=%i\navg=%f\n", min, max, sum, avg);

}