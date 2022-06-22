#include <Stdio.h>
#include <conio.h>

int bsearch(int low, int high, int k, int a[])
{
    int mid;
    if (low <= high)
    {

        mid = (low + high) / 2;
        if (a[mid] == k)
            return mid;
        else if (k > a[mid])
            bsearch(mid + 1, high, k, a);
        else
            bsearch(0, mid - 1, k, a);
    }
    else
        return -1;
}
int main()
{
    int a[500], n, k, i, j, temp, z;
    printf("enter the size of elements: ");
    scanf("%d", &n);
    printf("enter the elements: ");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    for (i = 0; i < n; ++i)
        for (j = 0; j < (n - i - 1); ++j)
            if (a[j] > a[j + 1])
            {
                temp = a[j];
                a[j] = a[j + 1];
                a[j + 1] = temp;
            }
    printf("sorted elements: ");
    for (i = 0; i < n; i++)
    {
        printf("%d, ", a[i]);
    }

    printf("\nenter the element you want to search: ");
    scanf("%d", &k);
    z = bsearch(0, n - 1, k, a);
    if (z == -1)
        printf("item not found");
    else
        printf("item present at position: %d", z+1);
    return 0;
    getch();
}