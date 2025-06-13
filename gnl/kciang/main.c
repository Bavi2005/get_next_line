#include <stdio.h>
#include <fcntl.h>
#include "get_next_line_bonus.h"

int	main(void)
{
	int	fd;

	fd = open("tripolie/files/42_with_nl", O_RDONLY);
	char	*string;

	string = get_next_line(0);
	while (string)
	{
		printf("%s", string);
		free(string);
		string = get_next_line(0);
	}
	return (0);
}
