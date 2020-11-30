<?php

function conectar(){
    $servidor = "localhost";
    $usuario = "andre";
    $senha = "fagammon";
    $bd = "tarefas";
    
    // Inicializando um objeto de conexao_com_bd mysqli()
    $conexao_com_bd = new mysqli($servidor, $usuario, $senha, $bd);
    
    if ($conexao_com_bd->connect_error) {
        //Encerra a execução do PHP 
        die();
    }

    return $conexao_com_bd;
}
