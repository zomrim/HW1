#include <stdio.h>

int nums_d(int n,int d);

void main() {
	int d = 3 , a = 29600;
	printf("There is %d nums that divides by %d", nums_d(a,d) , d);
}

int nums_d(int n, int d) {  
	int static count = 0;
	if (n < 10)
	{
		if (n % d == 0)
			return count++;
		else return 0;
	}
	nums_d(n / 10, d);
		if (n % 10 % d == 0 && n%10 != 0)
		count++;
		return count;
	}