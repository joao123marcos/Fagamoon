<!DOCTYPE html>
<html lang="en">
<head>
    <meta charset="UTF-8">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>Document</title>
</head>
<body>
    
    <h1>Primeiros passos PHP</h1>
    <?php
       //1- comentarios: '//' ou '#'
       //echo 'echo';

       //2 - comentários multilinhas: /* */
       /*
       $x = 10;
       echo $x;
       */

       //3 - Variáveis em PHP inicial com $
       /*são case sentive
       $x = 10;
       $nome = 'João';
       $Nome = 'Marcos';
       echo $nome;
       */
       
       //4 - comando echo
       /*
       echo('echo com parenteses');
       echo 'echo sem parenteses';
       Echo 'Echo';
       ECHO 'ECHO';*/

       //5 - Tipos de variaveis no PHP
      //String
      //$string = 'Isso é uma string';

      //Inteiro
      $inteiro = 1230;

      //saber o tipo de variavel
      //var_dump($string);
      //var_dump($inteiro);

      //float
      //$float = 10.5;
      //var_dump($float);

      //boleano
      //$verdadeiro = true;
      //$false = false;
      //var_dump($verdadeiro);
      //var_dump($false);

      //Array
      //$carros = array('fusca', 'uno', 'combe');
      //var_dump($carros);
      /*
      $misto = array('fusca', 10, false);
      var_dump($misto); */

      //6- Objeto
      /*
      class Pessoa{
          public $nome;
          public $idade;
          
          //contrutor da classe
          public function __construct($nome,$idade){
              $this -> nome = $nome;
              $this -> idade = $idade;
          }
      }
      //declarando uma instância do objeto
      $pessoa = new Pessoa('Joao', 30);

      //acessando uma atributo do objeto
      //echo $pessoa -> nome;
      //echo $pessoa -> idade;*/
      
      //7 - Definindo uma função
      //function raizQuadrada($numero){
      //    return $numero**(0.5);
      //}
      //echo raizQuadrada(9);

      //8 - Funções mais populares
      //tamanho do array
      //echo 'O tamanho da string é '.strlen($pessoa->nome);

      //Busca string dentro de uma string
      //$texto = 'Os alunos de desenvolvimento web da fagamon são os melhores!';
      //$palavra = 'fagamon';
      //retorna a posição que começa a string buscada
      //echo strpos($texto, $palavra);

      //Função verifica se é inteiro
      //echo is_int ($inteiro);

      //Função verifica se é float
      //echo is_float ($float);

      //Função verifica se é um número
      //echo is_numeric($inteiro);

    ?>

</body>
</html>