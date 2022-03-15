/**
* _islower - checks if a character is low case
* @c : parameter
* Return: 1 if the letter is lowercase, otherwise 0
*/

int _islower(int c)
{
	/*ascii code of lowcase letters ranges from 97-122)*/
	if (c >= 97 && c <= 122)
		return (1);

	return (0);
}
