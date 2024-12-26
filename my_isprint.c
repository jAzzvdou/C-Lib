int	my_isprint(int c)
{
	if (c > 31 && c < 127)
		return (1);
	return (0);
}
/*
Essa função verifica se o argumento passado como parâmetro (c)
é um caractere imprimível da tabela ASCII. Caso seja, retorna
um número diferente de zero, e, caso não seja, retorna zero.
*/
