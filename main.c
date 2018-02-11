#include <stdio.h>
#define NC 9

int 	locked = 1;
char 	password[NC] = "awpsosrd\0";

int 	main(void)
{
	while (locked == 1)
	{
		char 	user_input[15];

		printf("Password: ");
		scanf("%s", user_input);

		for (int i = 0; i <= NC-1; i++)
		{
			if (password[i] != user_input[i]) {
				printf("[*] Password refused\n");
				break;
			} else if (i == NC-1)
				locked = 0;
		}
	}
	printf("[*] Password accepted\n");
	return (0);
}
