#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int hznak(char znak,char arr[])
{
    int i;
    for (i = 0; arr[i] != '\0'; i++)
    if (arr[i] == znak)
        return 1;
    return 0;
}

int main() {

	int i;
	char text[i];
	scanf("%s", text);
	char mznaky[] = "qwertyuiopasdfghjklzxcvbnmQWERTYUIOPASDFGHJKLZXCVBNM ";

	for (i = 0; text[i] != '\0'; i++)
    {
        if (hznak(text[i], mznaky) == 1)
            printf("%c", text[i]);

    }
	return 0;
}
