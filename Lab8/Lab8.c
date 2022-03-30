#include<stdio.h>
#include<stdlib.h>
#include<time.h>

void uart_write_char (unsigned char);

int main() {
	uart_write_char(65); // Transmit A
	uart_write_char(10); // Transmit new line
	uart_write_char(66); // Transmit B
	uart_write_char(10);
	uart_write_char('C'); // Transmit C
	uart_write_char(10);
	uart_write_char('D');
	printf("\n");
	
	return 0;
}

//***************************************
// Prints a char to the monitor
void uart_write_char (unsigned char ch) {
	printf("%c", ch);
	
	return;
}