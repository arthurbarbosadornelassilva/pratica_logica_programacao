// CLASSES & ARRAYS
import java.util.ArrayList;

public class ListaRecomendacoes {
    public ArrayList<String> ListaProdutos;

    public ListaRecomendacoes() {
        this.ListaProdutos = new ArrayList<>();

        System.out.println("Lista de Recomendação (ATIVADA): \n\n");
    }
    public int contador() {
        return this.ListaProdutos.size();
    }
    public void adiProd(String elemento) {
        this.ListaProdutos.add(elemento);
    }
    public void remProd(String elemento) {
        this.ListaProdutos.remove(elemento);
    }
    public ArrayList<String> obterTodosProd() {
        return this.ListaProdutos;
    }
}
