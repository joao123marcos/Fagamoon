using namespace std;
main()
{
   float kilometragemRodada=0,litroTanque=0,media=0,resultado,soma_kilometragem=0;
   int i=0;
  
   cout<<"Quantos litro você colocou no tanque? Ou você pode digitar zero para encerrar o programa:\n";
   cin>>litroTanque;
   
   while(litroTanque >0)
   {
    resultado=0;
    cout<<"Qual foi a kilometragem total que você andou?\n";
    cin>>kilometragemRodada;
    resultado= kilometragemRodada/litroTanque;
    soma_kilometragem=soma_kilometragem + kilometragemRodada;
    i++;
    
    cout<<"Os kilômetros por litro para este tanque foram "<<resultado<<endl;
    
    cout<<"Quantos litros você colocou no tanque? Ou você pode digitar zero para encerrar o programa:\n";
    cin>>litroTanque;
  }
  if(soma_kilometragem > 0)
  {
    media=soma_kilometragem/i;
    cout<<"A media dos geral de kilômetros por litro foi "<<media<<endl;
  }
  else if(litroTanque <= 0)
    cout<<"Como você digitou zero ou um valor negativo para os litros colocados no tanque o programa foi encerrado!"<<endl;
}
