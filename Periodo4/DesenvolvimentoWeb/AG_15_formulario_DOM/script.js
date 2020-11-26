//1 - Template String
// Manutenção, legibilidade e quebra de linhas
// let nome = 'Andre';
// alert(`Meu nome é ${nome}
// Outra linha`);

// // 2 - Criando uma funcao com Template Strings
// function addRelogio(nomeRelogio){
//     let hora = new Date().getHours();
//     let mensagem = ` ${nomeRelogio} informa a hora certa: ${hora} horas`;
//     alert(mensagem);
// }

// addRelogio('Meca');

// 3 - Definindo comportamento de formulários
const senhaPadrao = 'admin';
//To pengando o elemento botaoEnviar, no evento do click
document.getElementById('botaoEnviar').onclick = function (){
    let senha = document.getElementById('senha').value;
    if(senha === senhaPadrao){
        //.value é eu pegando o valor que foi digitando no campo
        let nome = document.getElementById('primeiroNome').value;
        let sobrenome = document.getElementById('sobrenome').value;
        let endereco = document.getElementById('endereco').value;
        let recibo = `${nome} ${sobrenome}, sua matrícula foi efetuada com sucesso!
        Enviaremos o comprovante para o endereço: ${endereco}`;
        //createElement - criando um elemento 
        let paragrafo = document.createElement('p');
        //createTexNode - Teste que vem no nó
        let conteudo = document.createTextNode(recibo);
        //Anexando um nó na arvore DOM (conteúdo é filho do paragrafo)
        paragrafo.appendChild(conteudo);
        //Pegando a TAG body na posição zero e inserindo o apendice paragrafo
        document.getElementsByTagName('body')[0].appendChild(paragrafo);

    }else {
        alert(`A senha informada (${senha}) não confere.`);
    }
};

