<!DOCTYPE html>
<html lang="en">
<head>
    <meta charset="UTF-8">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>Document</title>
</head>
<body>
    <!--Metodo post envia as informações separadas da URL-->
    <form action="" method="post">
        <label for="email">Email:</label>
        <input type="email" name="email" id="email"><br><br>
        <label for="senha">Senha:</label>
        <input type="password" name="senha" id="senha">
        <input type="submit" value="ENTRAR">
    </form>

    <h1>Exibindo o resultado recebido pelo servidor:</h1>
    <h2>
    <?php
        session_start();
        if (isset($_SESSION['email'])) {
            $email = $_SESSION['email'];
            $senha = $_SESSION['senha'];
            echo "O email enviado foi: $email <br> A senha enviada foi: $senha";  
        }

        elseif ((isset($_POST['email']) && $_POST['email'] != '') && (isset($_POST['senha']) && $_POST['senha'] != '')){
            $email = $_POST['email'];
            $senha = $_POST['senha'];

            $_SESSION['email'] = $email;
            $_SESSION['senha'] = $senha;

            echo "O email enviado foi: $email <br> A senha enviada foi: $senha";
        }

        else {
            echo "Falha na autenticação";
        }

    ?>
    
    
    
    </h2>
</body>
</html>