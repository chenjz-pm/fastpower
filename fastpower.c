#include "ntapi.h"
int main(int argc,char* argv[])
{
	GetPrivilege(SE_SHUTDOWN_NAME);
	if (argc == 1)
	{
		return NtShutdownSystem(ShutdownNoReboot);
	}
	else
	{
		printf("usage:fastpower [mode]\n\t[mode]=0|1|2 \n\tmode: 0:Shutdown 1:ReBoot 2:");
	}
}