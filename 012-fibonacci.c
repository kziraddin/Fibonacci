#include <stdio.h>

long returnFib(int val) {
	
  long x = 1;
  long y = 1;
  long z = 1;
  int i;
  
  if(val <= 0) {
	  return 0;
  }
  if(val == 1) {
	  return x;
  }
  if(val == 2) {
	  return y;
  }
  
  for (i=3;i<=val;i++){
  
	  x = y;
	  y = z;
	  z = x + y;
  }
  
  printf("----- Inside Fib val: %d - Address val: %d\n", val, val);
  
  return z;
}

int main() {
	
	long rv;
	int val;
	
	printf("Enter fibonacci position (0-93) you want (0 to exit): ");
	scanf("%d", &val);
	if(val <= 0 || val > 92) {
		printf("Goodbye!\n");
		return 0;
	}
	rv = returnFib(val);
	printf("Fibonacci number for position %d is: %ld\n\n", val, rv);

	while(val != 0) {
    	printf("Enter fibonacci position (0-93) you want (0 to exit): ");
		scanf("%d", &val); 
		if(val < 93) {
			rv = returnFib(val);
		    printf("----- In main val: %d - Address val: %d\n", val, val);
			printf("Fibonacci number for position %d is: %ld\n\n", val, rv);
		}
		if(val == 0) {
			printf("Goodbye!\n");
			return 0;
		}
    }
   
    return 0;
}

/** OUTPUT 
**/
