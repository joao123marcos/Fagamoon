<!-- 

    Olá André segue o meu exercicio. Ele não está funcionando e não entendo o porque, 
    na minha cabeça era para funcionar pois estou pegando a string que o usuário digitou,
    minha conexão com o banco está funcionando então não sei porque não funciona. Na linha
    30 se você substituir por um comando SQL meu codigo funciona perfeitamente eu testei
    Olhei na internet algumas coisa e tentei copiar mas também não funcionou
-->


<!DOCTYPE html>
<html lang="en">
<head>
    <meta charset="UTF-8">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>Document</title>
</head>
<body>

    <form method="post">
        <label for="sql">Digite o comando sql:</label>
        <input type="text" name="sql">
        <input type="submit" value="ENVIAR">
    </form>

    <?php
        include 'conexaoBanco.php';

        $conexao = conexaoBanco();
        //verificando se a super global Post está setada e diferente de nulo
       if (isset($_POST['sql']) && $_POST['sql'] != '') {
            $consulta = $_POST['sql'];
            $resultadoSQL = $conexao -> query($consulta);
            while ($linha = $resultadoSQL -> fetch_assoc()) {
                echo "ID: ".$linha['idPessoa']."<br> "."Nome Pessoa: ".$linha['nomePessoa']
                    ."<br> ". "Sobrenome Pessoa: ".$linha['sobrenomePessoa']. "<br>". "Idade Pessoa: ".
                    $linha['idadePessoa']."<br>";
            }
       }
       
       else {
            echo "Não foi informada nenhuma instrução SQL";
        }
        $conexao->close();
    
    ?>
</body>
</html>