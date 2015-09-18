public class Programa {

  public static void main(String[] args) {

    // Construa dois funcionários com o new.
    Funcionario f1 = new Funcionario();
    Funcionario f2 = new Funcionario();

    f1.nome = "Murilo";
    f1.departamento = "TI";
    f1.dataEntrada = "xx/xx/xxxx";
    f1.RG = "xxxxxxxxx-x";
    f1.salario = 100;
    f1.mostra();

    f1.bonifica(1000);

    f1.mostra();

    //Vamos agora preencher os dados de f2
    f2.nome = "Felipe";
    f2.departamento = "TI";
    f2.dataEntrada = "xx/xx/xxxx";
    f2.RG = "xxxxxxxxx-x";
    f2.salario = 2000;
    f2.mostra();

    f2.bonifica(1000);

    f2.mostra();

    // Construa dois funcionários com o new e compare-os com o == (Apontam para objetos diferentes, logo retornam false).
    if(f1 == f2){
      System.out.println("Iguais");
    } else {
      System.out.println("Diferentes");
    }

    // Mais testes (agora pra retornar True (Iguais))
    Funcionario f3 = f1;

    if(f1 == f3){
      System.out.println("Iguais");
    } else {
      System.out.println("Diferentes");
    }

  }

}
