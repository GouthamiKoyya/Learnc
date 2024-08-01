#include <stdio.h>

int main() {
int numbers = 2345;
int revNumbers = 0;
while (numbers) {
  revNumbers = revNumbers * 10 + numbers % 10;
  numbers /= 10;
}
printf("%i", revNumbers);

return 0;


}