// Variaveis Javascript:  15/09/2020
// 1 - Sensíveis ao caso (Mm). 
//     Convencao usar cammelCase, comecando com minuscula. 
//     Pode-se usar $ ou _ para iniciar uma variavel.
// 2 - Nao aceita caracteres especiais: @#$%&*()+[]ao°<>/|
// 3 - Sem acentuacao ou pontuacao: (“’!? ̈ ́`^~.:;,)
// 4 - Sublinhados "_" e tracos "-" em vez de espacos 
//xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx

//Tipo de váriaveis
//var idade = 26; //Tipo Number
//var primeironome = "Joao"; //string
//
//var tipoDaVariavelIdade = typeof(idade);
//console.log(tipoDaVariavelIdade);
//xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx

//var saidaConsole = typeof(primeironome);
//console.log(saidaConsole);
//var verdade = false
//var indefinida = undefined
//xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx

//Declaração de Objeto
/* Notação de objetos em JS
var aluno ={
  
  idade: 18,
  nome: 'João Marcos',
  altura: 1.70
}*/
//xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx

//Conversão de valores
/*
var dez = 5 + 5 -> 10
var dezSqn = 5 + '5' -> 55
var cincoAcredite = "10" /2 -> 5 */
//xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx

//Conversão de texto pra número
/*
var texto = "5"
var numero = parseInt(texto)*/
//xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx

//operadores aritméticos
/*
var adicao = 1 + 2
var subtracao = 3 - 2
var multiplicacao = 5 * 2
var divisao = 4 / 2 
var potencia = 2 ** 2
var resto 2 % 2
var incremento = 1 */
//xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx

//Tipos de incremento
/*
-------- incremento pós-fixo-----------
var x = 3
var y = x++
-------- incremento pré-fixo-----------
var x = 3
var y = ++x */
//xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx

// Operadores relacionais
//A comparação abstrata mais comumente utilizada (e.g. ==) converte os operandos no mesmo tipo antes da comparação
/*console.log("Operador 'Igual a', (''==0): "+(''==0));
console.log("Operador 'Igual a', (''=='0'): "+(''=='0'));
console.log("Operador 'Igual a', (false=='0'): "+(false=='0'));
console.log("Operador 'Igual a', (null==undefined): "+(null==undefined));

console.log("Operador 'Igual a', (''==0): "+(''===0));
console.log("Operador 'Igual a', (''=='0'): "+(''==='0'));
console.log("Operador 'Igual a', (false=='0'): "+(false==='0'));
console.log("Operador 'Igual a', (null==undefined): "+(null===undefined));
console.log((1===(2/2)))*/
//xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx

//operadores logicos
/*console.log((1===1)&& (2===2))
console.log((1===1)&& (2===3))
console.log((1===3)&& (2===4))

console.log((1===1)|| (2===2))
console.log((1===1)|| (2===3))
console.log((1===2)|| (2===3))*/
//xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx

//operador ternário
//(1<0)? console.log("Sim"):console.log("Não")
//xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx

//operadores de atribuição
/*var atribuicao = 2;
atribuicao += 3; //5
atribuicao -= 2; //3
atribuicao *= 2; //6
atribuicao /= 2; //3
atribuicao %= 2; //1
console.log(atribuicao)*/
//xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx

//Pou-up boxes - Caixa de dialogo
//alert("Caixa de dialogo!")
//xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx

/*var resposta = confirm("Caixa de confirmação")
if(resposta == true){
  alert("Você clicou em OK")
}
else{
  alert("Você clicou em cancelar!")
}*/
//xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx

/*var resposta = prompt("caixa de comando")
alert("Você digitou: "+resposta)*/

//função
/*
function raizQuadrada(numero){
  var resultado
  resultado = numero**(1/2)
  return resultado
}

var raizDeDois = raizQuadrada(2)
alert("A raiz de dois é "+raizDeDois)*/



/*
alert("olá bem vindo a pizzaria!")

var saborPizza = prompt("Informe o sabor de sua pizza: "); 
var nomeCliente = prompt("Informe seu nome: ");
var telCliente = prompt("Informe seu telefone: ");
var enderecoEntrega = prompt("Informe endereço para entrega: ");
var formaPagamento = prompt("Informe o meio de pagamento ");
var confirma = confirm("Confirma o pedido?");
if (confirma == true){
  alert("Recibo \n\n Sabor: "+saborPizza+"\n Cliente: "+nomeCliente+"\n Telefone: "+telCliente+"\n Endereço: "+enderecoEntrega+"\n Pagamento:"+formaPagamento);  
  alert("Obrigado pela prefrencia");
}
else{
  alert("Que Pena");
}*/

/*temperatura = 36.6
console.log(temperatura)

nomePessoa = 'João Marcos'
console.log(nomePessoa)

nomePessoa = 'João Marcos ' + temperatura
console.log(nomePessoa)

console.log("Incremento da variavel")
while(temperatura <=40.0)
{
  temperatura++
  console.log(temperatura)
}

temperatura = 40.6

console.log('Decremento da variável')
while(temperatura >= 36.0)
{
  console.log(temperatura)
  temperatura-- 
}*/

