

int my_printf(char* main_str, ... );
int decimal_order(int x);//returns the order/or 100th or 1000th
int decimal_length(int x);//returns number of characters in a number
void write_decimal(int inp_int, int* tot_char);//takes as an arugment an integer, and pointer to an integer,
// writes it in string form, tot_char pointer counts the number of characters printed and add up to existing tot_char int
int get_octal_length(int x);//returns numberlength of octal of particular integer number;
int my_strlen(char* str1);//return number of characters of particular string;
void write_octal(int a, int* tot_char);//writes integer in octal, and adds up/increments tot_char by each character printed
void write_hexadecimal(int x, int* tot_char);//writes integer in hexadecimal
void write_hexadecimal_long(uintptr_t x, int* tot_char);//writes integer in hexadecimal/and adds up/increments tot_char by each character printed
void write_ptr_part(int* tot_char);//writes 0x/and adds up/increments tot_char by each character printed in this case 2;
int get_long_hex_length(uintptr_t x);//returns number of int required for string which contatins hex value of x int;

