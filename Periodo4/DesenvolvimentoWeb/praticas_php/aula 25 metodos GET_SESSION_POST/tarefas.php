<!doctype html>
<html lang="en">
  <head>
    <!-- Nào se preocupe com a seção head, ela é automáticado Bootstrap -->
    <meta charset="utf-8">
    <meta name="viewport" content="width=device-width, initial-scale=1, shrink-to-fit=no">
    <meta name="description" content="">
    <meta name="author" content="Mark Otto, Jacob Thornton, and Bootstrap contributors">
    <meta name="generator" content="Jekyll v4.1.1">
    <title>Offcanvas template · Bootstrap</title>

    <link rel="canonical" href="https://getbootstrap.com/docs/4.5/examples/offcanvas/">

    <!-- Bootstrap core CSS -->
    <link href="bootstrap.min.css" rel="stylesheet">

    <style>
      .bd-placeholder-img {
        font-size: 1.125rem;
        text-anchor: middle;
        -webkit-user-select: none;
        -moz-user-select: none;
        -ms-user-select: none;
        user-select: none;
      }

      @media (min-width: 768px) {
        .bd-placeholder-img-lg {
          font-size: 3.5rem;
        }
      }
    </style>
    <!-- Custom styles for this template -->
    <link href="offcanvas.css" rel="stylesheet">

    <script src="offcanvas.js" defer></script>
  </head>
  <body class="bg-light">
     

    <main role="main" class="container">
      <div class="my-3 p-3 bg-white rounded shadow-sm">
        <form class="form-inline " method="GET">
          <input class="form-control mr-auto" style="width:975px;" type="text" placeholder="Tarefa" name="tarefa">
          <button class="btn btn-outline-success my-2 my-sm-0" type="submit">Cadastrar</button>
        </form>
      </div>

      <div class="my-3 p-3 bg-white rounded shadow-sm">
        <h6 class="border-bottom border-gray pb-2 mb-0">Tarefas</h6>
        <!-- Essa div será uma tarefa -->
        <?php
          foreach($lista_tarefas as $tarefa){
            $titulo++;
            echo "<div class='media text-muted pt-3'>
                  <p class='media-body pb-3 mb-0 small lh-125 border-bottom border-gray'>
                    <strong class='d-block text-gray-dark'>Tarefa $titulo</strong>
                    $tarefa
                  </p>
                </div>";
          };
        ?>

        <!-- Fim da div que é uma tarefa, agora só usar o PHP para repetir quando tem uma nova -->



      
    </main>
  </body>
</html>
