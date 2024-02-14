int	my_strlen(char *str)
{
  int car;

  car = 0;
  while (str[car] != '\0')
    {
      car = car + 1;
    }
  return car;
}