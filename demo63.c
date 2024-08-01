#include <stdio.h>

int main() {
   int numbers = 234;
   int revNumbers = 0;
   while (numbers) {
      revNumbers = revNumbers * 10 + numbers % 10;
      numbers /= 10;

   }

printf("%d", revNumbers);
return 0;



}