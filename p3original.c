#include<stdio.h>
int input_number()
{
  int n;
  printf("Enter a number: \n");
  scanf("%d",&n);
  return n;
}
int is_composite(int n)
{
   int i,flag=0;
  
  if(n==0||n==1)//The number 0 & 1 is neither prime nor composite number
    return 2;
  else
  {
  for (i = 2; i <= n / 2; ++i)
  {
    // if n is divisible by i, then n is not prime
    // change flag to 1 for non-prime number
    if (n % i == 0) 
    {
      flag = 1;
      break;
    }
  }
    return flag;  
  }
}
  
void output(int n,int composite)
{
 
  if(composite==0)
  printf("The number %d is prime number",n);
  else if(composite==1)
  printf("The number %d is composite number",n);
  else
  printf("The number 0 & 1 is neither prime nor composite number");
}
int main()
{
  int n,composite;
  n=input_number();
  composite=is_composite(n);
  output(n,composite);
  return 0;
}
4. Write a program to find Sum of composite number in an array of numbers different containing numbers entered by the user.

int input_array_size();
void input_array(int n, int a[n]);
int sum_composite_numbers(int n, int a[n]);
void output(int sum);
input:
1 2 7 8 12
output:
20


#include<stdio.h>
int input_array_size()
{
  int n;
  printf("How many numbers do you want to enter: ");
  scanf("%d",&n);
  return n;
}
void input_array(int n,int a[n])
{
  int i;
  printf("Enter %d numbers:\n ",n);
  for(i=0;i<n;i++)
  {
    scanf("%d",&a[i]);
  }
}
int sum_composite(int n, int a[n])
{
  int count=0,i;
  for(i=0;i<n;i++)
  {
       if(a[i]==2)
       {
          continue;
       }       
        else if(a[i]%2==0)
        {
         count=count+a[i];
        }
        
    }
    return count;
}
void output(int sum)
{
  printf("Sum of all composite numbers is %d",sum);
}
int main()
{
  int n,result;
  n=input_array_size();
  int a[n];
  input_array(n,a);
  result=sum_composite(n,a);
  output(result);
  return 0;
}

