#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main()
{
	char str[100];
	while (scanf("%s", str) != EOF)
	{
		int n, j;
		int nLen = strlen(str);
		for (int i = nLen - 1; i > 0; i--)
		{
			if (islower(str[i]))
			{
				j = i;
				while (islower(str[j]) && j >= 1)
				{
					j--;
				}
				if (j == 0 && islower(str[j]))
				{
					break;
				}
				if (isupper(str[j]))
				{
					char temp = str[j];
					for (int k = j; k < i; k++)
					{
						str[k] = str[k + 1];
					}
					str[i] = temp;
				}
			}
		}
		printf("%s\n", str);
	}
	return 0;
}