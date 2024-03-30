
#include <stdio.h>
#include <stdint.h>
int main(){
	uint32_t N;
	int K;
	scanf("%d %d", &N, &K);
	
	// 000101000 - N K = 4
	// 0001 01000
	// 0 0010 1000
	// 00 0101 000
	// 000 1010 00
	uint32_t mask = ~0;
	mask <<= (32 - K);
	// 111100000 
	
	uint32_t max = 0;
	// K = 31 2 варианта
	for (int i = 0; i <= (32 - K); ++i){
		uint32_t v = mask & N >> (32 - K - i);
		if (v > max){
			max = v;
			}
		mask >>= 1;
		}
	
	printf("%u", max);
	
	return 0;
	}
