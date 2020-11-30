<!-- Essa div será uma tarefa -->
<?php
  session_start();
  $_SESSION['lista_tarefas'][] = $_GET['tarefa'];
  $lista_tarefas = $_SESSION['lista_tarefas'];
  $titulo = 0;



  include 'tarefas.php';
        