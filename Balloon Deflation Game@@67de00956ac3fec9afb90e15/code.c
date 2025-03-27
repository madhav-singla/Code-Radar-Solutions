void deflateBalloons(int arr[], int n)
{
    int remaining = n;
    while (remaining > 0)
    {

        printf("%d\n", remaining);

        int min = 100000;
        for (int i = 1; i < n; i++)
        {
            if (arr[i] < min && arr[i] > 0)
            {
                min = arr[i];
            }
        }
        for (int i = 0; i < n; i++)
        {
            if (arr[i] > 0)
            {
                arr[i] = arr[i] - min;
            }
        }
        remaining = 0;
        for (int i = 0; i < n; i++)
        {
            if (arr[i] > 0)
            {
                remaining++;
            }
        }
    }
}