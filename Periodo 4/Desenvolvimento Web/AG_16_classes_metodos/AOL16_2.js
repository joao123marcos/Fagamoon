//orientação a objeto

// 1 - declaração de objeito literal

/*let aluno = {
    nome:"",
    matricula: null
}*/
/*Neste caso como só tem um objeto e eu criei duas instancias
de objeto a última instancia substitui a primeira

let joao = aluno
joao.nome = "João Marcos"
joao.matricula = "01"

console.log(joao)

let maria = aluno

maria.nome= "Maria"
maria.matricula= "02"

console.log(maria)*/

// 2 -  declaração de uma classe
/*class Aluno {
    //declaração do construtor da classe
    constructor(){
        this.nome=""
        this.matricula=null
    }
}

let joao = new Aluno()

joao.nome= "João Marcos"

let maria = new Aluno()

maria.nome= "maria"

console.log(joao.nome)
console.log(maria.nome)*/

//3 - estendendo classe
class Pessoa{
    constructor(){
        this.nome=""
        this.matricula=null
    }
}

class Aluno extends Pessoa{
    constructor(){
        super();
        this.nota = 10
    }
    choranota(prova){
    console.log(`Voce errou a nota da minha prova de ${prova}`);
    }
}

let joao = new Aluno()

joao.nome= "João Marcos"

let maria = new Aluno()

maria.nome= "maria"

console.log(joao.nome)
console.log(maria.nome)

joao.choranota("JavaScripit")
