#include "ntapi.h"
#include "opt.h"

void power(int power_action,int sleep)
{
	Sleep(sleep);

	if (power_action == 2)
	{
		for (int i = 2; i < 5; i++)
		{
			NtInitiatePowerAction(PowerActionSleep, i, 0, TRUE);
		}
	}
	else
	{
		NtInitiatePowerAction(power_action, NIPA_arg2(power_action), 0, TRUE);
	}
}

int main(int argc, char* argv[])
{
	GetPrivilege(SE_SHUTDOWN_NAME);

	paropt(argc, argv);

	power(reco1,reco2);

	return 0;
}