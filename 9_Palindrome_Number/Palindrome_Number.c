static long	count(long rep)
{
	long	total;

	total = 0;
	while (rep)
	{
		rep = rep / 10;
		total++;
	}
	return (total);
}

char	*ft_itoa(int n)
{
	int		counter;
	char	*str;
	long	rep;

	rep = n;
	counter = count(rep);
	str = (char *)malloc(counter + 1);
	if (!str)
		return (NULL);
	str[counter] = '\0';
	counter -= 1;
	if (rep == 0)
		return (*str = '0', str);
	while (rep != 0)
	{
		str[counter] = '0' + (rep % 10);
		rep /= 10;
		counter--;
	}
	return (str);
}

bool isPalindrome(int x) 
{
    int len = count(x);
    if(x == 0)
        return (true);
    if(x< 0)
        return (false);
    char *str = ft_itoa(x);
    int size = strlen(str);
    int i = 0;
    while(i < size/2)
    {
        if(str[i] != str[size-i-1])
            return (false);
        i++;
    }

    return (true);
}