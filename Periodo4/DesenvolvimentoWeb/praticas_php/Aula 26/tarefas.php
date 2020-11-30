<!DOCTYPE html>
<html lang="en">
<head>
    <meta charset="UTF-8">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>Document</title>
</head>
<body>

<?php
    // Incluindo arquivo de conexao  
    include 'conexao.php';
    
    $conexao = conectar();
    $consulta = "select * from tarefas";
    $resultado = $conexao->query($consulta);

    if($resultado->num_rows > 0){
        while($linha = $resultado->fetch_assoc()){
            echo "Titulo da tarefa: ".$linha['titulo']."<br>"."Descricao da tarefa: ".$linha['descricao']."<br><br>";
        }
    }

    //Fechando a conexao com o banco
    $conexao->close();





?>
    
</body>
</html>

