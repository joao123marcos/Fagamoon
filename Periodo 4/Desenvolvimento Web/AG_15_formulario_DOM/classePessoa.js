class Pessoa{
    constructor(){
        this.nomePessoa = ""
        this.sobrenomePessoa = ""
        this.enderecoPessoa = ""
        this.senhaPessoa = null

    }
}

let JoaoMarcos = new Pessoa()
//criando a senha padrão para ser comparada com a que o usuário digitar depois
const senhaPadrao = 'admin';
//pegando os valores no evento do click
document.getElementById("botaoEnviar").onclick = function(){
    JoaoMarcos.senhaPessoa = document.getElementById("senha").value
    if(JoaoMarcos.senhaPessoa === senhaPadrao){
        JoaoMarcos.nomePessoa = document.getElementById("primeiroNome").value
        JoaoMarcos.sobrenomePessoa = document.getElementById("sobrenome").value
        JoaoMarcos.enderecoPessoa = document.getElementById("endereco").value
        
        let recibo = `${JoaoMarcos.nomePessoa} ${JoaoMarcos.sobrenomePessoa},
        sua matricula foi realizada com sucesso. Enviaremos para o endereço ${JoaoMarcos.enderecoPessoa}
        o comprovante de sua matricula, obrigado!`
        //criando um novo nó dentro de minha estrutura (ou arvore hierarquica) DOM
        let paragrafo = document.createElement('p')
        //Aqui eu estou criando um texto manipulando DOM
        let dizeres = document.createTextNode(recibo)
        //dentro da minha estrutura de arvore DOM eu estou dizendo que dizeres é filho de paragrafo
        paragrafo.appendChild(dizeres)
        /*assim como na linha de cima, nesta eu estou fazendo a mesma coisa. Estou dizendo que PARAGRAFO
        é filho (ou está inserido) dentro da tag body*/
        document.getElementsByTagName("body")[0].appendChild(paragrafo)
        document.getElementById("paragrafo")
    }
    else{
        alert('não podemos ir pro facebook')
    }
}


