#include <string.h>
#include <stdio.h> 
#include <iostream>

void main()
{
	char HelloStr[] = "Hello";
	char WorldStr[] = "World!!!";
	char SeparatorStr[] = ", ";
	printf_s("%s, %s\n", HelloStr, WorldStr);

	int newStrLen = strlen(HelloStr) + strlen(SeparatorStr) + strlen(WorldStr) + 1;

	char* newStrPtr = new char[newStrLen];
	{
		strncpy_s(newStrPtr, newStrLen, HelloStr, strlen(HelloStr));
		strncpy_s(newStrPtr + strlen(HelloStr), newStrLen - strlen(HelloStr), SeparatorStr, strlen(SeparatorStr));
		strncpy_s(newStrPtr + strlen(HelloStr) + strlen(SeparatorStr), newStrLen - strlen(HelloStr) - strlen(SeparatorStr), WorldStr, strlen(WorldStr));
	}
	printf_s("Print string print_f:\n");
	printf_s("New Hello string:\n%s\n", newStrPtr);

	printf_s("Print string for:\n");
	for (char* strIt = newStrPtr; strIt < newStrPtr + newStrLen; ++strIt)
	{
		printf_s("%c", *strIt);
	}
//	printf_s("\n");
	delete newStrPtr;

	std::system("pause");
}
