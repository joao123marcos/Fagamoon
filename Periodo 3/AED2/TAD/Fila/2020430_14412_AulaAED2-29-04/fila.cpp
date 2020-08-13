//AULA AED2 29-04-2020 - ESTRUTURA DE DADOS FILA

/* registro tipoNo
{
	item: inteiro;
	prox: ponteiro para tipoNo;
};

registro tipoFila
{
	frente: ponteiro para tipoNo;
	tras: ponteiro para tipoNo;
};

procedimento criaFilaVazia(var fila:tipoFila);
inicio
	inicializaPonteiro(fila.frente);   // fila.frente = new tipoNo;
	fila.tras = fila.frente;
	fila.tras->prox = NULL;
}

procedimento enfileira(var fila:tipoFila; x: inteiro);
inicio
	inicializaPonteiro(fila.tras->prox);  //fila.tras->prox = new tipoNo;
	fila.tras = fila.tras->prox;
	fila.tras->item = x;
	fila.tras->prox = NULL;
fim;

função filaVazia(fila:tipoFila): lógico;
inicio
	se (fila.frente == fila.tras) então
		retorna verdadeiro;
	senão
		retorna falso;
	fim-se;
fim;


função desenfileira(var fila:tipoFila): inteiro;
declare
	num: inteiro;
inicio
	se(filaVazia(fila) == verdadeiro ) então
		retorna 0;
	senão
		fila.frente = fila.frente->prox;
		num = fila.frente->item;
		retorna num;
	fim-se;
fim;


função retornaPrimeiro(fila:tipoFila): inteiro;
declare num: inteiro;
inicio
	se(filaVazia(fila) == verdadeiro) então
		retorna 0;
	senão
		num = fila.frente->prox->item;
		retorna num;
	fim-se;
fim;














