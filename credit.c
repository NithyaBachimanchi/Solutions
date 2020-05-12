#include <stdio.h>
#include <math.h>
int main() {
//taking input:
printf("Enter the credit card number");
int cn;
int duplicate;
scanf("%d", &cn);
duplicate = cn;
//checking if there are 16 digits:
if(cn/10000000000000000 != 0) {
   printf("Wrong input.");
   return 0;
  }
//putting all digits into an array
int digits[16];
for(int i = 15; i >=0; i--) {
   digits[i] = cn%10;
   cn = cn/10;  
  }
//double every alternate digit:
for(int i = 0; i < 15; i+=2) {
   digits[i] = digits[i] * 2;
   if (digits[i] / 10 != 0) {
    //it is 2 digits:
    digits[i] = (digits[i]/10) + (digits[i]%10);
  }
}
int sum = 0;
for(int i = 0; i < 15; i++) {
    sum += digits[i];
  }
if (sum % 10 == 0) {
   printf("Valid credit card number");
  }
else {
   printf("Invalid credit card number");
  }
return 0;
}
