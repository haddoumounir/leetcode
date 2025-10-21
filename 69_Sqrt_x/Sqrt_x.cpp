class Solution {
public:
    int mySqrt(int x)
	{
		long i;

        i = 1;
		if (x == 0 || x == 1)
			return (x);
		while (i * i <= x)
			i++;
		return ((int)(i - 1));
	}
};