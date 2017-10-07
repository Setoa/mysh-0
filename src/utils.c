#include "utils.h"
#include <string.h>
#include <stdlib.h>
#define MAXSIZE 100
void mysh_parse_command(const char* command,
                        int *argc, char*** argv)
{
  // TODO: Fill this!
	*argv=(char**)malloc(sizeof(char*)*MAXSIZE);
	int count=0;
	char* token;
	char* cmd=(char*)malloc(sizeof(char)*MAXSIZE);
	strcpy(cmd,command);
	token=strtok(cmd," \n\t");
	if(token==NULL)
	{
		*argc=1;
		**argv=(char*)malloc(sizeof(char)*MAXSIZE);
		strcpy(**argv,"");
		return;
	}
	while(token!=NULL)
	{
		(*argv)[count]=(char*)malloc(sizeof(char)*100);
		strcpy((*argv)[count],token);
		token=strtok(NULL, " \n\t");
		count++;
	}
	*argc=count;
}
