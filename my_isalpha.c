int	my_isalpha(int c)
{
	if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'))
		return (1);
	return (0);
}
/*
Essa função verifica se o argumento passado como parâmetro (c)
é uma letra, seja ela maiúscula ou minúscula. Caso seja, retorna
um número diferente de zero, e, caso não seja, retorna zero.
*/
