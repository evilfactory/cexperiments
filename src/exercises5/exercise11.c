int inInterval(int value, int min, int max)
{
	if (value < min)
	{
		return 0;
	}

	if (value > max)
	{
		return 0;
	}

	return 1;
}