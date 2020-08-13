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

fun��o filaVazia(fila:tipoFila): l�gico;
inicio
	se (fila.frente == fila.tras) ent�o
		retorna verdadeiro;
	sen�o
		retorna falso;
	fim-se;
fim;


fun��o desenfileira(var fila:tipoFila): inteiro;
declare
	num: inteiro;
inicio
	se(filaVazia(fila) == verdadeiro ) ent�o
		retorna 0;
	sen�o
		fila.frente = fila.frente->prox;
		num = fila.frente->item;
		retorna num;
	fim-se;
fim;


fun��o retornaPrimeiro(fila:tipoFila): inteiro;
declare num: inteiro;
inicio
	se(filaVazia(fila) == verdadeiro) ent�o
		retorna 0;
	sen�o
		num = fila.frente->prox->item;
		retorna num;
	fim-se;
fim;














