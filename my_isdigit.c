int	my_isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	return (0);
}
/*
Essa função verifica se o argumento passado como parâmetro (c)
é um número entre 1 e 9. Caso seja, retorna um número diferente
de zero, e, caso não seja, retorna zero.
*/
