#include "utils.h"
#include <string.h>
#include <stdlib.h>
void mysh_parse_command(const char* command,
                        int *argc, char*** argv)
{
  // TODO: Fill this!
	char** arr=(char**)malloc(sizeof(char*));
	int count=0;
	char* token;
	char* cmd=(char*)malloc(sizeof(char));
	strcpy(cmd,command);
	token=strtok(cmd," ");
	while(token!=NULL)
	{
		arr[count]=(char*)malloc(sizeof(char));
		strcpy(arr[count],token);
		token=strtok(NULL," ");
		count++;
	}
	*argc=count;
	*argv=arr;
}
