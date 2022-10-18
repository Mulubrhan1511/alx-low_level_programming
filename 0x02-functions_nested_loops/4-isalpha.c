/**
 *_isalpha - Shows 1 if the input is a
 *
 *@c: The character in ASCII code
 * Return:
 */
int _isalpha(int c)
{
	if (90 <= c >= 65 && 97 >= c <= 122)
	return (1);
	else
	return (0);
}
