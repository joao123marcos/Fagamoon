function validarNome(id)
{
    let valorNome = document.getElementById(id).value;
    
    for(let cont = 0; cont < 7; cont++)
    {
        if(!isNaN(valorNome[cont]))
           return false;
    }
    return true;
}
export {validarNome};