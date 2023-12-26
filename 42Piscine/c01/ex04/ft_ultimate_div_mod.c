void	ft_ultimate_div_mod(int *a, int *b)
{
	int	bolen;
	int	kalan;

	bolen = *a / *b;
	kalan = *a % *b;
	*a = bolen;
	*b = kalan;
}
