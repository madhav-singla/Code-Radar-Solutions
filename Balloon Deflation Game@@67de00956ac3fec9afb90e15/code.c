void deflateBalloons(int arr[], int n)
{
    int remaining = n;
    while (remaining > 0)
    {
        {
            printf("%d\n", remaining);

            int min = arr[0];
            for (int i = 1; i < n; i++)
            {
                if (arr[i] < min && arr[i] != 0)
                {
                    min = arr[i];
                }
            }
            for (int i = 0; i < n; i++)
            {
                arr[i] = arr[i] - min;
            }
            remaining = 0;
            for (int i = 0; i < n; i++)
            {
                if (arr[i] != 0)
                {
                    remaining++;
                }
            }
        }
    }
}