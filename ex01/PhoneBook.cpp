#include <iostream>

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t			i;
	unsigned char	*str1;
	unsigned char	*str2;

	i = 0;
	str1 = (unsigned char *)s1;
	str2 = (unsigned char *)s2;
	while ((str1[i] || str2[i]) && (i < n))
	{
		if ((str1[i] < str2[i]) || (str1[i] > str2[i]))
			return (str1[i] - str2[i]);
		i++;
	}
	return (0);
}

int main(int argc, char *argv[])
{
	(void)argc;
	if(ft_strncmp(argv[1], "ADD", 4) == 0)
			std::cout << "ADD";
	if(ft_strncmp(argv[1], "EXIT", 5)  == 0)
			std::cout << "EXIT";
	if(ft_strncmp(argv[1], "SEARCH", 5) == 0)
			std::cout << "SEARCH";
}

