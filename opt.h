#ifndef _OPT_H_
#define _OPT_H_

const char* opt1[12] = { "sleep","sl","hibernate","hi","shutdown","sh","reboot","re","shutdownoff","so" };
const char* opt2[4] = { "-t","-time" };
int reco1=0, reco2=0;

#include <string.h>
#include <stdio.h>
#include <stdlib.h>

void paropt(int argc, char* argv[])
{
	for (int i = 1; i < argc; i++)
	{
		for (int j = 0; j < 2; j++)
		{
			if (stricmp(opt2[j], argv[i]) == 0)
			{
				i++;
				reco2 = atoi(argv[i]);
			}
		}
		
		for (int j = 0; j < 1; j++)
		{
			if (stricmp(opt1[j], argv[i]) == 0)
			{
				reco1 = j/2+2;
			}

		}
	}
	if (reco2 == 0)
	{
		reco1 = 4;
	}
}

int NIPA_arg2(int arg1)
{
	switch (arg1)
	{
		case 3: return 5;
		case 4: return 6;
		case 5: return 1;
		case 6: return 6;
	}
}

#endif
