int	my_putstr(char *str)
{
  int car;

  car = 0;
  while (str[car] != '\0')
    {
      my_putchar(str[car]);
      car = car + 1;
    }
}