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
}
  