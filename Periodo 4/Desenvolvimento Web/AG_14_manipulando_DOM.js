//conhecendo o documento a patir do DOM
/*O DOM tem uma estrutura hierarquica 
que começa pelo WINDOW ( que é a janela do meu navegador)
depois vem o document (que o é o documento referente ao hiperTexto, que está contido na janela do navegador)
e depois o vem o html (que pertence ao documento e este por sua vez está contido na janela do navegador)

window -> document -> html -> head e body*/
// 1 - Conhecendo o documento a partir do DOM
// console.log(window.document);

// 2 - Explorando atributos do 'document'
// Pegar URL do document
// console.log(window.document.URL);
// pegar title do document
// console.log(window.document.title);

// 3 - mostrar que script executa antes de ler HTML, temos que  coloca-lo embaixo
// console.log(window.document.body);

// 4 - Mas, será que temos que saber de cor qual elemento existe no DOM? Ou há alguma forma de buscá-lo?
// console.log(window.document.getElementsByTagName("h1"));

// 5 - Abrir o objeto no console do navegador para conhecer seus atributos

// 6 - Conhecendo atributo innerHTML e array de elementos. Vamos tentar acessar o que vimos de atributos
var teste = window.document.getElementsByTagName("h1").innerHTML;
// console.log("Sem acessar o indice do array de h1: "+teste);
// Estou pegando TODOS os elementos h1, entao o navegador nao sabe qual innerText eu quero. Preciso indicar o indice do array de h1
teste = window.document.getElementsByTagName("h1")[0].innerHTML;
// console.log("Acessando o indice do array de h1: "+teste);

// 7 - deixando de usar "window" toda hora
teste = document.getElementsByTagName("h1")[0].innerHTML;
// console.log("Deixando de escrever window antes de document: "+teste)

// 8 - Mas, acessar pelo indice do array de elementos parece pouco eficiente. Ha outra maneira de acessar um elemento unico?
teste = document.getElementById("teste");
// console.log(teste);
// console.log(teste.innerText)

// 9 - Já que consigo acessar o atributo do objeto, sera que consigo modifica-lo?
// document.getElementById("teste").innerText="caramba, consegui!";//Olha o navegador atualizado!

// 10 - Que tal usar o prompt, pop up conhecido, para pegar input do usuario e colocar no innerText?
// document.getElementById("teste").innerText = prompt("Escreva seu nome: ")

// 11 - E se eu nao quiser modificar um conteúdo, mas criar algo novo? 
// Vou precisar criar o HTML
document.write("<h2>Esse é um novo h2</h2>");
// document.write("<h2 id="novoID">Esse é um novo h2</h2>");

// 12 - Verificar o novo h2 e criat um id para ele
console.log(document.getElementsByTagName("h2"));
document.getElementsByTagName("h2")[0].id="novoID";
console.log(document.getElementById("novoID"));

// 13 - Se eu criei um elemento, sera que tambem posso deletar um?
//Preciso especificar o que quero remover, vou usar o id
// document.getElementById("novoID").remove();
// document.getElementsByTagName("h1")[0].remove();

//14 - Vamos olhar novamente o que consigo acessar no elemento de id novoID
console.log(document.getElementById("novoID"));
// Parece que consigo acessar os atributos de estilo dele, 
//lembram que o estilo entra junto da estrutura na formacao do DOM?
// document.getElementById("novoID").style.color = "red";

// 15 - Vamos explorar os metodos do elemento (ex. onclick)
// Chamamos esses métodos que estao sempre rodando de eventos
function trocarCor(cor){
    document.getElementById("novoID").style.color = cor;
}

document.getElementById("novoID").onclick = function(){
    if (document.getElementById("novoID").style.color === "red"){
        trocarCor("blue");
    }else if (document.getElementById("novoID").style.color === ""){
        trocarCor("red");
    }else if(document.getElementById("novoID").style.color === "blue"){
        trocarCor("");
    }
}

// 16 - Vamos ver esse oncopy
document.getElementById("novoID").oncopy = function(){
    document.getElementById("novoID").innerText = "PLÁGIO É CRIME!";
}

// 17 - onclick, veja o que acontece sem o botao
// Qual modelo de programacao me permite reuso da funcao? linha 84
document.getElementById("botaoCadastrar").onclick = function(){
// function cadastrarAluno(){
    let input = document.getElementById("inputDoUsuario").value;
    let ul = document.getElementById("listaAlunos");
    //Para criar elemento
    let li = document.createElement("li");
    // Preciso colocar o conteudo dentro do li
    // Primeiro, crio o conteudo avulso
    let conteudo = document.createTextNode(input);
    // agora, preciso aninhar o conteudo no li
    li.appendChild(conteudo);
    // agora, preciso aninhar o li ao ul
    ul.appendChild(li);
}

//18 - Vamos testar mudar de cor o novoID denovo...reparem a importância de pegar elemento por id, e não por indice e tag (esses podem mudar com a manutenção do sistema)
// Solucao é comentar linha 47 e descomentar linha 43
