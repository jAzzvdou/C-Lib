/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jazevedo <jazevedo@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/19 16:06:43 by jazevedo          #+#    #+#             */
/*   Updated: 2023/10/19 16:07:04 by jazevedo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

static size_t	ft_strlen(const char *str)
{
	size_t	len;

	len = 0;
	while (str[len] != '\0')
		len++;
	return (len);
}

static char	*ft_strcpy(char *dest, char *src)
{
	size_t	i;

	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

static char	*ft_strdup(char *s)
{
	char	*new_str;
	size_t	len;

	len = ft_strlen(s);
	new_str = malloc(sizeof(char) * (len + 1));
	if (new_str == NULL)
		return (NULL);
	ft_strcpy(new_str, s);
	return (new_str);
}

static size_t	get_total_length(int size, char **str, char *sep)
{
	int		i;
	size_t	total_length;

	i = 0;
	total_length = 0;
	while (i < size - 1)
	{
		total_length = total_length + ft_strlen(str[i]);
		total_length = total_length + ft_strlen(sep);
		i++;
	}
	total_length = total_length + ft_strlen(str[i]);
	return (total_length);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	int		i;
	char	*new_str;
	size_t	offset;
	size_t	total_length;

	i = 0;
	if (size == 0)
		return (ft_strdup(""));
	total_length = get_total_length(size, strs, sep);
	new_str = malloc(sizeof(char) * (total_length + 1));
	if (new_str == NULL)
		return (NULL);
	offset = 0;
	while (i < size - 1)
	{
		ft_strcpy(new_str + offset, strs[i]);
		offset = offset + ft_strlen(strs[i]);
		ft_strcpy(new_str + offset, sep);
		offset = offset + ft_strlen(sep);
		i++;
	}
	ft_strcpy(new_str + offset, strs[i]);
	return (new_str);
}
