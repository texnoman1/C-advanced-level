
/*N 001011
K 2
110010*/

#include <stdio.h>
#include <stdint.h>
int main(){
	uint32_t N;
	int K;
	scanf("%d %d", &N, &K);
	
	uint32_t res;
	uint32_t temp;
	
	uint32_t mask = ~0;
	mask >>= (32 - K);
	// 000011
	temp = N | mask;
	// 000011
	temp <<= (32 - K);
	// 110000
	
	res = N >> K;
	res = res | temp;
	
	printf("%d", res);
	
	return 0;
	}
