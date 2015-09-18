public class Funcionario {

  // Deve ter o nome do funcionário, o departamento onde trabalha, seu salário (double), a data de entrada no banco (String) e seu RG (String).
  String nome,
   departamento,
   dataEntrada,
   RG;
  double salario;

  // Crie um método recebeAumento que aumenta o salario do funcionário de acordo com o parâmetro passado como argumento.
  void bonifica(double aumento){
    this.salario += aumento;
  }

  // Crie também um método calculaGanhoAnual, que não recebe parâmetro algum, devolvendo o valor do salário multiplicado por 12.
  double calculaGanhoAnual(){
    return (salario * 12);
  }

  // Crie um método mostra(), que não recebe nem devolve parâmetro algum e simplesmente imprime todos os atributos do nosso funcionário.
  void mostra(){
    System.out.println("Nome do funcionario: " + this.nome);
    System.out.println("Departamento: " + this.departamento);
    System.out.println("Entrou em: " + this.dataEntrada);
    System.out.println("RG: " + this.RG);
    System.out.println("Salario: " + this.salario);
    System.out.println("Ganha anualmente: " + calculaGanhoAnual() + "\n");
  }

}
