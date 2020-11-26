class Pessoa{
    constructor(){
        this.nomePessoa = ""
        this.sobrenomePessoa = ""
        this.enderecoPessoa = ""
        this.senhaPessoa = null

    }
}

class Aluno extends Pessoa{
    constructor(){
        super()
    }
    //metodo da classe aluno
    imprimeNome(nomeAluno){
        alert(`${nomeAluno}, bem vindo!`)
    }
}

let joao = new Aluno()
//criando a senha padrão para ser comparada com a que o usuário digitar depois
const senhaPadrao = 'admin';
//pegando os valores no evento do click
document.getElementById("botaoEnviar").onclick = function(){
    joao.senhaPessoa = document.getElementById("senha").value
    if(joao.senhaPessoa === senhaPadrao){
        //disparando o alerta com o nome do aluno
        //joao.imprimeNome(document.getElementById("primeiroNome").value)
        joao.nomePessoa = document.getElementById("primeiroNome").value
        joao.imprimeNome(joao.nomePessoa)
        joao.sobrenomePessoa = document.getElementById("sobrenome").value
        joao.enderecoPessoa = document.getElementById("endereco").value
        
        let recibo = `${joao.nomePessoa} ${joao.sobrenomePessoa},
        sua matricula foi realizada com sucesso. Enviaremos para o endereço ${joao.enderecoPessoa}
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
    }
    else{
        alert('não podemos ir pro facebook')
    }
}


