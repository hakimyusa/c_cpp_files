//*Program_simple_calculator_switch_case
#include <stdio.h>
int main() 
{
  //declaration variable
  char op;
  double bil1, bil2;
  
  //input
  printf("Memilih jenis operasi bilangan (+, -, *, /): ");
  scanf("%c", &op);
  printf("Masukkanlah kedua bilangan: ");
  scanf("%lf %lf", &bil1, &bil2);
	
  //process and output
  switch (op) {
    case '+':
      printf("%.1lf + %.1lf = %.1lf", bil1, bil2, bil1 + bil2);
      break;
    case '-':
      printf("%.1lf - %.1lf = %.1lf", bil1, bil2, bil1 - bil2);
      break;
    case '*':
      printf("%.1lf * %.1lf = %.1lf", bil1, bil2, bil1 * bil2);
      break;
    case '/':
      printf("%.1lf / %.1lf = %.1lf", bil1, bil2, bil1 / bil2);
      break;
    default:
      printf("Error! operator tidak bisa dijalankan");
  }

  return 0;
}
