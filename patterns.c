#include<stdio.h>
#include<cs50.h>
void draw_line(int num){
  int i;
  for(i=0;i<num;i++){
    printf("#");
  }
void draw_filled_line(int nhashes,int max){
  int ndots=max-nhashes;
  int i;
    for(i=0;i<ndots;i++){
    printf(" ");
  }
  for(i=0;i<nhashes;i++){
    printf("#");
  }
}
int main(void)
{
  int pattern = get_pattern("Enter type of pattern (1 or 2)");
  int row = get_pattern("Number of rows");
  int i;
  if(pattern==2)
  {
  for(i=row;i<=1;i--)
  {
  draw_line(i)
  }}
  else
  {
    for(i=1;i<=row;i++)
    {
     draw_filled_line(i,row)
    }}
  return 0;
}
