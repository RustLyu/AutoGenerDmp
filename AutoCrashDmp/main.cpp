#include "AutoCrashDMP.h"

int main()
{
	SetUnhandledExceptionFilter(GPTUnhandledExceptionFilter);
	int test[100];
	std::cout << test[7777] << std::endl;
	return 0;
}
