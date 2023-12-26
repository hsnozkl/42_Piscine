int	ft_sqrt(int nb)
{
	int	sayi;

	sayi = 1;
	if (nb <= 0)
		return (0);
	while (sayi < 46341)
	{
		if (sayi * sayi == nb)
			return (sayi);
		sayi++;
	}
	return (0);
}
