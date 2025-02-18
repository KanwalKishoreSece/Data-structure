#include <stdio.h>
#define MAX 10
int arr[MAX], n;
void create()
{
    printf("Enter the size\n");
    scanf("%d", &n);
    printf("enter the array elements:");

    for (int loop = 0; loop < n; loop++)
    {
        scanf("%d", &arr[loop]);
    }
}
void insert()
{

    int pos, val;
    printf("enter the position\n");
    scanf("%d", &pos);
    printf("enter the value\n");
    scanf("%d", &val);
    if (pos <= 0 || pos > n)
    {
        printf("Insertion is not possible\n");
    }
    else
    {
        for (int loop = n; loop >= pos; loop--)
        {
            arr[loop] = arr[loop - 1];
        }
        arr[pos - 1] = val;
        n++;
    }
}
void delete()
{
    int pos;
    printf("Enter the position\n");
    scanf("%d", &pos);
    if (pos <= 0 || pos > n)
    {
        printf("Deletion is not possible\n");
    }
    else
    {
        for (int loop = pos; loop < n; loop++)
        {
            arr[loop - 1] = arr[loop];
        }
        n--;
    }
}
void display()
{
    printf("Array elements:\n");
    for (int loop = 0; loop < n; loop++)
    {
        printf("%d ", arr[loop]);
    }
    printf("\n");
}

int main()
{
    int x = -1;
    while (x != 0)
    {
        printf("Enter your choice\n (1) Create\n (2) Insert\n (3) Delete\n (4) Display\n (0) Exit\n");
        scanf("%d", &x);
        switch (x)
        {
        case 1:
            create();
            break;
        case 2:
            insert();
            break;
        case 3:
            delete ();
            break;

        case 4:
            display();
            break;
        case 0:
            printf("exting the program");
            break;
        default:
            printf("Invalid choice\n");
        }
    }
}
