// SOBRESCRITA DE MÉTODO: é uma das formas de trabalhar o polimorfismo. A sobrescrita permite que a subclasse personalize métodos herdados da superclasse (nesse caso, Animal), mas mantendo os mesmos nome e parâmetros

public class Gato extends Animal {
    @Override
    public void fazerSom() {
        System.out.println("Miau!");
    }
}