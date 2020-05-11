#include<stdio.h>
int main() {
printf("Enter a number");
int n; 
scanf("%d",&n);
int a = 0, b = 1, c = 0;
printf("0 1 ");
for (int i = 0; i < (n-2); i++) {
  c = a + b;
  a = b;
  b = c;
  printf("%d ", c);   
 }
return 0;
}
