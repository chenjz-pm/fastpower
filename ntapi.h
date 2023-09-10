#ifndef _INC_NTAPI_H_
#define _INC_NTAPI_H_

#include "ntapidef.h"

int GetPrivilege(LPCSTR lpName)
{
	HANDLE hToken;
	TOKEN_PRIVILEGES priv = { 0 };
	LUID PrivilegeLUID;
	OpenProcessToken(GetCurrentProcess(), TOKEN_ADJUST_PRIVILEGES, &hToken);
	LookupPrivilegeValue(NULL, lpName, &PrivilegeLUID);
	priv.PrivilegeCount = 1;
	priv.Privileges[0].Luid = PrivilegeLUID;
	priv.Privileges[0].Attributes = SE_PRIVILEGE_ENABLED;
	AdjustTokenPrivileges(hToken, FALSE, &priv, NULL, NULL, NULL);
	if (GetLastError() == ERROR_NOT_ALL_ASSIGNED)
	{
		return 0;
	}
	return 1;
}

NTSTATUS NtInitiatePowerAction(POWER_ACTION SystemAction, SYSTEM_POWER_STATE MinSystemState, ULONG Flags, BOOLEAN Asynchronous)
{
	HMODULE hModule = GetModuleHandle("ntdll.dll");
	if (hModule == NULL)
	{
		return -1;
	}

	NTINITIATEPOWERACTION _NtInitiatePowerAction = (NTINITIATEPOWERACTION)GetProcAddress(hModule, "NtInitiatePowerAction");
	FreeLibrary(hModule);
	return _NtInitiatePowerAction(SystemAction, MinSystemState, Flags, Asynchronous);
}

#endif
