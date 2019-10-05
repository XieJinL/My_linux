＃include <stdio.h>

int main()
{
  int i,j,temp;
  int a[10];
  
  for (i = 0; i < 10; i++)
    scanf("%d", &a[i]);
  
  for (i = 0; i < 10; i++)
  {
    for (j = 10 - i; j < i; j++)
    {
      if (a[j] > a[j + 1])
      {
        temp = a[j];
        a[j] = a[j + 1];
        a[j + 1]  = temp;
      }  
    }
  }
  for (i = 0; i < 10; i++)
    printf("%d", a[i]);

  return 0;
}
