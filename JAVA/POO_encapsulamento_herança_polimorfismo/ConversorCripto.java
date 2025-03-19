// SOBRECARGA: Em Java, métodos sobrecarregados (overloaded methods) são métodos que compartilham o mesmo nome, mas possuem assinaturas diferentes. A assinatura de um método inclui o nome do método e sua lista de parâmetros (tipos e ordem)
import java.util.Scanner;

public class ConversorCripto {
    Scanner sn = new Scanner(System.in);

    public ConversorCripto() {
        System.out.println("CONVERSOR DE MOEDAS:\n\n");
    }

    // Métodos Sobrecarregados
    public void converter(double btc) {
        System.out.println("Insira o valor em BTC a ser convertido para dólar: \n");

        btc = sn.nextDouble();

        double dolar = 84000;
        double conversao = btc * dolar;
        System.out.println("\nValor em dólar: " + conversao);
    }
    public void converter(double btc, String paraCripto){
        System.out.println("Insira o valor em BTC a ser convertido para Ethereum: \n");

        btc = sn.nextDouble();
        
        double conversao = (btc * 84000) / 2000;
        paraCripto = String.format("\nValor em Etherium: %.2f", conversao);
    }
    public void converter(double valorReais, double precoBTC){
        System.out.println("Insira o valor em REAIS a ser convertido para BTC: \n");

        valorReais = sn.nextDouble();
        precoBTC = 1/480000;

        double conversao = valorReais * precoBTC;
        System.out.println("\nValor em BTC: " + conversao);
    }
}