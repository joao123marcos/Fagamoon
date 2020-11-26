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
       //9 - Operadores aritmeticos
       /*$X = 9;
       $Y = 3;

       //adição
       $adicao = $X + $Y;

       //Subtração
       $subtracao = $X - $Y;

       //Multiplicação
       $multiplicacao = $X * $Y;

       //Divisao
       $divisao = $X / $Y;

       //modulo
       $modulo = $X % $Y;

       //expoente
       $expoente = $X ** $Y;

       //function raizQuadrada($numero){
       //    return $numero**(0.5);
       //};

       //10 - Operadores de atribuicao
       //atribuicao
       $X = $Y;

       //atribuicao com adição (incrementa y de x)
       $X += $Y;
       $X++;

       //atribuicao com subtracao (decrementa y de x)
       $X -= $Y;
       $Y--;

       //11 - Operadores de comparação
       //Igual
       $X = 0;
       $Y = false;
       $X == $Y;

       //comparação de tipo
       $X === $Y;
       echo 'x == y ? Resposta: '.($X === $Y);

       //Não é igual
       $X != $Y;
       //$X <> $Y;

       //Não identico
       $X !== $Y;

       //comparações de grandeza
       $X <= $Y;
       $X < $Y;
       $X >= $Y
       $X > $Y;*/

       //Spaceship - nave espacial
       //$x = 10;
       //$y = 20;
       //echo($x <=> $y);

       //12 - Comandos condicionais
       //if
       //if ($x > $y) {
       //    echo 'entrei no if';
       //}

       //if ... else
       //if ($x > $y) {
       // echo 'entrei no if';
       //}
       
       //else{
       //echo 'entrei no else';
       //}

       //if..... elseif..... else
       //if ($x > $y) {
       // echo 'entrei no if';
       //}
       
       //elseif($x == $y){
       //echo 'entrei no elseif';
       //}

       //else{
       //    echo 'entrei no else';
       //}

       //Comando switch
       /*$valor = 'queijo';

       //switch ($valor) {
           case 'q':
               echo 'fazer pizza queijo';
               break;
               
            case 'calabreza':
               echo 'fazer pizza de calabreza';
               break;
            
            default:
               echo 'Por favor escolha um sabor válido';
       }*/

       //13 - Laços de repetição
       //while
       $x = 0;
       while ($x < 5) {
           echo $x. '<br>';
           $x++;
           
       }
       echo '<br>';
       //do while
       $y = 0;
       do {
           echo $y. '<br>';
           $y++;
       } while ($y <= 5);

       echo '<br>';
       //for
       for ($i=0; $i < 5; $i++) { 
           echo 'Olá mundo'.'<br>';
       }

       echo '<br>';
       //foreach
       $vetor = array('maca','melancia','laranja');
       foreach($vetor as $fruta){
           echo "$fruta.<br>";
       }
    ?> 

</body>
</html>