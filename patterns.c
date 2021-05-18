#include<stdio.h>
#include<cs50.h>
int main()
{
  int pattern = get_pattern("Enter type of pattern");
  int row = get_pattern("Enter number of rows");
  int i,c;
  if(pattern==1)
  {
  for(i=1;i<=row;i++)
  {
    for(c=1;c<=i;c++)
    {
      printf("# \n");
    }
  }}
  else
  {
    for(i=row;i>=1;i--)
    {
      for(c=row;c<=i-1;c--)
      {
        printf("# \n");
      }
    }}
  return 0;
}
