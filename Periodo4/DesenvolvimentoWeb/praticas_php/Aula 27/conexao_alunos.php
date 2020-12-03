<!DOCTYPE html>
<html lang="en">
<head>
    <meta charset="UTF-8">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>Document</title>
</head>
<body>    
    <?php
    //incluindo o arquino conexao_banco neste arquivo
    include 'conexao_banco.php';
      
    $conexao = conectar();
    //pegando uma string (consulta em SQL) e guardando em uma variável
    $consulta = "SELECT * FROM tarefas";
    $resultado = $conexao -> query($consulta); //query significa consulta

    if ($resultado -> num_rows > 0) {
        //enquanto houver linhas?
        while ($linha = $resultado -> fetch_assoc()) {
            echo "Titulo da tarefa: " .$linha['titulo']. "<br> "."Descricao da tarefa:
            ".$linha['decricao']."<br><br>";
        }
    }
    
    //Encerrando a conexão com o banco de dados
    $conexao->close();
?>
</body>
</html>

