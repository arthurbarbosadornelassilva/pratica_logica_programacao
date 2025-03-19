// HERANÇA: é um mecanismo que permite que uma subclasse, ou classe filha, herde os atributos e métodos de outra superclasse, ou classe pai (reutilização de código)
public class Funcionario extends Pessoa {
    private String cargo;

    public Funcionario(String nome, int idade, String cargo) {
        super(nome, idade);
        this.cargo = cargo;
    }

    public String getCargo() {
        return cargo;
    }


    public void setCargo(String cargo) {
        this.cargo = cargo;
    }
    public static void main(String[] args) {
        Funcionario Joao = new Funcionario("Joao", 25, "Acessor de Investimentos");
        Funcionario Ivana = new Funcionario("Ivana", 21, "Estagiária");

        Joao.getIdade();
        Joao.getCargo();
        Ivana.getIdade();
        Ivana.setCargo("Analista de Sistemas");
    }
}
