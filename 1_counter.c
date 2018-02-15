#include <stdio.h>
/*
 *Program to count number of digits in an integer
 *Description- Demonstrate use of while loop
 */
int main()
{
	long long n;
	int count = 0;

	printf("Enter an integer: ");
	scanf("%lld", &n);

	while(n != 0)
	{
		/* n = n/10 */
		n /= 10;
		++count;
	}

	printf("Number of digit: %d\n", count);
}

/*
Output

Enter an integer: 3452
Number of digits: 4

    After first iteration, the value of n will be 345 and the count is incremented to 1.
    After second iteration, the value of n will be 34 and the count is incremented to 2.
    After third iteration, the value of n will be 3 and the count is incremented to 3.
    After fourth iteration, the value of n will be 0 and the count is incremented to 4.
    Then the test expression is evaluated to false and the loop terminates.
*/
