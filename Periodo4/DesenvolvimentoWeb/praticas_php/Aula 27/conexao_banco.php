<?php

/*A criação deste arquivo é apenas para deixar meu codigo principal mais
limpo esteticamente falando*/

//conectando no banco
function conectar(){
    $servidor ='localhost';
    $usuario = 'teste';   //Porque não funciona para todo o banco?
    $senha = '123456';
    $bd = 'tarefas';
      
    /*Mysqli é uma função que me possibilita conectar ao meu banco de dados,
    ela me retorna um objeto e este objeto estou chando de conexão*/
    $conexao = new mysqli($servidor,$usuario,$senha,$bd);

    //Tratando a situação em que tive erro de conexão ao banco
    if ($conexao->connect_error) {
      //Encerra a execução do PHP 
      die("Problema de conexão ao banco, revise os paramentros.");
    }

    return $conexao;
}

?>