//Trabalhando com a definição de Objeto

var pedido = {
  saborPizza:"",
  nomeCliente:"",
  telCliente:"",
  enderecoEntrega:"",
  formaPagamento:"",
  gerarRecibo:function(){
      let recibo = confirm("Confirma o pedido?")
      if(recibo == true){
          alert("Recibo \n\n Sabor: "+this.saborPizza+"\n Cliente: "+this.nomeCliente+"\n Telefone: "+this.telCliente+"\n Endereço: "+this.enderecoEntrega+"\n Pagamento:"+this.formaPagamento) 
          alert("Obrigado pela prefrencia")
      }

      else{
          alert("Que pena!")
      }
  }
}

alert("olá bem vindo à WebPizzaria!")
//atribui ao atributo saborPizza do obejto pedido o que o usuário escreveu no pompt
pedido.saborPizza = prompt("Escolha o sabor da pizza")
pedido.nomeCliente = prompt("Digite o nome do cliente")
pedido.telCliente = prompt("Digite o telefone do cliente")
pedido.enderecoEntrega = prompt("Digite o endereço de entrega")
pedido.formaPagamento= prompt("Digite a forma de pagamento")
pedido.gerarRecibo()

console.log(pedido.saborPizza)

//array
//criar um array
var frutas = ["Maça", "Banana"]

console.log(frutas)
console.log(frutas[0])
console.log(frutas[1])
frutas[0] = 156
console.log(frutas[0])

//obter tamanho do array
console.log(frutas.length)

//adicionar um item ao final do array
frutas.push("laranja")
console.log(frutas)

//removendo  elemento do final do array
frutas.pop()
console.log(frutas)

//removendo elemetno do inicio do array
frutas.shift()
console.log(frutas)

//adicionando elemetno no inicio do array
frutas.unshift("Pera")
console.log(frutas)

//procurando indice a partir do elemento e/ou item
var indice = frutas.indexOf("Pera")
console.log(indice)

//Remover pela posição
frutas.splice(1,1)//Eu coloca a informação de qual posição quero comecar a remover e quantos elementos quero remover
console.log(frutas)

var cont = 10
while (cont >= 0) {
    console.log(cont)
    cont--
}

cont = 10 
do {
    console.log(cont)
    cont--
} while (cont >=0);

nota =7
if (nota >= 8) {
    console.log("Conceito A")
}

else if(nota >= 5){
    console.log("Conceito B")
}

else{
    console.log("Conceito C")
}

for(cont = 0; cont <= 10; cont++){
    console.log(cont)
}