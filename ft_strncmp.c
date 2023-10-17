int     ft_strncmp(const char *s1, const char *s2, size_t n)
{
        size_t	i;

        i = -1;
        while ((s1[i++] != '\0' || s2[i++] != '\0') && i < n)
        {
                if (s1[i] > s2[i])
                        return (1);
                else if (s1[i] < s2[i])
                        return (-1);
        }
        return (0);
}
