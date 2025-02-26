/*
 На вход программе подается беззнаковое 32-битное целое число N. Требуется найти количество единичных битов в двоичном представлении данного числа. Использовать побитовые операции
Данные на входе: 		32-битное целое число N
Данные на выходе: 		Одно целое число 

Пример №1
Данные на входе:		15
Примечание: 15 = 0000 11112, сумма единиц равна 4
Данные на выходе:	4

Пример №2
Данные на входе:		16
Примечание: 16 = 0001 00002, сумма единиц равна 1
Данные на выходе:	1
 */


#include <stdio.h>
#include <stdint.h>
int main(){
	uint32_t N;
	scanf("%d", &N);

	uint32_t mask = 1;
	
	uint32_t count = 0;

	for (int i = 0; i < 32; ++i)
    {
		uint32_t v = mask & N;
        count+=v;
		N >>= 1;
    }
	printf("%u\n", count);
	
	return 0;
	}
