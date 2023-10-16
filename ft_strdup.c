char    *ft_strdup(char *src)
{
        int             i;
        int             n;
        char    *final;

        i = 0;
        while (src[i] != '\0')
        {
                i++;
        }
        final = (char *)malloc(sizeof(char) * (i + 1));
        if (final == NULL)
                return (NULL);
        n = 0;
        while (src[n] != '\0')
        {
                final[n] = src[n];
                n++;
        }
        final[n] = '\0';
        return (final);
}
