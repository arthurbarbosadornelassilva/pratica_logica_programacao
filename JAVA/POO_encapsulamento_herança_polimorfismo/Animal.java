// SOBRESCRITA DE MÉTODO: é uma das formas de trabalhar o polimorfismo. A sobrescrita permite que a subclasse personalize métodos herdados da superclasse (nesse caso, Animal), mas mantendo os mesmos nome e parâmetros

public class Animal {
    public void fazerSom() {
        System.out.println("Som genérico de animal");
    }
}