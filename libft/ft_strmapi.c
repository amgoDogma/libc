#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	unsigned int	i;
	unsigned int	add;
	char			*temp;

	i = 0;
	if (s == NULL)
		return (NULL);
	add = (int)ft_strlen(s);
	temp = (char *)malloc(sizeof(char) * (add + 1));
	while (s[i] != '\0' && temp)
	{
		temp[i] = (*f)(i, s[i]);
		if (!(temp + i))
			return (NULL);
		i++;
		temp[i] = '\0';
	}
	if (temp && s[i] == '\0')
		temp[i] = '\0';
	return (temp);
}
