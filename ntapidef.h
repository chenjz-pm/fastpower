#ifndef _INC_NTAPIDEF_H_
#define _INC_NTAPIDEF_H_

#include <stdio.h>
#include <windows.h>
#include <SubAuth.h>

typedef enum _SHUTDOWN_ACTION
{
	ShutdownNoReboot,
	ShutdownReboot,
	ShutdownPowerOff
} SHUTDOWN_ACTION, * PSHUTDOWN_ACTION;

typedef NTSTATUS(NTAPI* NTINITIATEPOWERACTION)(POWER_ACTION SystemAction, SYSTEM_POWER_STATE MinSystemState, ULONG Flags, BOOLEAN Asynchronous);


#endif
