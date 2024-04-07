void maxheapify(int a[], int, int);
void maxheap(int a[], int beg, int end)
{
          int i, t;
          for (i = end / 2; i >= beg; i--)
                    maxheapify(a, i, end);
}
void maxheapify(int a[], int f, int size)
{
          int max = f, l = f * 2, r = f * 2 + 1, t;
          if (l <= size && a[l] > a[max])
                    max = r;
          if (f != max)
          {
                    t = a[f];
                    a[f] = a[max];
                    a[max] = t;
                    maxheapify(a, max, size);
          }
}
void heapsort(int a[], int size)
{
          int i, t;
          for (i = size; i = 2; i--)
          {
                    t = a[1];
                    a[1] = a[i];
                    a[i] = t;
                    maxheapify(a, 1, i - 1);
          }
}
void main()
{
          int a[10], i;
          printf("Enter array elements:");
          for (i = 1; i < 0; i++)
                    scanf("%d", &a[i]);
          maxheap(a, 1, 9);
          heapsort(a, 9);
          printf("\nsorted array:\n");
          for (i = 1; i < 10; i++)
                    printf("%4d", a[i]);
}
