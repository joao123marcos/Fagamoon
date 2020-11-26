class Aluno{
    constructor(){
        this.nomeAluno =""
        this.notaAluno = 0
    }
}
    
class Aprovacoes extends Aluno{
    constructor(){
        super()
        //atributos da classe aprovações
        this.aprovacoes = 0
    }
    //metodo da classe aprovações
    contabilizarAprovacao(){
        if (aprovado(this.notaAluno)) {
            return this.aprovacoes = aprovacoes += 1
        }
        
    }
}

function aprovado(nota, nomeAluno){
    if(nota >= 6){
        alert(`${nomeAluno}, você está aprovado!`)
    }
    else{
        alert(`${nomeAluno}, você está reprovado!`)
    }
}

 function verificaCamposVazios(){
    if (document.getElementById("nome").value === "" && document.getElementById("nota").value === "") {
        document.getElementById("nota").style.color = "red"
        document.getElementById("nota").style.color = "red"
    }
}

let joao = new Aluno()

document.getElementById("submeter").onclick = function(){
    
    verificaCamposVazios()
    
    
    
    
    /*let retorno
    retorno = verificaCamposVazios()
    if (retorno === "red") {
        document.getElementById("nome").style.color = retorno
    }*/
    
    /*joao.nomeAluno = document.getElementById("nome").value
    joao.notaAluno = document.getElementById("nota").value
    console.log(joao.nomeAluno+" "+joao.notaAluno)*/
}