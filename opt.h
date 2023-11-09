#ifndef _OPT_H_
#define _OPT_H_

const char* opt1[11] = { "sleep","sl","hibernate","hi","shutdown","sh","reboot","re","shutdownoff","so" };
const char* opt2[3]= { "-t","-time" };
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
			if (strcmp(opt2[j], argv[i]) == 0)
			{
				i++;
				reco2 = atoi(argv[i]);
				break;
			}
		}
		
		for (int j = 0; j < 10; j++)
		{
			if (strcmp(opt1[j], argv[i]) == 0)
			{
				reco1 = j/2+2;
				break;
			}

		}
	}
	if (reco1 == 0)
	{
		reco1 = 4;
	}
		
}

int GetVal(int arg2)
{
	switch (arg2)
	{
		case 3: return 5;
		case 4: return 6;
		case 5: return 1;
		case 6: return 6;
	}
}

#endif
