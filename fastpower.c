#include "ntapi.h"

void power(int argc, char* argv[])
{
	if (argc == 1)
	{
		NtInitiatePowerAction(PowerActionShutdown, PowerSystemShutdown, 0, TRUE);
	}

	else if (stricmp(argv[1], "sleep") == 0 || stricmp(argv[1], "sl") == 0)
	{
		NtInitiatePowerAction(PowerActionSleep, PowerSystemSleeping1, 0, TRUE);
		NtInitiatePowerAction(PowerActionSleep, PowerSystemSleeping2, 0, TRUE);
		NtInitiatePowerAction(PowerActionSleep, PowerSystemSleeping3, 0, TRUE);
	}

	else if (stricmp(argv[1], "hibernate") == 0 || stricmp(argv[1], "hi") == 0)
	{
		NtInitiatePowerAction(PowerActionHibernate, PowerSystemHibernate, 0, TRUE);
	}

	else if (stricmp(argv[1], "shutdown") == 0 || stricmp(argv[1], "sh") == 0)
	{
		NtInitiatePowerAction(PowerActionShutdown, PowerSystemShutdown, 0, TRUE);
	}

	else if (stricmp(argv[1], "reboot") == 0 || stricmp(argv[1], "re") == 0)
	{
		NtInitiatePowerAction(PowerActionShutdownReset, PowerSystemWorking, 0, TRUE);
	}

	else if (stricmp(argv[1], "shutdownoff") == 0 || stricmp(argv[1], "so") == 0)
	{
		NtInitiatePowerAction(PowerActionShutdownOff, PowerSystemShutdown, 0, TRUE);
	}
}

int main(int argc, char* argv[])
{
	GetPrivilege(SE_SHUTDOWN_NAME);

	power(argc, argv);

	return 0;
}