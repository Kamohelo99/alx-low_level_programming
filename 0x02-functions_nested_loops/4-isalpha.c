/**
* _isalpha - checks for alphabetic character
* @c: parameter
*
* Return: 1 if it's a letter, otherwise 0
*/
int _isalpha(int c)
{
	if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
		return (1);

	return (0);
}
