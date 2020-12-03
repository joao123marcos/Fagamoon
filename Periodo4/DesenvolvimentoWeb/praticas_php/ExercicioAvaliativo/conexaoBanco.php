<?php

function conexaoBanco(){
    //informações do banco a ser conectado
    $servidor ='localhost';
    $usuario = 'admin';
    $senha = 'passei';
    $bd = 'pessoa';
    
    //mysqli - "plugim" que me possibilita a conexão com o banco de dados
    $conexaoBanco = mysqli_connect($servidor,$usuario,$senha,$bd);
    //Verificando se se há algum erro de conexão com o banco
    if ($conexaoBanco->connect_error) {
       //Encerrando o PHP
       die("Problema de conexão com o banco, revise os paramentros");
    }
    return $conexaoBanco;
}

?>