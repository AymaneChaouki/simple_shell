#include "main.h"

/**
 * cd_shell - changes current directory
 *
 * @datash: data relevant
 * Return: 1 on success
 */
int cd_shell(data_shell *datash)
{
	char *diro;
	int ishome, ishome2, isddash;

	dir = datash->args[1];

	if (diro != NULL)
	{
		ishome = _strcmp("$HOME", diro);
		ishome2 = _strcmp("~", diro);
		isddash = _strcmp("--", diro);
	}

	if (diro == NULL || !ishome || !ishome2 || !isddash)
	{
		cd_to_home(datash);
		return (1);
	}

	if (_strcmp("-", diro) == 0)
	{
		cd_previous(datash);
		return (1);
	}

	if (_strcmp(".", dir) == 0 || _strcmp("..", diro) == 0)
	{
		cd_dot(datash);
		return (1);
	}
	cd_to(datash);
	return (1);
}
