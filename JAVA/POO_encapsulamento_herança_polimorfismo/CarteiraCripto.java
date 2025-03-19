// ENCAPSULAMENTO: princípio no qual alocamos instruções de um programa em unidades únicas que chamamos de classes
import java.util.Scanner;

public class CarteiraCripto {
    private static final String ENDERECO_CARTEIRA = "nHjjx45678109";
    private String dono;
    private double saldoBitcoin;
    Scanner sn = new Scanner(System.in);


    public CarteiraCripto(String dono, double saldoBitcoin) {
        this.dono = dono;
        this.saldoBitcoin = saldoBitcoin;
        System.err.println("CARTEIRA DE CRIPTOMOEDA:\n\n");
    }
    public void depositarBitcoin() {
        System.out.println("Valor a ser depositado: \n");
        double valorAdicionado = sn.nextDouble();
        saldoBitcoin += valorAdicionado;

        System.out.println(saldoBitcoin);
    }
    public void sacarBitcoin() {
        double valorSacado = sn.nextDouble();
        if (saldoBitcoin != 0 && saldoBitcoin > valorSacado) {
            saldoBitcoin -= valorSacado;
        }
        System.out.println("Saldo Insuficiente");

        System.out.println(saldoBitcoin);
        sn.close();
    }
    public double getSaldoBitcoin() {
        return saldoBitcoin;
    }
    public String getEnderecoCarteira() {
        return ENDERECO_CARTEIRA;
    }
    public String getDono() {
        if (dono.isEmpty()){
            System.out.println("A variável está vazia");
        }
        return dono;
    }
}