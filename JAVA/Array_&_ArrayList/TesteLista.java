public class TesteLista {
    public static void main(String[] args) {
        ListaRecomendacoes ListaFilmes = new ListaRecomendacoes();

        ListaFilmes.adiProd("Sonic 3");
        System.out.println("Quantidade de elementos: " + ListaFilmes.contador());
        System.out.println("Elementos da lista: " + ListaFilmes.obterTodosProd());
        
        ListaFilmes.remProd("Sonic 3");
    }
}
