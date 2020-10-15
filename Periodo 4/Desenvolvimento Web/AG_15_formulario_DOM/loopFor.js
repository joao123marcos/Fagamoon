//loop For
let lista = ["Pousada", "Quarto Single", "Quarto Casal", "Suite Premium"]

console.log('imprimindo lista usando For')
function loopFor(lista){
    for(let i = 0; i < lista.length; i++){
        console.log(lista[i])
    }
}
loopFor(lista)
console.log(' ')
//loop while
console.log('imprimindo lista usando while')
function loopWhile(lista){
    let i = 0;
    while (i < lista.length) {
        console.log(lista[i])
        i++;
    }
}
loopWhile(lista)
console.log(' ')

console.log('imprimindo lista usando ForEach junto com Arrow function')
lista.forEach(item => console.log(item))