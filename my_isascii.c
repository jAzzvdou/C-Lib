int	my_isascii(int c)
{
	if (c > -1 && c < 128)
		return (1);
	return (0);
}
/*
Essa função verifica se o argumento passado como parâmetro (c)
é um número presente na tabela ASCII. Caso seja, retorna um número
diferente de zero, e, caso não seja, retorna zero.
*/
