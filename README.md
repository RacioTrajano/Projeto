# Projeto

# O que foi feito
	O projeto se iniciou com a implementação de um algoritmo para gerar um vetor que armazene as alturas médias, dado duas extremidades. Em seguida foi feito uma nova função que cria uma matriz a partir do vetor mencionado anteriormente, o qual possui a mesma quantidade de colunas do vetor e suas linhas são determinadas a partir da altura indicada em cada posição do vetor. Posteriormente, tal matriz foi transformada, passando do tipo int para struct, uma vez que para gerar o arquivo .ppm é necessário três argumentos para determinar as cores da imagem no sistema rgb.Após esse procedimento foi criada a função gera_ppm, a qual escreve o arquivo no formato descrito.

# O que não foi feito
	A implementação da alocação dinâmica do vetor de alturas foi realizada com sucesso, no entanto a alocação da matriz não foi bem sucedida, uma vez que acarretou diversos erros de compatibilidade com a struct. Além disso, a implementação de uma imagem mais elaborada, por meio da implementação de estrelas, também não foi bem sucedida. Entretanto é possível ver um comentário no código, o qual se encontra no arquivo :”funcoes.c”, na função gera_imagem, nas linhas 47 a 52.

# O que teria sido feito diferente
	Ao observar o arquivo ppm, o leitor irá observar que a segunda montanha, de cor verde, foi gerada apenas como um deslocamento da montanha vermelha. Isso aconteceu devido aos sucessivos erros de compilação quando tentou-se implementar uma lógica mais elaborada. 
# Observações
	Todo o projeto foi desenvolvido na plataforma repl.it. Dessa forma, todas as bibliotecas utilizadas estão mencionadas no código. Além disso, sobre as entradas para execução do projeto, os comandos estão de acordo com o que foi pedido na orientação do projeto.
