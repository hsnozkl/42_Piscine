int	ft_iterative_factorial(int nb)
{
	int	i;
	int	car;

	i = 1;
	car = 1;
	if (nb == 1 || nb == 0)
		return (1);
	else if (nb < 0)
		return (0);
	while (i < nb)
	{
		car = car * nb;
		nb--;
	}
	return (car);
}
