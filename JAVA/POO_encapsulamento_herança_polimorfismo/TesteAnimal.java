// POLIMORFISMO: é a capacidade de um objeto assumir diferentes formas ou comportamentos dependendo do contexto. Em Java, o polimorfismo é implementado através de herança e interfaces.
// TIPOS DE POLIMORFISMO: Sobrescrita, Sobrecarga, 

public class TesteAnimal {
    public static void main(String[] args) {
        Animal animal1 = new Cachorro();
        Animal animal2 = new Gato();
    
        animal1.fazerSom(); // Saída: Au au!
        animal2.fazerSom(); // Saída: Miau!
    }
}